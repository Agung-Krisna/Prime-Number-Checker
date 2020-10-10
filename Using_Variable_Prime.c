/* 
THIS FILE IS BASICALLY SAME AS THE PRIME_CHECKER_TRUE WITH LESS AESTHETHICS
please take this file with a grain of salt.
*/

#include <stdio.h>
#include <stdlib.h>

void prime(int low, int high)
{
int multiplier = 2;
int factor = 0;
int count = 0;
int sum = 0;

    for (low = low; low <= high; low ++){
        factor = 0;
            for (multiplier = 2; multiplier < low; multiplier ++){
                if (low % multiplier == 0){
                    factor ++;
                }
            }
                if (factor == 0){
                    count ++;
                    printf ("%d\n", low);
                    sum += low;
            }
    }
    if (sum == 0){
        printf ("Your input doesn't return any value, please try again");
    }
    else {
    printf ("Count is: %d\n", count);
    printf ("Sum is: %d\n", sum);
    }
}



int main()
{
    int low;
    int high;

    printf ("Enter the low index:\n");
    scanf ("%d", &low);

    if (low <= 1){
        printf ("Check your value again");
    }
    if (low > 1){

    printf ("Enter the high index:\n");
    scanf ("%d", &high);

    if (high <= low){
        printf ("Check your value again");
    }
    if (high > low){
    printf ("\t================================\n");
    printf ("\tPrime number in range %d to %d:\n", low, high);
    printf ("\t================================\n\n");
    prime (low, high);
    }
}
}
