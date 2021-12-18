#include <stdio.h>

int main(){
    int m;
    while(scanf("%d",&m)!=EOF){
        if(m >= 3 && m <= 5) printf("Spring\n");
        if(m >= 6 && m <= 8) printf("Summer\n");
        if(m >= 9 && m <= 11) printf ("Autumn\n");
        if(m <= 2 || m == 12) printf ("Winter\n");
    }
    return 0;
}