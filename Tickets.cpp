#include<iostrem>
#include<bits/stc++.h>

using namespace std;

int main(){
    int c,d;
    cin>>c>>d;
    int **cost;
    cost=(int**)calloc(c,sizeof(int*));
    for(int i=0;i<c;i++){
        cost[i]=(int*)calloc(c,sizeof(int));
        for(int j=0;j<c;j++)
            cost[i][j]=-1;
    }
    for(int i=0;i<d;i++){
        int or,cur,price;
        cin>>or>>cur>>price;
        cost[or-1][cur-1]=price;
        cost[cur-1][or-1]=price;
    }
    for(int i=0;i<c;i++){
        cost[i][i]=0;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                if(cost[i][j]==-1){
                    if(cost[i][k]!=-1&&cost[k][j]!=-1) cost[i][j]=cost[i][k]+cost[k][j];
                }
                else{
                    if(cost[i][j]>cost[i][j]=cost[i][k]+cost[k][j]) cost[i][j]=cost[i][j]=cost[i][k]+cost[k][j];
                }
            }
        }
    }
    big=-1;
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(big<cost[i][j]) big=cost[i][j];
        }
    }
    cout<<big;

}