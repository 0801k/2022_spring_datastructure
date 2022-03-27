#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];
int *plist[5] = {NULL,};
plist[0] = (int *)malloc(sizeof(int));
list[0] = 1;
list[1] = 100;
*plist[0] = 200;
printf("[----- [노관범] [2020039102] -----]\n");
printf("value of list[0] = %d\n", list[0]); // lsit 0번의 값을 출력한다.
printf("address of list[0] = %p\n", &list[0]); // list 0번의 주소를 출력한다.
printf("value of list = %p\n", list); // list의 값을 출력하는데, 형태는 주소.
printf("address of list (&list) = %p\n", &list); // list의 주소를 출력한다.
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); // list 1번의 값을 출력한다.
printf("address of list[1] = %p\n", &list[1]); // list 1번의 주소를 출력한다.
printf("value of *(list+1) = %d\n", *(list + 1)); // list+1의 값을 출력하는데, 형태는 주소.
printf("address of list+1 = %p\n", list+1); // list+1의 주소를 출력한다.
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]); // plist 0번에 값을 출력한다.
printf("&plist[0] = %p\n", &plist[0]); // plist 0번의 주소를 출력한다.
printf("&plist = %p\n", &plist); // plist의 주소를 출력한다.
printf("plist = %p\n", plist); //plis의 값을 출력한다. 
printf("plist[0] = %p\n", plist[0]); // plist 0번에 저장 되어 있는 값을 출력한다.
printf("plist[1] = %p\n", plist[1]); // plist 1번에 저장 되어 있는 값을 출력한다.
printf("plist[2] = %p\n", plist[2]); // plist 2번에 저장 되어 있는 값을 출력한다.
printf("plist[3] = %p\n", plist[3]); // plist 3번에 저장 되어 있는 값을 출력한다.
printf("plist[4] = %p\n", plist[4]); // plist 4번에 저장 되어 있는 값을 출력한다.
free(plist[0]);
}