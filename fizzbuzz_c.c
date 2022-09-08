//  Write a Python program which iterates the integers from 1 to 50. 
// For multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz". 
// For numbers which are multiples of both three and five print "FizzBuzz".

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number: "),
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
// number divisible by 3 and 5 will always be divisible by 15, print 'FizzBuzz' in place of the number
        if (i%15 == 0)
            printf ("FizzBuzz\t");

// number divisible by 3, print 'Fizz' in place of the number
        else if ((i%3) == 0)
            printf("Fizz\t");

// number divisible by 5, print 'Buzz' in place of the number
        else if ((i%5) == 0)
            printf("Buzz\t");
}