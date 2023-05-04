#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    int g_day, g_month, g_year, h_day, h_month, h_year;
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    // Set the time zone to Bangladesh Standard Time
    setenv("TZ", "Asia/Dhaka", 1);
    tzset();

    g_day = tm->tm_mday;
    g_month = tm->tm_mon + 1;
    g_year = tm->tm_year + 1900;

    int jd = (1461 * (g_year + 4800 + (g_month - 14) / 12)) / 4 + (367 * (g_month - 2 - 12 * ((g_month - 14) / 12))) / 12 - (3 * ((g_year + 4900 + (g_month - 14) / 12) / 100)) / 4 + g_day - 32075;
    int l = jd - 1948440 + 10632;
    int n = (l - 1) / 10631;
    l = l - 10631 * n + 354;
    int j = (10985 - l) / 5316 * (50 * l / 17719 + 1) / (50 * l / 17719 + 5316);
    l = l - (17719 * j + 5357) / 50;
    int i = l / 10631;
    h_year = 30 * n + j - 30 * i;
    h_month = (l - 10631 * i) / 304;
    h_day = (l - 10631 * i - 304 * h_month + 4) / 121 + 1;

    printf("Today's date in Hijri (Bangladesh time zone): %d/%d/%d\n", h_day, h_month, h_year);

    return 0;
}
