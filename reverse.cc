#include "string.h"
#include "headers.h"

char* reverse(char* source)
{
    if(source == NULL)
        return NULL;

    int len = strlen(source);

    char temp;

    for (int i = 0; i < len/2; i++)
    {
        temp = source[i];
        source[i] = source[len-i - 1];
        source[len-i-1] = temp;
    }
    return source;
}
