// Absolute value for integers
// 2022/04/28

#include <iostream>

using namespace std;

int main()
{
  int a = -4286;
  // mask  = a >> 31 -> (mask ^ a) - mask
  int abs = (a >> 31 ^ a - (a >> 31);
  
  printf("a=%d, abs=%d\n", a, abs);


  return 0;
}
