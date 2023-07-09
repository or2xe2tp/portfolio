#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i = 2;
    printf("Input Your Number: ");
    scanf("%d", &n);

    while(1){
        // checks if the number is 0,1 or can be devided by 2 
        if(n == 0 || n == 1 || n % 2 == 0){  
            printf("This number is not a prime");
            break;
        }
        else{
            //checks if the number is less than the sq of i, if yes, then it's a prime.
            if(n < pow(i, 2)){
                printf("This is a prime number");
                break;
            }
            // if it's more than 3 then 
            if(n % i == 0){
                printf("This number is not a prime");
                break;
            }
            else{
                if(i % 2 == 0){
                    i += 1;
                }
                else{
                    i += 2;
                }
            }
        }
    }
    return 0;
}