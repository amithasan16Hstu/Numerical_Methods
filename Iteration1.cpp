#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
   return x*x*x-2*x-5;
}
double derive(double x)
{
   return cbrt(2*x+5);
}
void iteration(double x)
{
   while(1)
   {
      x=derive(x);
      cout<<setprecision(6)<<x<<endl;
      if(f(x)<=0.0001)
      {
         break;
      }

   }
   cout<<x<<endl;
}