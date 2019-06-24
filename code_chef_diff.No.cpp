
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int N,M;
        cin>>N>>M;
        int D=N*M;
        if(N==1||M==1){
            if(M==N||D==2){cout<<1<<endl;
               
            }
        
            else cout<<2<<endl;
             if(N!=1){
                 cout<<1<<endl;
                 int one=0,print=1;
                for(int i=2;i<=N;i++){
                    
                    if(one%2==1){
                        if(print==1) print=2;
                        else print=1;
                        one++;
                        cout<<print<<endl;
                    }
                    else{
                        one++;
                        cout<<print<<endl;
                    }

            }
             }
            else{
                 cout<<"1";
                 int one=0,print=1;
                for(int i=2;i<=M;i++){
                   if(one%2==1){
                        if(print==1) print=2;
                        else print=1;
                        one++;
                        
                        cout<<" "<<print;
                    }
                    else{
                        
                        one++;
                        cout<<" "<<print;
                    }
                }
                cout<<endl;
                
            }
            }
    else if(N==2||M==2){
                
        if(N==M){

            cout<<2<<endl;
            cout<<"1 1"<<endl;
            cout<<"2 2"<<endl;
        }
        else if(N==2){
            
            cout<<3<<endl;
            cout<<"2";
            for(int i=2;i<=M;i++){
                cout<<" "<<i%3+1;
            }
            cout<<endl;
            cout<<"2";
            for(int i=2;i<=M;i++){
                cout<<" "<<i%3+1;
            }
            cout<<endl;
        }
            
        else if(M==2){
             
            cout<<3<<endl;
            for(int i=1;i<=N;i++){
                cout<<i%3+1<<" "<<i%3+1<<endl;
            }
            }
            
            }
        
      else {
            cout<<4<<endl;
           
            for(int i=1;i<=N;i++){
                if(i%4==1){
                    for(int j=1;j<=M;j++){
                    if(j%4==1&&j!=1) cout<<" ";
                    if(j%4==1) cout<<"1";
                    else if(j%4==2) cout<<" 1";
                    else if(j%4==3) cout<<" 2";
                    else if(j%4==0) cout<<" 4";
                    }            
                    cout<<endl;
                }
                else if(i%4==2){
                for(int j=1;j<=M;j++){
                    if(j%4==1&&j!=1) cout<<" ";
                    if(j%4==1) cout<<"2";
                    else if(j%4==2) cout<<" 3";
                    else if(j%4==3) cout<<" 3";
                    else if(j%4==0) cout<<" 4";
                    }            
                    cout<<endl;
                
                }
                else if(i%4==3){
                   for(int j=1;j<=M;j++){
                    if(j%4==1&&j!=1) cout<<" ";
                    if(j%4==1) cout<<"2";
                    else if(j%4==2) cout<<" 4";
                    else if(j%4==3) cout<<" 1";
                    else if(j%4==0) cout<<" 1";
                    }            
                    cout<<endl;
                

                }
                else if(i%4==0){
                   for(int j=1;j<=M;j++){
                    if(j%4==1&&j!=1) cout<<" ";
                    if(j%4==1) cout<<"3";
                    else if(j%4==2) cout<<" 4";
                    else if(j%4==3) cout<<" 2";
                    else if(j%4==0) cout<<" 3";
                    }            
                    cout<<endl;
                

                }
            }

            }
        
      }

}