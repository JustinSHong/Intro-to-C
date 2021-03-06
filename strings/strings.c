#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s, return the number of characters 
    held inside it.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char s[])
{
    int counter = 0;

    while (s[counter] != '\0')
    {
        // printf("%d\n", i);
        counter++;
    };

    // printf("%d\n", counter);
    return counter;

    // *** For loop version ***
    //   int i;
    // int counter = 0;

    // for (i = 0; s[i] != '\0'; i++)
    // {
    //   counter++;
    // }

    // printf("counter: %d\n", counter);
    // // printf("counter size: %d\n", sizeof(s));
    // return counter;

    //kevin's while loop version

    //    //while loop version (might work)
    // int counter = 0;

    // while (s[counter])
    //     {
    //         counter++;
    //     }
    //     return counter;
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char rv[], char s[])
{
    int length = string_length(s);
    int count = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        rv[count] = s[i];
        count++;
        printf("CHARS: %d\n", rv[count]);
    }
    rv[count] = '\0';
    printf("REVERSED: %s\n", rv);
    return rv;

    //justin's code
    /*    int length = string_length(s);
    printf("ARRAY LENGTH: %d\n", length);

    for (int i = 0; i < string_length(s); i++) {
      rv[i] = s[length - 1];
      length--;
      printf("CHARS: %c\n", rv[i]);
    }
    printf("REVERSED ARRAY: %s\n", rv);
    return rv; */
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
