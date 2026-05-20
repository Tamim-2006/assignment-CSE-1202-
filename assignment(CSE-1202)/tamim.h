#include<stdio.h>

// Maximum
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Minimum
int min(int a, int b)
{
    return (a < b) ? a : b;
}

// Prime Check
int isPrime(int n)
{
    if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

// Odd Check
int isOdd(int n)
{
    return n % 2 != 0;
}

// Even Check
int isEven(int n)
{
    return n % 2 == 0;
}

// Digit Sum
int digitSum(int n)
{
    int sum = 0;

    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Reverse Number
int reverseNumber(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

// Decimal to Binary
void decimalToBinary(int n)
{
    int binary[32];
    int i = 0;

    while(n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");
}

// Binary to Decimal
int binaryToDecimal(int n)
{
    int decimal = 0;
    int base = 1;

    while(n > 0)
    {
        int lastDigit = n % 10;

        decimal += lastDigit * base;

        base *= 2;
        n /= 10;
    }

    return decimal;
}

// Decimal to Octal
void decimalToOctal(int n)
{
    printf("%o\n", n);
}

// Decimal to Hexadecimal
void decimalToHexadecimal(int n)
{
    printf("%X\n", n);
}

// Power Function
int power(int base, int exp)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result *= base;
    }

    return result;
}

// Palindrome Check
int palindrome(int n)
{
    int original = n;
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return original == rev;
}