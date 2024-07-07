#include <stdio.h>
#include <string.h>

int main()
{
    char salt[] = "123";
    char oldpass[50];
    scanf("%s", oldpass);

    // fgets(oldpass, 50, stdin);
    int length = strlen(oldpass) + 1 + 3;
    // printf("%d", strlen(oldpass));
    
    char newpass[length];
    strcpy(newpass, oldpass);
    strcat(newpass, salt);
    puts(newpass);

    return 0;
}