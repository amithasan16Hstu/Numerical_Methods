#include <bits/stdc++.h>
using namespace std;
#define f(x) (1 / (1 + x))
int main()
{
   double up, lo, h;
   cout << "Enter The value of upper limit: ";
   cin >> up;
   cout << "Enter The value of lower limit: ";
   cin >> lo;
   cout << "Enter the value of h: ";
   cin >> h;
   double sum = 0;
   double x = lo;
   int i = 0;
   while (x <= up)
   {
      if (x == 0 || x == up)
      {
         sum += f(x);
      }

      else if(i%2==0)
      {
         sum += (2 * f(x));
      }
      else
      {
         sum += (4 * f(x));
      }
      x += h;
      i++;
   }
   double l = h / 3;
   double y = l * sum;
   cout << y << endl;
}