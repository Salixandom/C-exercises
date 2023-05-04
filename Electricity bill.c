/*
Write a program in C to calculate and print the Electricity bill of a given customer.
The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer.
The charge are as follow :

Unit	                            Charge/unit
upto 199	                        @1.20
200 and above but less than 400	    @1.50
400 and above but less than 600	    @1.80
600 and above	                    @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int id;
    char name[20];
    float u,x,charge,sur,ntam;
    printf("Input Customer ID: ");
    scanf("%d",&id);
    printf("Input the name of the Customer: ");
    scanf("%s",&name);
    printf("Input the unit consumed by the customer: ");
    scanf("%f",&u);
    if(u<=199)
    {
        charge=u*1.2;
        x=1.2;
    }
    else if(u>=200 && u<400)
    {
        charge=u*1.5;
        x=1.5;
    }
    else if(u>=400 && u<600)
    {
        charge=u*1.8;
        x=1.8;
    }
    else
    {
        charge=u*2;
        x=2;
    }
    if(charge>400)
        sur=charge*.15;
    ntam=sur+charge;
    if(ntam<100)
        ntam=100;
    printf("\n\nElectricity Bill\n");
    printf("----------------------------------------------------------------------\n");
    printf("Customer IDNo.                      : %8d\n",id);
    printf("Customer name                       : %8s\n",name);
    printf("Unit Consumed                       : %8.2lf\n",u);
    printf("Amount Charges @Rs. %.2lf per unit   : %8.2lf\n",x,charge);
    printf("Surcharge Amount                    : %8.2lf\n",sur);
    printf("Net Amount Paid by the Customer     : %8.2lf\n",ntam);
    getch();
}
