#include <bits/stdc++.h>
#define MAX_ITR 20
using namespace std;

double f(double x)
{
   return (x * x * x - 2 * x - 5);
}
double c;
double Regular_Falsi(double a, double b)
{
   if (f(a) * f(b) >= 0)
   {
      cout << "Incorrect a and b" << endl;
      return 0;
   }

   // int count=0;

   for (int i = 0; i < MAX_ITR; i++)
   {
      double k1 = (a * f(b)) - (b * f(a));
      double k2 = f(b) - f(a);
      c = k1 / k2;
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
   }
   // cout<<c<< endl;
}
int main()
{
   double a = 2, b = 3;
   Regular_Falsi(a, b);
}