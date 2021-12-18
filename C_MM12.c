#include<stdio.h>
int main(){
    int x;
    int ans;
    while(scanf("%d",&x)!=EOF){
        ans=x/0.238;
        printf("%d\n",ans+1);
    }
    return 0; 
}