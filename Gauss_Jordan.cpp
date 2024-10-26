#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the matrix : \n";
    double A[3][4];
    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            cin>>A[i][j];

    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    {
        if(i==j) continue;
        double temp=A[j][i];
        for(int k=0; k<4; k++)
            A[j][k]=A[j][k]*A[i][i]-temp*A[i][k];
    }
    cout<<"The diagonal Matrix is : \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++) cout<<setw(12)<<A[i][j]/A[i][i]<<" ";
        cout<<endl;
    }

    cout<<"x = "<<A[0][3]/A[0][0]<<endl;
    cout<<"y = "<<A[1][3]/A[1][1]<<endl;
    cout<<"z = "<<A[2][3]/A[2][2]<<endl;
}

/**
2 1 2 10
3 2 3 18
1 4 9 16
**/
