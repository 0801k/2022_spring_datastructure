#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};
typedef struct {
char lastName;
int studentId;
char grade;
} student2;
int main() {
struct student1 st1 = {'A', 100, 'A'};
printf("[----- [노관범] [2020039102] -----]\n");
printf("st1.lastName = %c\n", st1.lastName); // st.1lastName의 값을 출력한다.
printf("st1.studentId = %d\n", st1.studentId); // st1.studentId의 값을 출력한다.
printf("st1.grade = %c\n", st1.grade); // st1.grade의 값을 출력한다.
student2 st2 = {'B', 200, 'B'}; // st2 선언 후 각각의 변수에 값을 저장한다.
printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName의 값을 출력한다.
printf("st2.studentId = %d\n", st2.studentId); // st2.studentId의 값을 출력한다.
printf("st2.grade = %c\n", st2.grade); // st2.grade의 값을 출력한다.
student2 st3; // student2의 변수 st3 선언
st3 = st2; // st2를 st3에 대입한다.
printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName의 값을 출력한다.
printf("st3.studentId = %d\n", st3.studentId); // st3.studentId의 값을 출력한다.
printf("st3.grade = %c\n", st3.grade); // st3.grade의 값을 출력한다.
/* equality test */
//if(st3 == st2) /* not working */
//printf("equal\n"); 
//else
//printf("not equal\n"); 
return 0;
}