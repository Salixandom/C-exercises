#include <stdio.h>
#include <string.h>
//a
typedef struct
{
    char ID[100];
    char name[100];
    int age;
    char designation[100];
    float salary;
}Employee;

//b
void store_txt(Employee *emp)
{
    FILE *fp;
    fp=fopen("employees_record.txt","a");
    if(fp==NULL)
    {
        printf("Error opening file\n");
        fclose(fp);
        return;
    }
    fprintf(fp,"%s,%s,%d,%s,%f\n",emp->ID,emp->name,emp->age,emp->designation,emp->salary);
    fclose(fp);
    return;
}

//c
void display_info()
{
    FILE *fp;
    char line[100];
    fp=fopen("employees_record.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file.");
        fclose(fp);
        return;
    }
    while(fgets(line,100,fp))
    {
        char* token;
        token=strtok(line,",");
        printf("%s\t",token);

        token=strtok(NULL,",");
        printf("%s\t",token);

        token=strtok(NULL,",");
        printf("%d\t",atoi(token));

        token=strtok(NULL,",");
        printf("%s\t",token);

        token=strtok(NULL,",");
        printf("%f\n",atof(token));
    }
    fclose(fp);
}

//d
Employee* search_employee(char* id)
{
    FILE* fp;
    Employee* emp=(Employee*)malloc(sizeof(Employee));
    char line[200];
    fp=fopen("employees_record.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file.");
        fclose(fp);
        return NULL;
    }
    while(fgets(line,200,fp))
    {
        char* token=strtok(line,",");
        if(strcmp(token,id)==0)
        {
            strcpy(emp->ID,id);
            token=strtok(NULL,",");
            strcpy(emp->name,token);
            token=strtok(NULL,",");
            emp->age=atoi(token);
            token=strtok(NULL,",");
            strcpy(emp->designation,token);
            token=strtok(NULL,",");
            emp->salary=atof(token);

            fclose(fp);
            return emp;
        }
    }
    return NULL;
}

//e
void update_emp(char *id)
{
    FILE* fp=fopen("employees_record.txt","r+");
    char line[100];
    while(fgets(line,100,fp))
    {
        char* token=strtok(line,",");
        if(strcmp(token,id)==0)
        {
            char name[100],designation[100];
            int age;
            float salary;
            fgets(name,100,stdin);
            scanf("%d",&age);
            getchar();
            fgets(designation,100,stdin);
            getchar();
            scanf("%f",&salary);
            getchar();
            fprintf(fp,"%s,%s,%d,%s,%f",token,name,age,designation,salary);
        }
    }
    fclose(fp);
}
