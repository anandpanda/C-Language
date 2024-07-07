#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    // fgets(sen, 100, stdin);

    scanf("%[^\n]", sen);

    printf("%c\n%s\n", ch, s);
    puts(sen);

    return 0;
}
