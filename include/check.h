#include <ctype.h>
#include <string.h>

int check(char *str)
{
    for (int i = 0; i< strlen(str); i++)

         if (!isdigit(str[i]))

         return 0;

    return 1;
}
