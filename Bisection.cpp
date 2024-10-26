#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
   return x * x * x - 2 * x - 5;
}
double c;
double bisection(double a, double b)
{
   if (f(a) * f(b) >= 0)
   {
      cout << " Incorrect a and b " << endl;
      return 0;
   }
   int count = 0;
   while ((b - a) >= 0.00001)
   {
      c = (a + b) / 2;
      count++;
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
      cout << "iteration: " << count << "\t" << a << " " << b << endl;
   }
}
int main()
{
   double a, b;
   int choice;
   do
   {
      cout << "Menu" << endl;
      cout << "1.If we choose 2 and 3 then root will be 2.0945" << endl;
      cout << "2.If we choose 0 and 1 then root will be -1.0472" << endl;
      cout << "3.If we choose 0 and 1 then root will be -1.0472" << endl;
      cout << "4.Exit" << endl;
      // int choice;
      cin >> choice;
      switch (choice)
      {
      case 1:
         cin >> a >> b;
         bisection(a, b);
         cout << "\n**************************************\n"
              << endl;
         cout << "\nThe Final root is: " << c << endl;
         break;
      case 2:
         cin >> a >> b;
         bisection(a, b);
         cout << "\n**************************************\n"
              << endl;
         cout << "\nThe Final root is: " << c << endl;
         break;
      case 3:
         cin >> a >> b;
         bisection(a, b);
         cout << "\n**************************************\n"
              << endl;
         cout << "\nThe Final root is: " << c << endl;
         break;
      case 4:
         cout << "Exit" << endl;
         return 0;

      default:
         break;
      }
   } while (choice != 5);
}