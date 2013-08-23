#include "string.h"
#include "headers.h"

// removing characters t and of
char* remove_chars(char* src)
{
    int j =0;

    for (int i = 0; i < strlen(src); i++)
    {
        if ((src[i] != 't') && (src[i] != 'o'))
        {
            src[j] = src[i];
            j++;
        }

        if ((src[i] == 'o') && (src[i+1] == 'f'))
        {
            j++;
            i++;
        }

        if (src[i] == 't')
        {
            j++;
        }
    }
    return src;
}
