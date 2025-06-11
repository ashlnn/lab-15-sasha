#include <stdio.h>

int main() {
    int arr[10];            
    int *p, *pmax;          
    int i, n;

    printf("n = ");
    scanf("%d", &n);       

    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]); 

    pmax = arr;             

    for (p = arr + 1; p < arr + n; p++) 
        if (*p > *pmax)
            pmax = p;       
    printf("Максимальний елемент = %d\n", *pmax);       
    printf("Його номер = %d\n", pmax - arr + 1);        
}