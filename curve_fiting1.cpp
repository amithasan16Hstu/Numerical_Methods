#include <bits/stdc++.h>
using namespace std;
double curveFitting(double x[], double y[], double n)
{
   double a, b;
   double x_sum, y_sum, x_sqr_sum, xy_sum;
   for (int i = 0; i < n; i++)
   {
      x_sum += x[i];
      y_sum += y[i];
      x_sqr_sum += x[i] * x[i];
      xy_sum += x[i] * y[i];
   }
   b = (n * xy_sum - (x_sum * y_sum)) / (n * x_sqr_sum - (x_sum * x_sum));
   a = (y_sum - b * x_sum) / n;
   cout << "x :" << a << "  y :" << b << endl;
}
int main()
{
   double n = 6;
   double x[] = {1, 2, 3, 4, 5, 6};
   double y[] = {1200, 900, 600, 200, 110, 50};
   curveFitting(x, y, n);
}