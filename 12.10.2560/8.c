#include <stdio.h>
#include <string.h>
void tower(int, char, char, char);
void main()
{
    int n;
    scanf("%d",&n);
    tower(n, 'A', 'C', 'B');
    return 0;
}

void tower(int n, char fr, char tr, char ar)
{
    if (n == 1)
    {
        printf("Move 25S from %c to %c\n", fr, tr);
        return;
    }
    tower(n - 1, fr, ar, tr);
    if (n == 2)
    {
        printf("Move 50S from %c to %c\n", fr, tr);
    }
    else if (n == 3)
    {
        printf("Move 1B from %c to %c\n", fr, tr);
    }
    else if (n == 4)
    {
        printf("Move 2B from %c to %c\n", fr, tr);
    }
    else if (n == 5)
    {
        printf("Move 5B from %c to %c\n", fr, tr);
    }
    else if (n == 6)
    {
        printf("Move 10B from %c to %c\n", fr, tr);
    }
    tower(n - 1, ar, tr, fr);
}
