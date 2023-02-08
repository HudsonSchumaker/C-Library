#ifndef VEC2_H
#define VEC2_H

struct Vec2 {
    float x;
    float y;

    Vec2();
    Vec2(float x, float y);
    
    ~Vec2() = default;

    void Add(const Vec2& v);                 // v1.Add(v2)
    void Sub(const Vec2& v);                 // v1.Sub(v2)
    void Scale(const float n);               // v1.Scale(n)
    Vec2 Rotate(const float angle) const;    // v1.Rotate(angle)

    float Magnitude() const;                 // v1.Magnitude()
    float MagnitudeSquared() const;          // v1.MagnitudeSquared()
