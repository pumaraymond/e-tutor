#include<stdio.h>
int main(){
    double max=-0x3f3f3f3f,min=0x3f3f3f3f,input;
    for(int i=0;i<10;i++){
        scanf("%lf",&input);
        if(input>max)
        max=input;
        if(input<min)
        min=input;
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}