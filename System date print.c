#include <time.h>
#include <stdio.h>
#include <string.h>

int main() {
  time_t rawtime;
  struct tm * timeinfo;
  char *buffer;

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  buffer = malloc(11);
  strftime(buffer, 11, "%d-%m-%Y", timeinfo);
  printf("System date: %s\n", buffer);

  free(buffer);
  return 0;
}

