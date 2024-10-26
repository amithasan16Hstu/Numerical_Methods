#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
   return (x * x * x - 2 * x - 5);
}
double c;
double scant(double a, double b)
{
   if (f(a) * f(b) >= 0)
   {
      cout << "Incorrect a and b" << endl;
      return 0;
   }
   
   while ((b - a) >= 0.0001)
   {
      double p = a * f(b) - b * f(a);
      double p1 = f(b) - f(a);
      c = p / p1;
      
      // count++;
      if (f(c) == 0)
      {
         break;
      }
      else if (f(c) * f(a) < 0)
      {
         b = c;
      }
      else
      {
         a = c;
      }
      cout << c << endl;
      //cout << a << " " << b << endl;
   }
   
}
int main()
{
   double a = 2, b = 3;
   scant(a, b);
}