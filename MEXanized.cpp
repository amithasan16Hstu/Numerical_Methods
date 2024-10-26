#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t, n, k, x, i;
   cin >> t;
  for(int j=0;j<t;j++)
   {
      cin >> n >> k >> x;
      if (x + 1 < k || k > n)
         cout << "-1"<<endl;
      else if (x == k)
      {
         long long int sum = 0;
         for (i = 0; i < k; i++)
         {
            sum = sum + i;
         }
         for (i = k + 1; i <= n; i++)
         {
            sum = sum + (x - 1);
         }
         cout << sum << endl;
      }
      else
      {
         long long int sum = 0;
         for (i = 0; i < k; i++)
         {
            sum = sum + i;
         }
         for (i = k + 1; i <= n; i++)
         {
            sum = sum + x;
         }
         cout << sum << endl;
      }
   }
}