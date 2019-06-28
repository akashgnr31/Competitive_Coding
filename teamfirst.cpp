#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int row,column;
        cin>> row>>column;
        if(row%2==1&&column%2==1){
            count<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}