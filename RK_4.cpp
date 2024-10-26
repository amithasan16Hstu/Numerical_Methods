#include <bits/stdc++.h>
#define fun(x, y) (x - y) / 2;
using namespace std;
int main()
{
   double initial_x, initial_y, n, want_value;
   double h, k1, k2, k3, k4,  yn;
   cout << "Enter the value of x0 ";
   cin >> initial_x;
   cout << "Enter the value of y0 ";
   cin >> initial_y;
   cout << "Enter the value you want Xn: ";
   cin >> want_value;
   cout << "How many steps do you want: ";
   cin >> n;
   h = (want_value - initial_x) / n;
   for (int i = 0; i < n; i++)
   {
      k1 = h * fun(initial_x, initial_y);
      k2 = h * fun(initial_x + 0.5 * h, initial_y + 0.5 * k1);
      k3 = h * fun(initial_x + 0.5 * h, initial_y + 0.5 * k2);
      k4 = h * fun(initial_x + h, initial_y + k3);

      yn = initial_y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
      cout << yn << "\t";
      initial_y = yn;
      initial_x = initial_x + h;
   }
   cout << yn << endl;
}