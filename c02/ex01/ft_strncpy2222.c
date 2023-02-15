#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    char *p = dest;

    while(*src && n-1){
        *dest++ = *src++;
    }
    *dest ='\0';
    return p;
}