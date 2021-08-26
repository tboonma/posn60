#include <stdio.h>
void tower(int, char, char, char);
void main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    tower(n, 'A', 'C', 'B');
    return 0;
}

void tower(int n, char fr, char tr, char ar)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from %c to %c", fr, tr);
        return;
    }
    tower(n - 1, fr, ar, tr);
    printf("\n Move disk %d from %c to %c", n, fr, tr);
    tower(n - 1, ar, tr, fr);
}
