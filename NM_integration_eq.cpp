#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
   return log(x);
}
int main()
{
   double a, b, h, yn, sum = 0;
   int n;
   cout << "Enter the upper limit: ";
   cin >> a;
   cout << "Enter the lower limit: ";
   cin >> b;
   cout << "How many steps are needed: ";
   cin >> n;
   double array[n];
   h = (a - b) / n;
   for (int i = 0; i <= n; i++)
   {
      if (i == 0 || i == n)
      {
         sum += array[i];
      }
      else
      {
         sum += 2 * array[i];
      }
   }
   yn = h / 2 * sum;
   cout << yn << endl;
}