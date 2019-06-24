#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int* decToBinary(int n) 
{ 
    // array to store binary number 
    int *binaryNum;
    binaryNum=(int*)calloc(5,sizeof(int));
    // counter for binary array 
    int i = 0; 
    for(int i=0;i<5;i++) binaryNum[i]=0;
    while (n > 0) { 
       // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    return binaryNum
    } 
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int N;
        cin>>N;
        scanf("\n");
        int ans=0;
        int A[32];
        for(int i=0;i<32;i++){
            A[i]=0;
        }
        int C[5];
        for(int i=0;i<N;i++){
            for(int i=0;i<5;i++)   C[i]=0;
            char d;
            d=getchar();
            while(d!='\n'){
            	if((int)d==-1) break;
            	if(d=='a') C[0]=1;
                else if(d=='e') C[1]=1;
                else if(d=='i') C[2]=1;
                else if(d=='o') C[3]=1;
                else if(d=='u') C[4]=1;
                d=getchar();	
            }
        A[C[0]*(int)pow(2,0)+C[1]*(int)pow(2,1)+C[2]*(int)pow(2,2)+C[3]*(int)pow(2,3)+C[4]*(int)pow(2,4)]++;
        
            }
        int ans=0;
        int i=0,j=30;
        while(i<j){
            int *I,*J;
            I=binaryNum(i);
            J=binaryNum(j);
            int flag=0;
            for(int i=0;i<5;i++)
            {
                if(I[i]!=0||J[i]!=0) flag++;
            }
            if(flag==5){
                if(A[i]>A[j]) ans+=A[j];
                else ans+=A[i];
            }

        }
        ans+=A[31];
        cout<<ans<<endl;
    }
    
}