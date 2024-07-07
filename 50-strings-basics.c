#include <stdio.h>
#include <string.h>

int main()
{
    // declaration
    char name[] = "Anand Panda";
    char course[] = {'B', 'T', 'E', 'C', 'H', '\0'};
    char *str = "Hello World"; // can be reinitialized
    str = "Hello";
    puts(str);

    char _str[] = "Hello World"; // cannot be modified
    // _str = "Hello";

    // printing string using loop
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    // printing string with pointers
    for (char* ptr = name; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");

    // printing using format specifier
    printf("%s\n", name);

    // input string
    char fn[10];
    printf("Enter First name : ");
    scanf("%s", fn);
    printf("Your First name is : %s\n", fn);

    char fulln[30];
    printf("Enter Full name : ");
    scanf("%s", fulln); // %s ignores after whitespace character
    printf("Your Full name is : %s\n", fulln);

    // gets, fgets, puts  //input ouput multi-word string
    char fullname[30];
    printf("Enter Full name : ");
    // gets(fullname);
    fgets(fullname, 30, stdin); // input  //fgets(str,n,file) stops when n-1 chars input or new line is entered
    // n-1 because last space is filled by \0
    puts(fullname); // output

    return 0;
}