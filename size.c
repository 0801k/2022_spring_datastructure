#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;
printf("[----- [노관범] [2020039102] -----]\n");
printf("sizeof(x) = %lu\n", sizeof(x)); // x의 값을 출력한다.
printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x의 값을 출력한다.
printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x의 값을 출력한다.
}