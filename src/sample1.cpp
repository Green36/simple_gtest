
#include <iostream>
#include "sample1.h"

// $BCm(B: n$B$,Ii$N$H$-$O(B1$B$K$J$k(B
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

