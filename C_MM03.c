#include <stdio.h>
int main()
{
    int x, y;
    int ans ;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        ans=x+y;
        printf("%d\n", ans);
    }
}