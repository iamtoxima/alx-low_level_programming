char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    /* Find the length of dest */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append src to dest, up to n bytes or until null terminator is encountered in src */
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    /* Add null terminator */
    dest[dest_len + i] = '\0';

    return dest;
}
