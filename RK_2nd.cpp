#include <bits/stdc++.h>
using namespace std;
#define f(x, y) (x + y) / 2
int main()
{
   double x0, y0, xn, h, n, yn, count = 0, k1, k2;
   int choice;
   cout << "Enter the value of x0: ";
   cin >> x0;
   cout << "Enter the value of y0: ";
   cin >> y0;
   cout << "Which value do you want?: ";
   cin >> xn;
   do
   {
      cout << "Menu" << endl;
      cout << "1.If h is given" << endl;
      cout << "2.If h is not given" << endl;
      cout << "3.Exit" << endl;
      cin >> choice;
      switch (choice)
      {
      case 1:
         cout << "Enter the value of h:";
         cin>>h;
         n = (xn - x0) / h;
         for (int i = 0; i < n; i++)
         {
            k1 = h * f(x0, y0);
            k2 = h * f((x0 + h), (y0 + k1));
            yn = y0 + (k1 + k2) / 2;
            count++;
            cout << "\nk1: " << k1 << "\tk2: " << k2 << "\t"
                 << "y" << count << ":\t" << yn << endl;
            cout << "\n";
            y0 = yn;
            x0 = x0 + h;
         }
         cout << "\n***********************************\n";
         cout << "The Final result is: " << yn << endl;
         cout << "\n";
         break;
      case 2:
         cout << "How many steps do you want?: ";
         cin >> n;
         h = (xn - x0) / n;
         for (int i = 0; i < n; i++)
         {
            k1 = h * f(x0, y0);
            k2 = h * f(x0 + h, y0 + k1);
            yn = y0 + (k1 + k2) / 2;
            count++;
            cout << "\nk1: " << k1 << "\tk2: " << k2 << "\t"
                 << "y" << count << ":\t" << yn << endl;
            cout << "\n";
            y0 = yn;
            x0 = x0 + h;
         }
         cout << "\n***********************************\n";
         cout << "The Final result is: " << yn << endl;
         cout << "\n";
      case 3:
         cout << "Exit" << endl;
         return 0;
      default:
         break;
      }
   } while (choice != 4);
}