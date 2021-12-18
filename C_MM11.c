#include<stdio.h>
int main(){
    int x;
    int one,five,ten;
    while(scanf("%d",&x)!=EOF){
        ten=x/10;
        x%=10;
        five=x/5;
        x%=5;
        one=x/1;
        printf("NT10=%d\n",ten);
        printf("NT5=%d\n",five);
        printf("NT1=%d\n",one);
    }
    return 0; 
}