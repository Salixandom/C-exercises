#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your numbers according to subject (per subject out of 200): \n");

    printf("\n\tPhysics     : ");
    scanf("%d",&a);

    printf("\tChemistry   : ");
    scanf("%d",&b);

    printf("\tHigher math : ");
    scanf("%d",&c);

    if (a/2>=84 && b/2>=84 && c/2>=93)
        printf("\n\nCongratulation! You are eligible to take BUET Admission Exam.\n");
    else
        printf("\n\nSorry, you are not eligible for the exam.\n");

    getch();


}
