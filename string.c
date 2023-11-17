#include "shell.h"

/**
 * Calculates and returns the length of a given string.
 * @s: The input string whose length is to be determined.
 *
 * Return: The integer representing the length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    if (!s)
        return 0;

    while (*s++)
        length++;

    return length;
}

/**
 * Performs lexicographic comparison between two strings.
 * @s1: The first string for comparison.
 * @s2: The second string for comparison.
 *
 * Return: Negative if s1 < s2, positive if s1 > s2, and zero if s1 equals s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return *s1 - *s2;

        s1++;
        s2++;
    }

    return (*s1 == *s2) ? 0 : (*s1 < *s2 ? -1 : 1);
}

/**
 * Checks if the substring needle starts with the string haystack.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Address of the next character in haystack if found, otherwise NULL.
 */
char *starts_with(const char *haystack, const char *needle)
{
    while (*needle)
        if (*needle++ != *haystack++)
            return NULL;

    return (char *)haystack;
}

/**
 * Concatenates two strings.
 * @dest: The destination buffer.
 * @src: The source buffer.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcat(char *dest, char *src)
{
    char *result = dest;

    while (*dest)
        dest++;

    while (*src)
        *dest++ = *src++;

    *dest = *src;

    return result;
}

