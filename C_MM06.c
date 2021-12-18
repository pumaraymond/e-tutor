#include<stdio.h>
int main(){
    int x;
    double y;
    while(scanf("%d",&x)!=EOF){
    y=x*1.6;
    printf("%.1f\n",y);
    }
    return 0; 
}