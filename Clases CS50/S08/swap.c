#include<stdio.h>
int c = 10, f = 20;
const float pi = 3.14;
void swap(int *a, float *b);
int main(void)
{
    int a = 5, b= 10;
    c = 3;
    f = 1;
    printf("El valor de c: %d, el valor de f: %d \n",c,f);
    swap(&a,&pi);
    printf("El valor de a: %d, el valor de b: %d \n",a,b);
    printf("El valor de c: %d, el valor de f: %d \n",c,f);
    return 0;
}

void swap(int *a, float *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    temp = f;
    f = c;
    c = temp;
}
