#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
int one[] = {0, 1, 2, 3, 4};
printf("[----- [노관범] [2020039102] -----]\n");
printf("one = %p\n", one); // one의 값을 출력한다.
printf("&one = %p\n", &one); // one의 주소를 출력한다.
printf("&one[0] = %p\n", &one[0]); // one 0번의 주소를 출력한다.
printf("\n"); // 줄바꿈
print1(&one[0], 5); // print1의 함수를 호출한다.
return 0;
}
void print1 (int *ptr, int rows) // print1 함수 정의.
{/* print out a one-dimensional array using a pointer */
int i; // int형 변수 i를 선언한다.
printf ("Address \t Contents\n"); // address Contents 를 화면 출력.
for (i = 0; i < rows; i++) // i=o 부터 i<rows 까지 i는 1씩 증가.
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i 의 주소 및 ptr+i의 주소의 값을 출력.
printf("\n"); // 줄바꿈
}