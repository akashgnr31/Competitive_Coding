#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int N;
        cin>>N;
        int A[N][N],B[N][N],flag=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>A[i][j];
            }
        }
        
      
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>B[i][j];
                if((A[j][i]!=B[i][j]&&A[i][j]!=B[i][j])){ 
                    flag=1;
                    }

            }
        }
        if(flag==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}