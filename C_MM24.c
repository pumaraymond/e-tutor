#include<stdio.h>
int main(){
    int x,y;
    double salary;
    while(scanf("%d %d",&x,&y)!=EOF){
        if(x<=60){
            salary=x*y;
        }
        if(x>60&&x<=120){
            salary=60*y+(x-60)*y*1.33;
        }
        else salary=60*y+60*y*1.33+(x-120)*y*1.66;
        printf("%.1f\n",salary);
    }
    return 0;
}