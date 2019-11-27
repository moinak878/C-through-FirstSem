#include<iostream>
using namespace std;
/**
 *   1
 *  1 1
 * 1 2 1
 *1 3 3 1 
 */

int main(){
   // cout<<"Hello Moinak !";
    int n;
    cin>>n;
    int matrix[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
        matrix[i][j]=0;
    }
    
    for(int i=0;i<n;i++){
            for(int k=n-1-i;k<=n-1+i;k+=2){
                if(k==n-1-i || k==n-1+i)
                matrix[i][k]=1;
                else
                matrix[i][k]=matrix[i-1][k-1]+matrix[i-1][k+1];
            }
        }
        
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++)
        {
            if(matrix[i][j]!=0)
            cout<<matrix[i][j];
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
