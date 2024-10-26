#include <iostream>
using namespace std;

// function used is x^3-2x^2+3
double func(double x)
{
   return x * x * x - 2 * x - 5;
}

double c;

void bisection(double a, double b)
{
   if (func(a) * func(b) >= 0)
   {
      cout << "Incorrect a and b";
      return;
   }

   c = a;

   while ((b - a) >= 0.00001) // tell about interval is sufficently small
   {
      c = (a + b) / 2;
      if (func(c) == 0.0)
      {

         break;
      }
      else if (func(c) * func(a) < 0)
      {

         b = c;
      }
      else
      {

         a = c;
      }
      cout << "a= " << a << " "
           << "b= " << b << endl;
   }
}

int main()
{
   double a, b;
   a = 2;
   b = 3;
   bisection(a, b);
   cout << "\n";
   cout << "The value of root is = " << c << endl;

   return 0;
}