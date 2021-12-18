#include<stdio.h>
int main(){
    double x;
    while(scanf("%lf",&x)!=EOF){
        printf("%.1f\n",1.8*x+32);
    }
    return 0; 
}