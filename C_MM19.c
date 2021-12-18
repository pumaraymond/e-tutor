#include<stdio.h>
int main(){
    int x;
    double fee;
    while(scanf("%d",&x)!=EOF){
        fee=x*0.9;
        if(x>800&&x<1500)
        fee*=0.9;
        if(x>=1500)
        fee=x*0.9*0.79;
        printf("%.1f\n",fee);
    }
    return 0; 
}