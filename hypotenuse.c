#include<stdio.h>
#include<math.h>

int main(void){
double a = scanf("Enter length of side a: ");
double b = scanf("Enter length of side b: ");

double c = sqrt(a^2 + b^2);

printf("The hypotenuse is length %0.2funits", c);

return 0;
}
