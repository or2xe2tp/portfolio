#include <stdio.h>
//auth: or2xe2tp


int num1, num2, i, lcm, gcd;
//function to get LCM
// LCM*GCD=num1*num2
int calLCM(int num1, int num2) {
    lcm = num1*num2/calGCD(num1,num2) ; 
    return lcm; 
}
//function to get GCD
int calGCD(int num1, int num2) {
    for(int i=1; i<=num1 && i<=num2; i++) {
        if(num1%i==0 && num2%i==0)
        gcd=i;
    }
    return gcd;
}

int main() {

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int gcd = calGCD(num1, num2);//calls function 
    int lcm = calLCM(num1, num2);//calls function
    
    printf("GCD of %d and %d is : %d\n",num1,num2, gcd);
    printf("LCM of %d and %d is : %d\n",num1,num2, lcm);
    
    return 0;
}


