#include <stdio.h>
// program to count digits of given number and also its sum
void main()
{
    int n;
    printf("Enter a number:"); // input number of any size but must be a positive integer
    scanf("%d", &n);

    int num, sum = 0;
    int i = 0; // initialization
    do
    {
        num = n % 10; // to find the last digit of number in every loop
        sum += num;   // add the every last digit taken
        n /= 10;      // to remove the last digit in every run of loop
        i++;
    } while (n > 0);
    printf("The no. of digits in this number is %d .\n", i);   // output for no. of digits
    printf("The sum of all digits of this number is %d", sum); // output for sum of digits
}
