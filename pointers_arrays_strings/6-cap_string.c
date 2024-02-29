 #include "main.h"
 /**
  *cap_string - foobar.
  * Retun: strn back to user.
 */
char *cap_string(char *str)
{
int i;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
i++;
}
return (str);
}
