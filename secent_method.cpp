#include <iostream>
/* 'cmath' header file is included for pow and fabs functions */
#include <cmath>
using namespace std;

double secant_method(double, double, double, int *);
double f(double);

int main()
{
   double x1, x2, e;
   int iteration_no = 0;

   cout << "\nEnter the first initial approximation: ";
   cin >> x1;

   cout << "\nEnter the second initial approximation: ";
   cin >> x2;

   /* it should as low as possible, like 0.001 or 0.0001 */
   cout << "\nEnter the degree of accuracy: ";
   cin >> e;

   double res = secant_method(x1, x2, e, &iteration_no);
   cout << "\nRoot of the given equation is " << res;
   cout << "\nNo. of iterations are " << iteration_no;

   return 0;
}

double secant_method(double x1, double x2, double e, int *iteration_no)
{
   double xm1, xm2, k, f1, f2;

   do
   {
      /* calulating and storing values of f(x1) and f(x2) into f1 and f2 resp */
      f1 = f(x1);
      f2 = f(x2);

      /* updating iteration number */
      *iteration_no += 1;

      /* calculating the intermediate value */
      xm1 = (x1 * f2 - x2 * f1) / (f2 - f1);

      /* checking wheather xm1 is root of the equation or not */
      k = f(x1) * f(xm1);

      /* updating the value of intervals */
      x1 = x2;
      x2 = xm1;

      /* if xm1 is the root of equation then break the loop */
      if (k == 0)
         break;

      xm2 = (x1 * f2 - x2 * f1) / (f2 - f1);

   } while (fabs(xm2 - xm1) >= e); /* check if the error is greater than the desired accuracy. fabs function is used to return non-negative float value of its argument */

   return xm1;
}

double f(double no)
{
   /* write the equation whose roots are to be determined. Here we are using equation as x^3 + x - 1 */
   double res = pow(no, 3) + no - 1;
   return res;
}