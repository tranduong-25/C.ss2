#include <stdio.h>

int main() {
    int num1 = 15; 
    int num2 = 25;
    int sum = num1 + num2;      
    int difference = num1 - num2; 
    int product = num1 * num2;   
    float quotient = (float)num1 / num2; 
    printf("Tổng của %d và %d là: %d\n", num1, num2, sum);
    printf("Hiệu của %d và %d là: %d\n", num1, num2, difference);
    printf("Tích của %d và %d là: %d\n", num1, num2, product);
    printf("Thương của %d và %d là: %.2f\n", num1, num2, quotient);

    return 0;
}
