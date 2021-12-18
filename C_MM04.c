#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        printf("%d+%d=%d\n", x, y, x + y);
        printf("%d*%d=%d\n", x, y, x * y);
        printf("%d-%d=%d\n", x, y, x - y);
        if (x < 0 && y < 0 && x % y != 0)
        {
            printf("%d/%d=%d...%d\n", x, y, (x / y) + 1, abs(y + (-1 * x % y)));
            printf("fuck\n");
        }
        else if (x < 0 && y < 0 && x % y == 0)
        {
            printf("%d/%d=%d...%d\n", x, y, (x / y), x % y);
        }
        else if (x >= 0 && y >= 0)
            printf("%d/%d=%d...%d\n", x, y, x / y, x % y);
        else if (x * y < 0 && x % y != 0)
            printf("%d/%d=%d...%d\n", x, y, (x / y) - 1, abs(y + x % y));

        else if (x * y < 0 && x % y == 0)
        {
            printf("%d/%d=%d...%d\n", x, y, (x / y) ,  x % y);
        }
    }
}