#include <stdio.h>

int main() {
    // Kiểu dữ liệu cơ bản trong C

    // 1. Kiểu int: Lưu trữ số nguyên 
    int a = 10; // Số nguyên dương
    int b = -20; // Số nguyên âm

    // 2. Kiểu float: Lưu trữ số thực với độ chính xác đơn 
    float c = 3.14; // Số thực dương
    float d = -2.71; // Số thực âm

    // 3. Kiểu double: Lưu trữ số thực với độ chính xác kép 
    double e = 3.141592653589; // Số thực với độ chính xác cao

    // 4. Kiểu char: Lưu trữ một ký tự đơn (1 byte)
    char f = 'A'; // Ký tự chữ cái
    char g = '1'; // Ký tự số

    // 5. Kiểu _Bool: Lưu trữ giá trị logic 
    _Bool h = 1; // Đại diện cho true
    _Bool i = 0; // Đại diện cho false

    // 6. Kiểu unsigned int: Lưu trữ số nguyên không âm 
    unsigned int j = 123; // Số nguyên không âm

    // 7. Kiểu short: Lưu trữ số nguyên nhỏ hơn 
    short k = 32767; // Giá trị tối đa của kiểu short

    // 8. Kiểu long: Lưu trữ số nguyên lớn hơn 
    long l = 1234567890; // Số nguyên lớn

    // 9. Kiểu long long: Lưu trữ số nguyên rất lớn 
    long long m = 9223372036854775807; // Số nguyên lớn nhất của kiểu long long

    // 10. Kiểu unsigned long long: Lưu trữ số nguyên rất lớn không âm
    unsigned long long n = 123456789; // Giá trị lớn nhất của kiểu unsigned long long

    // In các biến ra màn hình
    printf("int a = %d, b = %d\n", a, b);
    printf("float c = %.2f, d = %.2f\n", c, d);
    printf("double e = %.12f\n", e);
    printf("char f = %c, g = %c\n", f, g);
    printf("_Bool h = %d, i = %d\n", h, i);
    printf("j = %u\n", j);
    printf("k = %d\n", k);
    printf("l = %ld\n", l);
    printf("m = %lld\n", m);
    printf("unsigned long long n = %llu\n", n);

    return 0;
}
