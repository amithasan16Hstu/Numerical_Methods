#include<bits/stdc++.h>
using namespace std;
double func(float x)
{
    return x*x*x-2*x-5;
}
double derive(float x)
{
    return cbrt(2*x+5);
}
void iteration(double x)
{
    while(1)
    {
        x=derive(x);
        cout<<setprecision(5)<<"x: "<<x<<endl;
        if(func(x)<=0.0001)
        {
            break;
        }
    }
    cout<<setprecision(5)<<"The root is: "<<x<<endl;
}
int main()
{
    double a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    while((func(a)*func(b))>0)
    {
        cout<<"Enter the value of a and b again: ";
        cin>>a>>b;
    }
    if((func(a)*func(b))<0)
    {
        cout<<"Here a: "<<a<<" and b: "<<b<<endl;
        iteration((a+b)/2);
    }
}