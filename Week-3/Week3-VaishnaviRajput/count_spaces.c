#include <stdio.h>
#include <string.h> //used for use of strlen() function
// program to read the blank spaces of any given sentence

void main()
{
    char sentence[1000];
    printf("Enter any sentence:");
    scanf("%[^\n]", sentence); // taking sentence in string form including spaces

    //%[^\n] in scanf allows to take sentence with spaces in form of array untill any new line is added

    int count = strlen(sentence); // to get length of string

    int i = 0; // initialization of loop
    int blank = 0;
    while (i <= count)
    {
        if (sentence[i] == ' ') // loop to check each character in string for spaces
        {
            blank += 1; // to store the count of blank spaces
        }
        i++;
    }
    printf("The number of spaces in this sentence is %d", blank); // output
}
