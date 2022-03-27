#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
struct student pst;
printf("[----- [노관범] [2020039102] -----]\n");
printf("size of student = %ld\n", sizeof(struct student)); // sizeof 함수를 이용한 구조체의 크기를 출력한다.
printf("size of int = %ld\n", sizeof(int)); // int 의 크기를 출력한다.
printf("size of short = %ld\n", sizeof(short)); // short의 크기를 출력한다.
return 0; 
}