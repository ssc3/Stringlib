#include "string.h"
#include "headers.h"

int is_pallindrome(char* src)
{
    if(src == NULL)
        return 0;

    int len = strlen(src);

    for(int i = 0; i < len/2; i++)
    {
        if(src[i] != src[len-i-1])
            return 0;
    }
    return 1;
}
