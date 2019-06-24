#include<iostream>
#include<bits/stdc++.h>
#include<stdio>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int n;
        cin>>n;
        int A[n][2],B[n];
        A[0]=2;
        A[1]=3;
        for(int i=2;i<n;i++){
            A[i][0]+=2;
            A[i][1]=1;
            A[i][2]=1
        }
        bool increasing=true;
        for(int i=0;i<n;i++){
            if(increasing){
            if(i+A[i][1]>=n) increasing=false;
            else{
            B[i]=A[i]*A[i+A[i][1]];
            if(A[i][1]==A[i+A[i][1]][2]){
                A[i][1]++;
                A[i+A[i][1]][2]++;
            }
            else{
                A[i][1]++;
            }
            }
            }
            else{
                if(i-A[i][2]<0) increasing=true;
                else{
                    B[i]=A[i]*A[i-A[i][2]];
                    if(A[i][2]==A[i-A[i][2]][1]){
                         A[i][2]++;
                        A[i-A[i][2]][1]++;
                    }
                }
            
            }
        }
        for(int i=0;i<n;i++){
            if(i!=0) cout<<" ";
            cout<<B[i];
        }

    }
}