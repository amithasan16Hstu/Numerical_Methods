#include<iostream>
using namespace std;

void CurveFitting(double n, double x[], double y[])
{
    double x_sum=0, y_sum=0, x_sq_sum=0, xy_sum=0;
    for (int i=0; i<n; i++)
    {
        x_sum+=x[i];
        y_sum+=y[i];
        x_sq_sum+=(x[i]*x[i]);
        xy_sum+=(x[i]*y[i]);
    }
    double b=(n*xy_sum - x_sum * y_sum)/(n*x_sq_sum-x_sum*x_sum);
    double a=(y_sum - b * x_sum)/n;

    printf("y=%lfx %lf",a,b);
}

int main()
{
    double n=6;
    double x[]={1,2,3,4,5,6};
    double y[]={1200,900,600,200,110,50};
    CurveFitting(n,x,y);
}
