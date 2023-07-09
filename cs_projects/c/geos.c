#include <stdio.h>
#include <math.h>

int main() {  


  float a, a2, r, Sn, sum; 
  int n;
  printf("Enter the first term: ");
  scanf("%f", &a);
  printf("Enter the 2nd term: ");
  scanf("%f", &a2);
  //common ratio
  r = (a2/a);
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Calculate the sum of the geometric series.
  Sn = a * (1 - pow(r, n)) / (1 - r);

  // Print the result.
  printf("The sum of the geometric series is: %f\n", Sn);

  return 0;
}