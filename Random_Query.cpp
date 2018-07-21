
#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll a[1000006]={0};
ll lstocc[1000006]={0};
ll ans[1000006]={0};

int main()
{
    int n;
    cin>>n;

    for(ll i=0;i<=n;i++)
    {
      cin>>a[i];
    }
   memset(lstocc,0,sizeof(lstocc));
   memset(ans,0,sizeof(ans));

   ans[0]=0;
   double sum=0.0;


    for(ll i=0;i<=n;i++)
    {
      ans[i]=ans[i-1]+( i-lstocc[a[i]] );
      lstocc[a[i]]=i;
      sum = sum+ans[i];
    }

    double final_ans=0.0;
    final_ans = (2*(sum-n)+n)/(n*n*1.0);

    cout<<fixed<<setprecision(6)<<final_ans<<endl;

    return 0;

}

