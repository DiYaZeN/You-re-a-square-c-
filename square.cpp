#include <iostream>
#include <cmath>

using namespace std;

bool is_square(int n)
{
  if(n<0)return false;
  int squareroot=sqrt(n);
  return(squareroot*squareroot==n);
}


//2nd method

// #include <iostream>
// #include <cmath>

// using namespace std;

// bool is_square(int n)
// {
//   if(n<0)return false;
//   int squareroot=sqrt(n);
//   return(squareroot*squareroot==n);
// }
