#include <stdio.h>

typedef struct
{
  char *name;
  int id;
}student;

int main()
{
    student *cse101;
    cse101->id=2105121;
    cse101->name="Sadman Sakib";
    printf("%s",cse101->name);
}
