#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int real_a, real_b, unreal_a, unreal_b;
    char operator;
    while (n--)
    {
        scanf(" %c", &operator);
        scanf("%d %d %d %d", &real_a, &unreal_a, &real_b, &unreal_b);
        if (operator== '+')
        {
            printf("%d %d\n", real_a + real_b, unreal_a + unreal_b);
        }
        if (operator== '-')
        {
            printf("%d %d\n", real_a - real_b, unreal_a - unreal_b);
        }
        if(operator=='*'){
            printf("%d %d\n",real_a*real_b+(-1)*unreal_a*unreal_b,real_a*unreal_b+real_b*unreal_a);
        }
    }
}