#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
   return x * x * x - 2 * x - 5;
}

double Stafenson(double x0)
{
   int count=0;
   double h = (f(x0)*f(x0))/(f(x0+f(x0))-f(x0));
   while (abs(h) >= 0.00001)
   {
      h = (f(x0)*f(x0))/(f(x0+f(x0))-f(x0));
      x0 = x0 - h;
      count++;
      cout <<"Iteration: "<<count<<"\t"<< x0 << endl;
   }
   cout<<"\n*********************************\n"<<endl;

   cout <<"The Final Root is: "<< x0 << endl;
}
int main()
{
   double a = 2, b = 3;
   double x0 = (a + b) / 2;
   Stafenson(x0);
}