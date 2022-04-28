// Absolute value for integers
// 2022/04/28

#include <iostream>

using namespace std;

int main()
{
  int a = -4286;
  
  // method 1
  // mask  = a >> 31 -> (mask ^ a) - mask
  int abs = (a >> 31 ^ a - (a >> 31);
  
  // method 2 (use std library)
  int n = abs(a);
             
  printf("a=%d, abs=%d, n\n", a, abs, n);


  return 0;
}
