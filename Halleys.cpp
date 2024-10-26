#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
   return x * x * x - 2 * x - 5;
}
double f_(double x)
{
   return 3 * x * x - 2;
}
double f__(double x)
{
   return 6*x;
}
double Halleys(double x0)
{
   int count=0;
   double h = (2*f(x0)*f_(x0))/((2*f_(x0)*f_(x0))-(f(x0)*f__(x0)));
   while (abs(h) >= 0.00001)
   {
      h = (2*f(x0)*f_(x0))/((2*f_(x0)*f_(x0))-(f(x0)*f__(x0)));
      x0 = x0 - h;
      count++;
      cout <<"Iteration: "<<count<<"\t"<< x0 << endl;
   }
   cout<<"\n***********************************\n"<<endl;
   cout <<"The Final root is: "<< x0 << endl;
}
int main()
{
   double a = 2, b = 3;
   double x0 = (a + b) / 2;
   Halleys(x0);
}