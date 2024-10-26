#include <bits/stdc++.h>
#define f1(x, y, z) (85 - 6 * y + z) / 27
#define f2(x, y, z) (72 - 6 * x - 2 * z) / 15
#define f3(x, y, z) (110 - x - y) / 54
#define check(x,y,z) (27*x+6*y-z-85)
using namespace std;

int main()
{
   double x0 = 0, y0 = 0, z0 = 0;
  double x2, y2, z2;
  int count=0;
  cout<<"*****************Using Gauss Seidel***************** "<<endl;
  while(abs(check(x0,y0,z0))>=0.00001)
  {
      x0=f1(x0,y0,z0);
      y0=f2(x0,y0,z0);
      z0=f3(x0,y0,z0);
      count++;
      cout<<"Iteration "<<count<<": "<<x0<<" "<<y0<<" "<<z0<<endl;
      
  }
}
