#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "headers.h"

int main()
{
    char source[] = "Lots of chars...lots and lots of chars muaaah";
    char* dst;
    int rv;
    char* source2;
    source2 = (char*) malloc(sizeof(source));

    strcpy(source2, source);
    printf("Source = %s\n", source);

    dst = (char*) malloc(strlen(source2));

    dst = reverse(source2);
    printf("Reversed string = %s\n", dst);

    rv = is_pallindrome(source);
    if(rv == 0)
        printf("Not a pallindrome\n");
    else
        printf("Pallindrome\n");

    dst = remove_chars(source);
    printf("Removed chars string = %s\n", dst);

    return 0;
}

