#include "main.h"

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0') {
char *a = accept;
while (*a != '\0') {
