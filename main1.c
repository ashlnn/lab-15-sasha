#include <stdio.h>


int main() {
    int a = 3, b = 1;

    int *a_ptr, *b_ptr; 

    a_ptr = &a;         

    b = *a_ptr;         

    b_ptr = &b;         
    *b_ptr = 2 * *a_ptr; 

    printf("Значення a = %d b = %d\n", a, b);
    printf("Адреса a = %p b = %p\n", &a, &b);
    printf("Значення a_ptr = %p b_ptr = %p\n", a_ptr, b_ptr);
    printf("Значення за адресою a_ptr = %d.\n", *a_ptr);
    printf("Значення за адресою b_ptr = %d.\n", *b_ptr);
    printf("Адреса a_ptr = %p.\n", &a_ptr);
    printf("Адреса b_ptr = %p.\n", &b_ptr);

    getch(); 
}