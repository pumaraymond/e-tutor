#include<stdio.h>
int main(){
    int sum;
    int N;
    while(scanf("%d",&N)!=EOF){
        sum=0;
        for(int i=1;i<=N;i++){
            if(i%3==0)
            sum+=i;
        }
        printf("%d\n",sum);
    }
}