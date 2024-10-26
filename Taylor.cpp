#include<bits/stdc++.h>
using namespace std;
double y1(double x, double y)
{
    return (x*x - 2*x*y);
}
double y2(double x, double y)
{
    return ( 2*x - 2*x*y1(x,y)-2*y);
}
double y3(double x, double y)
{
    return ( 2-2*x*y2(x,y)-4*y1(x,y));
}
double y4(double x, double y)
{
    return (-2*x*y3(x,y)-6*y2(x,y));
}
int main()
{
    double x0=0,y0=1,h=0.2;
    double y=y0 + h*y1(x0,y0) + h*h*y2(x0,y0)/2 + pow(h,3)*y3(x0,y0)/6 + pow(h,4)*y4(x0,y0)/24;
    cout<<y<<endl;
}