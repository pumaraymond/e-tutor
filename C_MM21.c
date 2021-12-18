#include<stdio.h>
int main(){
    long long int x,ans;
    while(scanf("%lld",&x)!=EOF){
       ans=1;
       for(int i=2;i<=x;i++)
       ans*=i;
       printf("%lld\n",ans); 
    }
    return 0; 
}