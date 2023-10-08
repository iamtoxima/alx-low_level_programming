char *_strpbrk(char *s, char *accept)
{
char *a = accept;

while (*a != '\0') {
while (*s != '\0') {
if (*s == *a) {
return s;
}
s++;
}
a++;
}

return NULL;
}
