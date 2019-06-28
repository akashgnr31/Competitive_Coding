#include<iostream>
#include<bits/stdc++.h>
int answer=0;
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int r,c,k;
        cin>>r>>c>>k;
        int rmax=r+k;
        int cmax=r+k;
        int rmin=r-k;
        int cmin=c-k;
        if(rmax>8) rmax=8;
        if(cmax>8) cmax=8;
        if(cmin<0) cmin=0;
        if(rmin<0) rmin=0;
        cout<<(rmax-rmin+1)*(cmax-cmin+1); 

    }
}