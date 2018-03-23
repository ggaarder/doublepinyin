#include <stdio.h>
#include <string.h>

char *dbname = "upy.dat";


int main(void) {
  FILE *db = fopen(dbname, "r");
  char code[20], py[200];
  int count = 0;
  while (fscanf(db, "%s %s", code, py) == 2 && 4 == strlen(code)) {
    printf("%s %s\n", code, py);
    ++count;
  }
}
