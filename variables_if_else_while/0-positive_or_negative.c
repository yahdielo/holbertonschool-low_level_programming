#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* main - print if n is positive or negative */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n<0){
        printf("n is negative\n");
        }

        else if(n>0){
        printf("n is positive\n");
        }

        else {
        printf("n is 0");
        }

        return (0);

}
