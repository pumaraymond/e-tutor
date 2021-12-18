#include<stdio.h>
int main(){
    int x,y;
    double ans;
    while(scanf("%d %d",&x,&y)!=EOF){
        ans=x*y;
        ans/=2;
        printf("%.1f\n",ans);
    }
}