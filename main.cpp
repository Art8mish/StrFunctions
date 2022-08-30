#include <stdio.h>
#include <stdlib.h>
#include <TXlib.h>

int own_strlen(char *str);

char* own_strcpy(char *destination, char *source);

char* own_strchr(char *str, int symbol);

int own_strcmp(const char *str1, const char *str2);

char* own_strcat (char *destination, const char *append);


int own_strlen(char *str)
{
    int index = 0;
    char ch = ' ';
    int symbol_count = 0;

    while ((ch = str[index++]) != '\0')
        symbol_count++;

    return symbol_count;
}

char* own_strcpy(char *destination, char *source)
{
    int index = 0;

    while ((destination[index] = source[index]) != '\0')
        index++;

    return destination;
}

char* own_strchr(char *str, int symbol)
{
    int index = 0;
    int ch = 0;

    while (ch != symbol)
        ch = str[index++];

    if (ch == '\0')
        return 0;

    return (str + index - 1);
}

int own_strcmp(const char *str1, const char *str2)
{
    int index = 0;
    int ch1 = str1[index];
    int ch2 = str2[index];

    while (ch1 == ch2
           && ch2 != '\0'
           && ch1 != '\0')
    {
        ++index;

        ch1 = str1[index];
        ch2 = str2[index];
    }

    return (ch1 - ch2);
}

char *own_strcat (char *destination, const char *append)
{
    int index1 = 0;
    int index2 = 0;
    int ch = destination[index1];

    while ((ch = destination[index1++]) != '\0') { };

    while ((destination[index1++] = append[index2++]) != '\0');

    return destination;

}


int main(void)
{
    char str[80] = "Example of a string";
    char b[80] = "Some symbols";
    char str_copy[80] = "Another string sample";
    int ch = 'o';

    int a = 0;


    //strlen test
    //printf("My symbol amount: %d. strlen(): %d. \n", own_strlen(str), strlen(str));


    //strcpy test
    //own_strcpy(str_copy, str);
    //strcpy(b, str);
    //printf("own_strcpy: %s \n strcpy(): %s \n", str_copy, b);


    //strchr test
    //own_strchr(str, ch);
    //strchr(str, ch);
    //printf("own_strchr: %p \n strchr: %p \n", own_strchr(str, ch), strchr(str, ch));


    //strcmp test
    //printf("own_strcmp: %d \n strcmp: %d \n", own_strcmp(str, b), strcmp(str, b));


    //strcat test
    //printf("own_strcat: %s \n strcat: %s \n", own_strcat(str, b), strcat(str, b));

    return 0;
}

