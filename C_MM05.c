#include<stdio.h>
int main(){
    double x;
    while(scanf("%lf",&x)!=EOF){
        x=x*x;
        //printf("%.2f ",x);
        printf("%.1f\n",x);
        
    }
}