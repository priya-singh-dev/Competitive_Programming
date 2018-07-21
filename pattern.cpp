/*Printing Pattern like this->
5 (Number of rows)
1	
2	9	
3	8	10	
4	7	11	14	
5	6	12	13	15	
*/




#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int matrix[n][n]={};

    int counter=1;
    int j;
    for(int i=0;i<n;++i){
        if(i%2!=0){

            for(j=n-1;j>=i;--j){
                matrix[j][i]=counter;
                counter++;

            }

        }
        else{
            for(j=i;j<n;++j){
                matrix[j][i]=counter;
                counter++;
            }
        }

    }

    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){

            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }


    return 0;
}

