
#include<bits/stdc++.h>
 using namespace std;

void printMax(int arr[], int n, int k)
{
    int j, max;

    for (int i = 0; i <= n-k; i++)
    {
        max = arr[i];

        for (j = 1; j < k; j++)
        {
            if (arr[i+j] > max)
               max = arr[i+j];
        }
        cout<<max;
    }
}


int main()
{
	    int n , k;
	    int arr[n];

     cin>>n;
     cin>>k;
     for(int i=0 ; i<n ; i++)
     {
       cin>>arr[i];
     }
    printMax(arr, n, k);
    return 0;
}
