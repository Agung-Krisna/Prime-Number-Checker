/* 
This program was created to make others can read and understand what the program is actually doing
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration (I made it with a new line every single time because I don't want to confuse anyone)
    int multiplier;
    int low;
    int high;
    int count = 0;
    int sum = 0;
    int prime = 0;

    //This is the low index, which means the lowest number in our range.
    
    printf ("Enter low index:");
    scanf ("%d", &low);
    
    //This is the exception that occurs when the user tries to enter an out of range value
    
    if (low <= 1){
        printf ("Please check your input and try again");
    }
    if (low > 1){

    printf ("Enter high index:");
    scanf ("%d", &high);
    
    //the equal signs here doesn't really do anything, it's added for aesthetics
    printf ("\t================================\n");
    printf ("\tPrime number in range %d to %d:\n", low, high);
    printf ("\t================================\n\n");

    for (low = low; low <= high; low ++){//adding the low index until it matches the high index iteratively.
    
            prime = 0; //resetting the condition (we want to use boolean type, but C doesn't support that) 
            
        for (multiplier = 2; multiplier < low; multiplier++){ //adding the number that we want to be divided to the low index
        
            if (low % multiplier == 0){//if low index can be devided by the multiplier then it would add the "prime" variable
            
                prime ++;//
            }
        }
        if (prime == 0 && low > 1){ //Checking whether prime is 0 (low index can't be divided by any other number, except itself)  
            count ++;//adding the count
            printf ("\t%d\n", low);//printing the low index
            sum += low;//adding the sum
        }
   }
       if (sum == 0){//added exception if the user enter an index that doesn't return any value.
            printf ("Your index doesn't return any value, please try again\n");
       }
       else {
       printf ("\tSum is equal to = %d\n", sum);//printing the sum only once
       printf ("\tCount is = %d\n", count);//printing the count only once
       }
    }
    return 0;//return if the program ran successfully
}
