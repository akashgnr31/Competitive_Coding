#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include <algorithm>

using namespace std;
int main(){
    long long int N,M;
    cin>>N>>M;
     pair<int, int> frst[N],secnd[M];
    for(long long int i=0;i<N;i++){
        int k;
        cin>>k;
        frst[i]=make_pair(k,i);
    }
    for(long long int i=0;i<M;i++){
        int k;
        cin>>k;
        secnd[i]=make_pair(k,i);
        }
        


        sort(frst,frst+N);
        sort(secnd,secnd+M);

     if(frst[0].first+secnd[M-1].first>=frst[N-1].first+secnd[0].first){
        for(long long int i=0;i<M;i++){
            cout<<frst[0].second<<" "<<secnd[i].second<<endl;

        }
        for(long long int i=1;i<N;i++){
            cout<<frst[i].second<<" "<<secnd[M-1].second<<endl;
        }
     }
     else{
        for(long long int i=0;i<N;i++){
            cout<<frst[i].second<<" "<<secnd[0].second<<endl;

        }
        for(long long int i=1;i<M;i++){
            cout<<frst[N-1].second<<" "<<secnd[i].second<<endl;
        }
     }

    

}