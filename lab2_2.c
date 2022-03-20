#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [노관범] [2020039102] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i의 값을 출력한다.
printf("address of i == %p\n", &i); // i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // ptr의 값을 출력하는데, 형태는 주소.
printf("address of ptr == %p\n", &ptr); // ptr의 주소를 출력한다.
ptr = &i; /* ptr is now holding the address of i */ //ptr의 값은 i의 주소.
printf("\n[checking values after ptr = &i] \n"); 
printf("value of i == %d\n", i); // i출력, i주소.
printf("address of i == %p\n", &i); // i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // ptr의 값을 출력하는데, 형태는 주소
printf("address of ptr == %p\n", &ptr); // ptr의 주소를 출력한다.
printf("value of *ptr == %d\n", *ptr); // ptr의 값은 i의 주소, i의 값은 1234.
dptr = &ptr; /* dptr is now holding the address of ptr */ // dptr의 값은 ptr의 주소.
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i의 값을 출력한다.
printf("address of i == %p\n", &i); // i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // ptr의 값을 출력하는데, 형태는 주소.
printf("address of ptr == %p\n", &ptr); // ptr의 주소를 출력한다.
printf("value of *ptr == %d\n", *ptr); // ptr의 값을 출력한다.
printf("value of dptr == %p\n", dptr); // dptr의 값을 출력한다.
printf("address of ptr == %p\n", &ptr); //ptr의 주소를 출력한다.
printf("value of *dptr == %p\n", *dptr); // dptr의 값을 출력하는데, ptr의 값.
printf("value of **dptr == %d\n", **dptr); // dptr의 값을 출력하는데, i의 값.
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); // i의 값을 출력한다.
printf("value of *ptr == %d\n", *ptr); // ptr의 값을 출력한다.
printf("value of **dptr == %d\n", **dptr); // dptr의 값을 출력한다.
**dptr = 8888; /* changing the value of **dptr */ //dptr의 값.
printf("\n[after **dptr = 8888] \n");  
printf("value of i == %d\n", i); // i의 값을 출력한다.
printf("value of *ptr == %d\n", *ptr); //ptr의 값을 출력한다.
printf("value of **dptr == %d\n", **dptr); // dptr의 값을 출력한다.
return 0;
}