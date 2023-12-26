#include <iostream>

using namespace std;

float myMax(int a, int b)
{
  if (a > b)
    return a;
  else 
    return b;
}

float myMax(float a, float b)
{
  if (a > b)
    return a;
  else 
    return b;
}

int main()
{
  cout << myMax(1.2f, 4.7f) << endl; // invoke myMax(float, float)
  cout << myMax(3, 4) << endl;      // invoke myMax(int, int)
  return 0;
}