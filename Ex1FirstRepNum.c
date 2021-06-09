#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // num n starts with 10
    int n = 10;
    int a[n];
    time_t t;

    srand(time(&t));

    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n + 1;
        printf("%d ", a[i]);
    }
    printf("]\n");

    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]) - 1;
        if (a[index] < 0)
        {
            printf("First repeated number : %d\n", abs(a[i]));
            return 0;
        }
        else
        {
            a[index] = -a[index];
        }
    }

    printf("No repeated numbers\n");

    return 0;
}
