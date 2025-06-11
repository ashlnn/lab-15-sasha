#include <stdio.h>

int main() {
    float x, y;
    float *x_ptr, *y_ptr; 

    x_ptr = &x;           

    *x_ptr = 5;           

    x = 5.5 + *x_ptr;     

    y_ptr = x_ptr;        

    y = *y_ptr / 2 + *x_ptr; 

    y_ptr = &y;           

    printf("Значення x = %f y = %f\n", x, y);
    printf("Адреса x = %p y = %p\n", &x, &y);
    printf("Значення x_ptr = %p y_ptr = %p\n", x_ptr, y_ptr);
    printf("Значення, на яке вказує x_ptr = %f.\n", *x_ptr);
    printf("Значення, на яке вказує y_ptr = %f.\n", *y_ptr);
    printf("Адреса x_ptr = %p.\n", &x_ptr);
    printf("Адреса y_ptr = %p.\n", &y_ptr);

    puts("====================================================");
    getch(); 
}