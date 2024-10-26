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
    while (x<=up)
    {
        if (x == 0 || x == up)
        {
            sum += f(x);
        }
        else
        {
            sum += (2 * f(x));
        }
        x += h;
    
    }
    double y = (h / 2) * sum;
    cout << y << endl;
}