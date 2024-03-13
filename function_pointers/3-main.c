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

    if (argc < 4)
    {
       a = atoi(argv[1]);
       b = atoi(argv[3]);
       c = argv[2];
    }
    int (*f)(int,int) = get_op_func(c);
    result = f(a,b);
return (result);  
}
