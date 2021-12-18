#include<stdio.h>
int main(){
    long long int ans;
    int x;
    while(scanf("%d",&x)!=EOF){
        if(x>31){
            printf("Value of more than 31\n");
            continue;
        }
        ans=1;
        for(int i=0;i<x;i++){
        ans*=2;
        }
        printf("%lld\n",ans);
    }
    return 0; 
}