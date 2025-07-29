#include <stdio.h>
int main() {
    int a, b, product;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);  
 
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %d", product);
    
    return 0;
}
