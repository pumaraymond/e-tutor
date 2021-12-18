#include<stdio.h>
int arr[2000][2000];
int main(){
    int row,column;
    while(scanf("%d%d",&row,&column)!=EOF){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        

        for(int i=0;i<column;i++){
            for(int j=0;j<row;j++){
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
    }
}