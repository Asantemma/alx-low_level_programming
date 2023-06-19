#include "main.h"

/* Empty functions created for the purpose of dynamic lib creation*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c) 
{
    /* Function implementation  */
}

int _isalpha(int c)
{
    /* Function implementation */
}

int _abs(int n)
{
    /* Function implementation  */
}

int _isupper(int c)
{
    /* Function implementation  */
}

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

int _strlen(char *s)
{
    /* Function implementation */
}

void _puts(char *s)
{
    /* Function implementation */
}

char *_strcpy(char *dest, char *src)
{
    /* Function implementation */
}

int _atoi(char *s)
{
    /* Function implementation */
}

char *_strcat(char *dest, char *src)
{
    /* Function implementation */
}

char *_strncat(char *dest, char *src, int n)
{
    /* Function implementation  */
}

char *_strncpy(char *dest, char *src, int n)
{
    /* Function implementation */
}

int _strcmp(char *s1, char *s2)
{
    /* Function implementation */
}

char *_memset(char *s, char b, unsigned int n)
{
    /* Function implementation */
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* Function implementation  */
}

char *_strchr(char *s, char c)
{
    /* Function implementation */
}

unsigned int _strspn(char *s, char *accept)
{
    /* Function implementation */
}

char *_strpbrk(char *s, char *accept)
{
    /* Function implementation */
}

char *_strstr(char *haystack, char *needle)
{
    /* Function implementation */
}

