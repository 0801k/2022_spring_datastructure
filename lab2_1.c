#include <stdio.h>
int main(){
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("[----- [노관범] [2020039102] -----]\n");
    printf("Size of char: %ld byte\n",sizeof(charType));  // charType 변수의 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType 변수의 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType 변수의 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType 변수의 크기를 출력
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); // char 자료형의 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); // int 자료형의 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); // float 자료형의 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); // double 자료형의 크기를 출력
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); // char 를 가르키는 포인터 자료형의 크기를 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int 를 가르키는 포인터 자료형의 크기를 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float 을 가르키는 포인터 자료형의 크기를 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*));  // double 을 가르키는 포인터 자료형의 크기를
    return 0;
}