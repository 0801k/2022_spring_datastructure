#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [노관범] [2020039102] -----]\n");
for(i=0; i < MAX_SIZE; i++) // i=0부터 i<100까지 i가 1씩 증가하는 반복문.
input[i] = i; // input i번째에 값 i를 저장한다.
/* for checking call by reference */
printf("address of input = %p\n", input); // input의 주소를 출력한다.
answer = sum(input, MAX_SIZE); // sum 함수를 answer 값에 저장한다.
printf("The sum is: %f\n", answer); // answer 값을 출력한다.
}
float sum(float list[], int n)
{
printf("value of list = %p\n", list); // list의 값을 출력한다.
printf("address of list = %p\n\n", &list); // list의 주소를 출력한다.
int i; // int 형 변수 i를 선언한다.
float tempsum = 0; // float 형 변수 tempsum를 선언한다.
for(i = 0; i < n; i++) // i는 0부터 i<n 까지 i가 1씩 증가하는 반복문.
tempsum += list[i]; // tempsum 의 값과 list i번째 값을 더한다.
return tempsum; // tempsum 의 값을 리턴.
}