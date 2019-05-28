#include <stdio.h>
#include <string.h>
#include "student.h"

struct Student 
{
  char firstName;
  char lastName;
  int age;
  int studentID;
} Student;
char printStudent (struct Student* student)
{
  printf("Name: %c %c\n", student->firstName, student->lastName);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentID);
  return 0;
}
int main()
{
  struct Student JeremyJoe;
  struct Student JadenYork;
  char input, name;

  strcpy(&JeremyJoe.firstName, "Jeremy");
  strcpy(&JeremyJoe.lastName, "Joe");
  JeremyJoe.age = 17;
  JeremyJoe.studentID = 302485;

  strcpy(&JadenYork.firstName, "Jaden");
  strcpy(&JadenYork.lastName, "York");
  JadenYork.age = 16;
  JadenYork.studentID = 592826;
  
  printf("Which student(s)?\n");
  fgets(&input, 256, stdin);
  sscanf(&input, "%c", &name);
  printStudent(struct Student* name);
}
