#include<stdio.h>
void swap(int a,int b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int GCD(int a,int b){
    if(b==0)
    return a;
    else
    return(GCD(b,a%b));
}
int main(){
    int ans;
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<b)
        swap(a,b);
        ans=GCD(a,b);
        printf("%d\n",ans);
    }
}