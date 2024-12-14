#include <stdio.h>
int main()
{
    int i;
    char prugs[1000];
    // C is the total count//
    int C = 0;
    printf("enter any statement: ");
    // fgets()reads the line from the specified stream and stores it into the string//
    fgets(prugs, sizeof(prugs), stdin);
    for (i = 0; prugs[i] != '\0'; i++)
    {
        if (prugs[i] == ' ')
        {
            C++;
        }
    }
    printf("the total number of spaces are:%d\n", C);
    return 0;
}
