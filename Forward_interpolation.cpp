#include <bits/stdc++.h>
using namespace std;
double p_cal(double p, int n)
{
	double temp = p;
	for (int i = 1; i < n; i++)
		temp = temp * (p - i);
	return temp;
}
int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main()
{
	int n = 5;
	float x[] = {2, 4, 6, 8, 10};
	float y[n][n];
	y[0][0] = 9.68;
	y[1][0] = 10.96;
	y[2][0] = 12.32;
	y[3][0] = 13.76;
	y[4][0] = 15.28;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << x[i]
			  << "\t";
		for (int j = 0; j < n - i; j++)
			cout << setw(4) << y[i][j] << "\t";
		cout << endl;
	}
	double value = 2.4;

	double sum = y[0][0];
	double p = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++)
		sum += (p_cal(p, i) * y[0][i]) / fact(i);

	cout << "\nValue at " << value << " is " << sum << endl;
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
double cal_p(double p,int n)
{
   double temp=p;
   for(int i=1;i<n;i++)
   {
      temp=temp*(p+i);
   }
}
int fact(int n)
{
   if(n==1)
   return 1;
   return n*fact(n-1);
}
int main()
{
   int n=6;
   double x[]={};
   double y[n][n];
    y[1][0]=95;
 for(int i=1;i<n;i++)
 {
   for(int j=n-1;j>=i;j--)
   {
      y[j][i]=y[j][i-1]-y[j-1][i-1];
   }
 }
 for(int i=0;i<n;i++)
 {
   cout<<x[i];
   for(int j=0;j<=i;j++){
   cout<<y[i][j];
   }

 }
 double value=90;
 double sum=y[n-1][0];
 double p=(value-x[n-1])/x[1]-x[0];
 for(int i=1;i<n;i++)
 {
   sum+=(cal_p(p,i)*y[n-1][i])/fact(i);
 }

}*/
