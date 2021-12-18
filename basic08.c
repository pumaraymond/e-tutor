#include<stdio.h>
#include<stdbool.h>
int isprime[10000];
int main(){
    for(int i=2;i<10000;i++){
        for(int j=i+1;j<10000;j++){
            if(j%i==0){
                isprime[j]=1;
            }
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF){
        if(isprime[n]==0)
        printf("YES\n");
        else printf("NO\n");
    }
}