#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    float sub[5];
}Student;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar();
    Student* st=(Student*)malloc(n*sizeof(Student));
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter name: ");
        fgets(st[i].name,100,stdin);
        for(int j=0 ; j<5 ; j++)
        {
            printf("Sub %d: ",j+1);
            scanf("%f",&st[i].sub[j]);
        }
        getchar();
    }
    
    for(int i=0 ; i<n ; i++)
    {
        printf("Average mark of %s is: ",st[i].name);
        float sum=0.0;
        for(int j=0 ; j<5 ; j++)
            sum+=st[i].sub[j];
        printf("%f\n",sum/5);
    }
}
