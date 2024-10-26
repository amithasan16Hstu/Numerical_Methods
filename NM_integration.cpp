#include <bits/stdc++.h>
using namespace std;
int main()
{
   double x0 = 0, x1 = 0.5, x2 = 0.1;
   double y0 = 1, y1 = 0.6667, y2 = 0.5000, yn;
   double h = x1 - x0;
   int choice;
   do
   {
      cout << "Menu" << endl;
      cout << "1.Tripezoidal Rule" << endl;
      cout << "2.Simpson's 1/3 Rule" << endl;
      cout << "3.Simpson's 3/8 Rule" << endl;
      cout << "4.Exit" << endl;
      cin >> choice;
      switch (choice)
      {
      case 1:
         yn = h / 2 * (y0 + y2 + 2 * (y1));
         cout << "Result is: " << yn << endl;
         break;
      case 2:
         yn = h / 3 * (y0 + y2 + 4 * (y1));
         cout << "Result is: " << yn << endl;
         break;
      case 3:
         yn = (3 * h / 8) * (y0 + y2  + 3 * (y1));
         cout << "Result is: " << yn << endl;
         break;
      case 4:
         cout << "Exit" << endl;
         return 0;

      default:
         break;
      }

   } while (choice != 5);
}