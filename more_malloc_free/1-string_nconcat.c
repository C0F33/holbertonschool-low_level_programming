#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
size_t len2 = (s2 != NULL) ? strlen(s2) : 0;
size_t actual_n = (n >= len2) ? len2 : n;
char *s3 = malloc(len1 + actual_n + 1);
if (!s3)
return NULL;
if (s1 != NULL)
strncpy(s3, s1, len1);
strncat(s3 + len1, s2, actual_n);
s3[len1 + actual_n] = '\0';
return s3;
}
