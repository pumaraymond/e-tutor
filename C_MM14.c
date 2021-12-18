#include<stdio.h>
int main(){
    long long int time,day,hour,minute,second;
    while(scanf("%lld",&time)!=EOF){
        day=time/(24*60*60);
        time%=(24*60*60);
        hour=time/(60*60);
        time%=(60*60);
        minute=time/60;
        time%=60;
        second=time;
        printf("%d days\n",day);
        printf("%d hours\n",hour);
        printf("%d minutes\n",minute);
        printf("%d seconds\n",second);
    }
}