
#include "tamim.h"
#include<stdio.h>

int main()
{
    int a, b, n, binary, base, exp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", max(a, b));
    printf("Minimum = %d\n", min(a, b));

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    if(isOdd(n))
        printf("%d is Odd\n", n);
    else
        printf("%d is Even\n", n);

    printf("Digit Sum = %d\n", digitSum(n));

    printf("Reverse Number = %d\n", reverseNumber(n));

    printf("Binary = ");
    decimalToBinary(n);

    printf("Octal = ");
    decimalToOctal(n);

    printf("Hexadecimal = ");
    decimalToHexadecimal(n);

    printf("\nEnter a Binary Number: ");
    scanf("%d", &binary);

    printf("Decimal = %d\n", binaryToDecimal(binary));

    printf("\nEnter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Power = %d\n", power(base, exp));

    printf("\nEnter number for Palindrome Check: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("%d is Palindrome\n", n);
    else
        printf("%d is Not Palindrome\n", n);

    return 0;
}