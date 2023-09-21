char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;

    /* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

    /* Append src to dest */
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}

    /* Add null terminator */
dest[dest_len + i] = '\0';

return dest;
}
