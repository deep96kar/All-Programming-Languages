#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "deep";
    char s1[56] = "deep";
    char s2[56] = " bhai";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "deep"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloDeep" <no space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}