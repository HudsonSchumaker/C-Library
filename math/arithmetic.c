//  O3 Ozone Project Lab 
//  arithmetic.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

float gcd(register float n1, register n2) {
  int i, gcd;
  for(i=1; i <= n1 && i <= n2; ++i) {
        if(n1%i == 0 && n2%i == 0) {
            gcd = i;
        }
    }
    return gcd;  
}

float lcm(register float n1, register float n2) {
  int gcd, lcm;
  for (i = 1; i <= n1 && i <= n2; ++i) {
      if (n1 % i == 0 && n2 % i == 0) {
        gcd = i;
      }
  }
  lcm = (n1 * n2) / gcd;
  return lcm; 
}
