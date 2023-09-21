#include "main.h"
/**
* _strcat - Concatenate two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: Pointer to the resulting string `dest`.
*/
char *_strcat(char *dest, char *src)
{
int len = 0, lenSrc = 0;

while (dest[len] != '\0')
len++;

while (src[lenSrc] != '\0')
{
dest[len] = src[lenSrc];
len++;
lenSrc++;
}
dest[len] = '\0';
return (dest);
}
