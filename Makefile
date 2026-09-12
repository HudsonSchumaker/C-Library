##
##
##
CC = ./msvc.bat
CFLAGS = -nologo -W4
CXXFLAGS = -nologo -W4 -EHsc
INCLUDES ?=
LIB_DIRS ?=
LIBS ?=
SRC_DIR = src
BUILD_DIR = build
EXE_DIR = exe
TARGET = $(EXE_DIR)/c-library.lib

LINK_FLAGS = $(if $(strip $(LIB_DIRS) $(LIBS)),-link $(foreach directory,$(LIB_DIRS),-LIBPATH:"$(directory)") $(LIBS),)

C_SOURCES = $(shell find $(SRC_DIR) -type f -name '*.c')
CPP_SOURCES = $(shell find $(SRC_DIR) -type f -name '*.cpp')
C_OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.obj,$(C_SOURCES))
CPP_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.obj,$(CPP_SOURCES))
OBJECTS = $(C_OBJECTS) $(CPP_OBJECTS)
DEPENDENCIES = $(OBJECTS:.obj=.d)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(EXE_DIR)
	./msvc-lib.bat $(OBJECTS) -OUT:$@

$(BUILD_DIR)/%.obj: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -Fo:$@
	@cp $@ $(patsubst %.obj,%.o,$@)
	@printf '%s: %s\n' '$@' '$<' > $(patsubst %.obj,%.d,$@)

$(BUILD_DIR)/%.obj: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) $(INCLUDES) -c $< -Fo:$@
	@cp $@ $(patsubst %.obj,%.o,$@)
	@printf '%s: %s\n' '$@' '$<' > $(patsubst %.obj,%.d,$@)

-include $(DEPENDENCIES)

clean:
	rm -rf $(BUILD_DIR)/* $(EXE_DIR)/*
