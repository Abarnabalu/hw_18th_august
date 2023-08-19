#include <stdio.h>

int main() {
    int a = 123;
    float b = 3.14159;
    char c[] = "Hello";

    // Using fields of width and precision
    printf("Integer: %10d\n", a);  // Width of 10
    printf("Float:   %10.2f\n", b);  // Width of 10, precision of 2
    printf("String:  %-10s\n", c);  // Left-justified in a width of 10

    return 0;
}
