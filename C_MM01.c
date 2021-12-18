#include<stdio.h>
int main(){
    int up,down,high;
    double ans;
    while(scanf("%d %d %d",&up,&down,&high)!=EOF){
        ans=((up+down)*high);
        ans/=2;
        printf("Trapezoid area:%.1f\n",ans);
    }
}