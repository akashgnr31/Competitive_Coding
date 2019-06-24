#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int temp,positive=0,negative=0,zero=0;
        cin>>temp;
        for(int i=0;i<temp;i++){
            int temp2;
            cin>>temp2;
            if(temp2<0) negative++;
            else if(temp2>0) positive++;
            else zero++;
        }
        if(zero==0){
            if(negative==0){
                cout<<temp<<" "<<temp<<endl;
            }
            else{
                if(negative>positive) cout<<negative<<" "<<positive<<endl;
                else cout<<positive<<" "<<negative<<endl;
            }
        }
        else{
             if(negative==0){
                cout<<temp<<" 1"<<endl;
            }
            else{
                if(negative>positive) cout<<negative<<" 1"<<endl;
                else cout<<positive<<" 1"<<endl;
            
            }
        }
    }
}