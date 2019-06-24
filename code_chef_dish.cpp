#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   if (a == b) 
        return a; 
   if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main(){
    long long int testcases;
    cin>>testcases;
    for(long long int i=0;i<testcases;i++){
        long long int n,a,b,k;
        cin>>n>>a>>b>>k;
        long long int temp1,temp2,temp3;
        temp1=n/a;
        temp2=n/b;
        temp3=(a*b)/gcd(a,b);
        temp3=n/temp3;
        
        
        long long int ans=temp1+temp2-2*temp3;
       // cout<<temp3<<"  "<<k<<"  "<<ans<<endl;
        if(k>ans) cout<<"Lose"<<endl;
        else cout<<"Win"<<endl;
    }
}