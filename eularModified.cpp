#include <bits/stdc++.h>
using namespace std;
#define f(x, y) (1 + (y / x))
double Eular(double x0, double y0, double h)
{
   double y10 = y0 + h * f(x0, y0);
}
double Eular_modified(double x0, double y0, double x1, double y1, double h)
{
   double y1c = y0;
   do
   {
      y0 = y1c;
      y1c = y0 + 0.5 * h * f(x1, y1);
   } while (fabs(y1c - y0) >= 0.00001);
   return y1c;
}
double value(double x, double y, double xn, double h)
{
   while (x < xn)
   {
      xn = x + h;
      double yc = Eular(x, y, h);
      double yp = Eular_modified(x, y, xn, yc, h);
      x=xn;
      y=yp;

   }
}
int main()
{
   double x,y,xn,h;
   value(x,y,xn,h);
}