#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n = 5, choice;
   float x[] = {2, 4, 6, 8, 10};
   float xn, h, yn;

   // y[][] is used for difference table
   // with y[][0] used for input
   float y[n][n];
   y[0][0] = 9.68;
   y[1][0] = 10.96;
   y[2][0] = 12.32;
   y[3][0] = 13.76;
   y[4][0] = 15.28;

   // Calculating the forward difference table
   for (int i = 1; i < n; i++)
   {
      for (int j = 0; j < n - i; j++)
         y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
   }

   // Displaying the forward difference table
   for (int i = 0; i < n; i++)
   {
      cout << setw(4) << x[i]
           << "\t";
      for (int j = 0; j < n - i; j++)
         cout << setw(4) << y[i][j] << "\t";
      cout << endl;
   }
   do
   {
      cout << "Menu" << endl;
      cout << "1.1st Derivative" << endl;
      cout << "2.2nd Derivative" << endl;
      cout << "3. Exit" << endl;
      cin >> choice;
      switch (choice)
      {
      case 1:
         cout << "which value do you want?";
         cin >> xn;
         h = xn - x[0];
         yn = (y[0][3] + y[0][4] + y[0][5]+ y[0][6]) / h;
         cout << "The final result is: " << yn << endl;
         break;
      case 2:
         cout << "which value do you want?";
         cin >> xn;
         h = xn - x[0];
         yn = (y[0][3] + y[0][4] + y[0][5]+y[0][6]) / (h * h);
         cout << "The final result is: " << yn << endl;
         break;
      case 3:
         cout << "Exit" << endl;
         return 0;

      default:
         break;
      }
   } while (choice != 4);
}