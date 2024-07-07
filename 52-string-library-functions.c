#include <stdio.h>
#include <string.h>

int main()
{
    // strlen  length of string
    char name[] = "anand";
    printf("Length is %d\n", strlen(name)); // excludes \0

    // strcpy
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr, oldstr);
    puts(newstr);

    // strcat concatenates first string with second
    char firststr[30] = "Hello "; // must have capacity
    char secstr[30] = "World";
    strcat(firststr, secstr);
    puts(firststr);

    // strcmp compares 2 string and returns a value
    // 0 => same string
    // +ve => 1st string's 1st letter  - 2nd string's 1st letter > 0 (ASCII)
    // -ve => 1st string's 1st letter  - 2nd string's 1st letter < 0 (ASCII)

    char fstr[] = "hhhApple"; // A -> 65
    char sstr[] = "hhhBan";   // B -> 66
    printf("%d", strcmp(fstr, sstr));

    return 0;
}