#include <bits/stdc++.h>
using namespace std;
#define f(x, y) ((x-y)/2)

double Eular(double x, double y, double h)
{
	double y1p = y + h * f(x, y);
	return y1p;
}

double Eular_Modified(double x, double y,
					double x1, double y1,
					double h)
{
	double y1c = y1;

	do
	{
		y1 = y1c;
		y1c = y + 0.5 * h * (f(x, y) + f(x1, y1));
	} while (fabs(y1c - y1) > 0.00001);

	return y1c;
}

void printFinalValues(double x, double xn, double y, double h)
{
	while (x < xn)
	{
		double x1 = x + h;
		double y1p = Eular(x, y, h);
		double y1c = Eular_Modified(x, y, x1, y1p, h);
		x = x1;
		y = y1c;
	}

	cout << "The final value of y at x = "
		  << x << " is : " << y << endl;
}

int main()
{
	double x0, y0, xn, h;
	cout << "Enter the value of x0: ";
	cin >> x0;
	cout << "Enter the value of y0: ";
	cin >> y0;
	cout << "Which value do you want?: ";
	cin >> xn;
	cout << "Enter the value of h: ";
	cin >> h;
	printFinalValues(x0, xn, y0, h);

	return 0;
}
