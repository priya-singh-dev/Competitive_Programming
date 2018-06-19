
#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,i;
	int j;
    vector<int> st;
	cin>>n;
	int a[n][n], max[n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
	int freq[n]={};

  for(i=0;i<n;i++)

  {

     max[i]=a[i][j];

      for(int j=0;j<n;j++)
      {

        if(a[i][j]>max[i])

          max[i]=a[i][j];
       }
       st.push_back(max[i]);
       freq[max[i]-1]++;

   }

   int t ;
	for(int i=0;i<n;++i){
	    if(freq[i]>=1){
	      t = i+1;
	    }
	}
	for(int i=0;i<st.size();++i){
		if(st[i]==t){
		st[i] = n;
		break;
	    }
	}
	for(int i=0;i<st.size();++i){
           cout<<st[i]<<" ";
	}

	return 0;
}

