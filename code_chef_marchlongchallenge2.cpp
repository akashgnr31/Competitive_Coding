#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    long int testcases;
    cin>>testcases;
    scanf("\n");
    for(long long  int j=0;j<testcases;j++){
        char A[20];
        char d;
        scanf("%s ",A);
        scanf("%c\n",&d);
    	char temp=A[0];
    	int flag=0;
    	for(int i=0;i<strlen(A);i++){
    	char temp=d;
    	for(int j=i;j<strlen(A);j++){
    			if(temp>A[j]) {
    				temp=A[j];
    				i=j;
    			}
    		}
    		printf("%c",temp);
    		flag++;
    	}
		for(int i=flag;i<strlen(A);i++){
			printf("%c",d);
		}
        printf("\n");
       
    }
}