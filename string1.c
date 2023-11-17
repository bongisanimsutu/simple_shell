#include "shell.h"

/**
 * Copies the contents of the source string to the destination string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
    int index = 0;

    if (dest == src || src == 0)
        return dest;

    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }

    dest[index] = 0;
    return dest;
}

/**
 * Duplicates a given string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
    int length = 0;
    char *result;

    if (str == NULL)
        return NULL;

    while (*str++)
        length++;

    result = malloc(sizeof(char) * (length + 1));

    if (!result)
        return NULL;

    for (length++; length--;)
        result[length] = *--str;

    return result;
}

/**
 * Prints the input string to the standard output.
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
    int index = 0;

    if (!str)
        return;

    while (str[index] != '\0')
    {
        _putchar(str[index]);
        index++;
    }
}

/**
 * Writes the character 'c' to the standard output.
 * @c: The character to print.
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    static int index;
    static char buffer[WRITE_BUF_SIZE];

    if (c == BUF_FLUSH || index >= WRITE_BUF_SIZE)
    {
        write(1, buffer, index);
        index = 0;
    }

    if (c != BUF_FLUSH)
        buffer[index++] = c;

    return 1;
}
