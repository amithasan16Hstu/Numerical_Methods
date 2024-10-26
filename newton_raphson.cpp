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

double newton_raphson(double x0)
{
   int count=0;
   double h = f(x0) / f_(x0);
   while (abs(h) >= 0.00001)
   {
      h = (f(x0) / f_(x0));
      x0 = x0 - h;
      count++;
      
      cout <<"Iteration: "<<count<<"\t"<< x0 << endl;
   }
   cout<<"\n**********************************\n";
   cout <<"The Final root is: "<< x0 << endl;
}
int main()
{
   double a = 2, b = 3;
   double x0 = (a + b) / 2;
   newton_raphson(x0);
}