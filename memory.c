/**
 * bfree - releases a pointer and sets its address to NULL
 * @ptr: address of the pointer to release
 *
 * Return: 1 if released, 0 otherwise.
 */
int bfree(void **ptr)
{
    if (ptr && *ptr)
    {
        free(*ptr);
        *ptr = NULL;
        return (1);
    }
    return (0);
}
