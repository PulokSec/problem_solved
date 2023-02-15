#include <string.h>
#include <stdio.h>

struct Student
{
  char name[50];
  int roll;
  int marks;
};
int main()
{
  struct Student student;

  printf("Enter information: \n");

  printf("Enter Name: ");
  scanf("%s", &student.name);

  printf("Enter Roll number: ");
  scanf("%d", &student.roll);

  printf("Enter marks: ");
  scanf("%d", &student.marks);

  printf("\nDisplaying Information:\n");
  printf("Name: %s\nRoll number: %d\nMarks: %d\n", student.name, student.roll, student.marks);

  return 0;
}
