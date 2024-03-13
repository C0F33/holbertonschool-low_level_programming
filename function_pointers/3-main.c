#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
int result;
int a;
int b;
char *c;
a = atoi(argv[1]);
b = atoi(argv[3]);
c = argv[2];
if (argc != 4)
{
printf("Error\n");
return (98);
}
result = f(a,b);  
return (result);  
}
