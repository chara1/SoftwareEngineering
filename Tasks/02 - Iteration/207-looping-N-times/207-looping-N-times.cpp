#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)
    for (i = 0; i < 5; i++)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }

    // TASK A - count from 10 down to 0 in steps of -1
    printf("-----------------\n");
    printf("This is task A\n");

    for (i = 10; i >= 0; i --)
    {
        printf("i=%d\n", i);
    }
    printf("-----------------\n");

    // TASK B - count from 10 down to -10 in steps of -2

    printf("This is task B\n");

    for (i = 10; i >= -10; i -= 2)
    {
        printf("i=%d\n", i);
    }

    printf("-----------------\n");

    // TASK C - count from 10 to 200 in steps of 10

    printf("This is task C\n");

    for (i = 10; i <= 200; i += 10)
    {
        printf("i=%d\n", i);
    }

    printf("-----------------\n");

    // TASK D - count from -10 down to 20 in steps of 5

    printf("This is task D\n");

    for (i = -10; i <= 20; i += 5)
    {
        printf("i=%d\n", i);
    }

    printf("-----------------\n");

    // TASK E - can you predict the largest value of i that is displayed?

    printf("This is task D\n");

    for (i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}