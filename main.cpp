#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n, ind;
    cin>>n;
    int flag=1;
    string str;
    cin>>str;
    int arr[26]={0};

    for(i=0; i<str.size(); i++)
    {
      if('A'<=str[i] && str[i]<='Z')
      ind = str[i]-'A';
      else if('a' <= str[i] && str[i] <= 'z')
      ind = str[i]-'a';
      arr[ind] = 1;

    }
      for (int i=0; i<=25; i++)
      {
        if (arr[i] == 0)
        {
        flag = 0;
        break;
        }
      }
    if(flag)
    cout<<"YES";
    else cout<<"NO";   // cout << "Hello world!" << endl;
    return 0;
}
