#include<stdio.h>
int main(){
    int input;
    double weight;
    int gender;
    while(scanf("%d %d",&input,&gender)!=EOF){
        if(gender==1)
        printf("%.1f\n",(input-80)*0.7);
        if(gender==2)
        printf("%.1f\n",(input-70)*0.6);
    }
}