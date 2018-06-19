#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int n;
    ll sum=0;

    cin>>n;
    ll num, a[n];
    for(int i=0;i<n;++i)
    {
      cin>>num;
      a[i]= num;
    }
   //sort(a, a+10);
    for (int i=0 ; i<n ; i++)
    {

        if (a[i] > 0)
            sum = sum + a[i];
    }

        if (sum%2 != 0)
        {
            for(int i=0;i<n;++i)
            {
              if((sum - a[i])%2==0)
              sum = sum-a[i];
              break;
            }
        }

  cout<<sum;
    return 0;
}
