#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

using namespace std;

int main(){
    int testcases;
    cin>>testcases;
     int n,t,x,y,z;
        
    for(int i=0;i<testcases;i++){
       cin>>n>>t>>x>>y>>z;

        if(t==1){
            if(x<y&&y<z){
                int common=gcd(2*n-y,2*n+1);

            cout<<(2*n-y)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x<y && y>z){
                int common=gcd(y-1,2*n+1);

            cout<<(y-1)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x>y && y<z){
                int common=gcd(y+1,2*n+1);

            cout<<(y+1)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x>y&&y>z){
                    int common=gcd(2*n+2-y,2*n+1);

            cout<<(2*n+2-y)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
        }
        else if(t==3){

            if(x>y&&y>z){
                int common=gcd(2*n-y,2*n+1);

            cout<<(2*n-y)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x<y && y>z){
                int common=gcd(y-1,2*n+1);

            cout<<(y-1)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x>y && y<z){
                int common=gcd(y+1,2*n+1);

            cout<<(y+1)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }
            else if(x<y&&y<z){
                    int common=gcd(2*n+2-y,2*n+1);

            cout<<(2*n+2-y)/(common)<<" "<<(2*n+1)/(common)<<endl;
        
            }

        }
        else{
            int common=gcd(2*n+1-2*y,2*n+1);

            cout<<(2*n+1-2*y)/(common)<<" "<<(2*n+1)/(common)<<endl;
        }
    }
}