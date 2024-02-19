#include <stdio.h>
int main(void) 
{
    int intType;
    float floatType;
    long longType;
    longlong int longlongType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte\n", sizeof(charType));
    printf("Size of a int: %zu bytes\n", sizeof(intType));
    printf("Size of a long long int\n)", sizeof(longlongType));
    printf("Size of a long: %zu bytes\n", sizeof(longType));
    printf("Size of a float: %zu bytes\n", sizeof(floatType));
    
    return 0;
}
