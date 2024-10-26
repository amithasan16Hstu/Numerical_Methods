#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the matrix : \n";
    double A[3][4];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> A[i][j];

    for (int j = 1; j < 3; j++)
    {
        double temp = A[j][0];
        for (int k = 0; k < 4; k++)
            A[j][k] = A[j][k] * A[0][0] - temp * A[0][k];
    }
    double tem = A[2][1];
    for (int k = 0; k < 4; k++)
        A[2][k] = A[2][k] * A[1][1] - tem * A[1][k];

    cout << "The upper triangle Matrix is : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << setw(12) << A[i][j] << " ";
        cout << endl;
    }

    double z = A[2][3] / A[2][2];
    double y = (A[1][3] - z * A[1][2]) / A[1][1];
    double x = (A[0][3] - y * A[0][1] - z * A[0][2]) / A[0][0];

    cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;
}
