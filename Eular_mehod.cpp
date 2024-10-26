#include<bits/stdc++.h>
using namespace std;
#define f(x,y) -x*y*y
int main()
{
   double x0,y0,xn,h,n,yn,count=0;
   cout<<"Enter the value of x0: ";
   cin>>x0;
   cout<<"Enter the value of y0: ";
   cin>>y0;
   cout<<"Which value do you want?: ";
   cin>>xn;
   cout<<"How many steps do you want?: ";
   cin>>n;
   h=(xn-x0)/n;
   cout<<"y0"<<":\t"<<y0<<endl;
   for(int i=0;i<n;i++)
   {
    yn=y0+h*f(x0,y0);
    count++;
    cout<<"y"<<count<<":\t"<<yn<<endl;
    y0=yn;
    x0=x0+h;
   }
   cout<<"\n****************************\n";
   cout<<"The Final result is: "<<yn<<endl;
   cout<<"\n";
}