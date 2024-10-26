#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 7;
  float x[] = {1.0, 1.2, 1.4, 1.6, 1.8, 2.0, 2.2};

  // y[][] is used for difference
  // table and y[][0] used for input
  float y[n][n];
  y[0][0] = 2.7183;
  y[1][0] = 3.3201;
  y[2][0] = 4.0552;
  y[3][0] = 4.9530;
  y[4][0] = 6.0496;
  y[5][0] = 7.3891;
  y[6][0] = 9.0250;

  // Calculating the backward difference table
  for (int i = 1; i < n; i++)
  {
    for (int j = n - 1; j >= i; j--)
      y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
  }

  // Displaying the backward difference table
  for (int i = 0; i < n; i++)
  {
    cout << setw(6) << x[i] << "\t";
    for (int j = 0; j <= i; j++)
      cout << setw(8) << y[i][j] << "\t";
    cout << endl;
  }

  float value = 2.2; // differentiate at this point

  double h = x[1] - x[0], y1 = 0, y2;
  for (int i = 1; i < n; i++)
    y1 += y[n - 1][i] / (i * h);
  cout << "\nfirst derivative is: " << y1 << endl;
  y2 = y[n - 1][2] + y[n - 1][3] + y[n - 1][4] * 11 / 12 + y[n - 1][5] * 5 / 6;
  cout << "second derivative is: " << y2 / (h * h) << endl;

  return 0;
}