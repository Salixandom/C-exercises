/*
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    printf("Current Time : %s\n", time_str);

    return 0;
}

#include<stdio.h>
#include<time.h>

void main()
{
    time_t t;
    time(&t);
    printf("\n current time is : %s",ctime(&t));
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i=0;
    while(i!=50000)
    {
        time_t rawtime;
        struct tm * timeinfo;
        time( &rawtime );
        timeinfo = localtime( &rawtime );
        printf("\n%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min,timeinfo->tm_sec);
        i++;
    } 
}