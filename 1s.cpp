#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,j;
  cin>>n>>x;
  int a[n][n];
        // int a1[i][j];
    int count=0;

    for(j=0;j<n;++j)
    {
    if(x%(j+1)==0 && (x/(j+1))<=n)
      count++;
    }

  cout<<count;
  return 0;
}

