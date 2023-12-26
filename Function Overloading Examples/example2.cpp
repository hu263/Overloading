#include <iostream>

using namespace std;

int myMax(int a, int b)
{
  if (a > b)
    return a;
  else 
    return b;
}

int myMax(int a, int b, int c)
{
  return myMax(a, myMax(b, c)); 
}

int main()
{
  cout << myMax(3, 4) << endl;      // invoke myMax(int, int)
  cout << myMax(3, 4, 5) << endl;   // invoke myMax(int, int, int)
  return 0;
}