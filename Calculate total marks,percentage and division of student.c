#include <stdio.h>
int main()
{
    float bng,eng,sc,ict,math,is,social,ag,total,percentage;
    printf("Enter your following subject numbers : ");

    printf("\n\n\tBangla          : ");
    scanf("%f",&bng);

    printf("\tEnglish         : ");
    scanf("%f",&eng);

    printf("\tScience         : ");
    scanf("%f",&sc);

    printf("\tICT             : ");
    scanf("%f",&ict);

    printf("\tMath            : ");
    scanf("%f",&math);

    printf("\tIslamic Studies : ");
    scanf("%f",&is);

    printf("\tSocial Studies  : ");
    scanf("%f",&social);

    printf("\tAgriculture     : ");
    scanf("%f",&ag);

    total = bng+eng+sc+ict+math+is+social+ag;
    percentage = total/10;

    printf("\n\n\nYour total marks are %.2f\n",total);
    printf("Your percentage is %.2f\n",percentage);

    if (percentage>=80)
        printf("\nYou are eligible to study in Science division.\n");
    else if (percentage>=65 && percentage <80)
        printf("\nYou are eligible to study in Commerce division.\n");
    else
        printf("\nYou are eligible to study in Arts division.\n");

    getch();

}
