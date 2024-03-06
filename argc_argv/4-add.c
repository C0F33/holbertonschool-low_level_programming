#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 1) {
for(i = 1; i < argc; i++) {
printf("argv[%d] = %s\n", i, argv[i]);
if (atoi(argv[i]) == 0 && *argv[i] != '0') {
printf("Error: Non-integer argument detected\n");
return 1;
}
sum += atoi(argv[i]);
}
}
else
{
printf("0\n");
return 1;
}
printf("Sum: %d\n", sum);
return 0;
}
