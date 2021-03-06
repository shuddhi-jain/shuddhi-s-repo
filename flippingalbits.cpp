/*
C++ Program to Convert Decimal Number to Binary Number
*/

#include <iostream>
using namespace std;

long decimalToBinary(long n);

int main()
{
    long decimal;

    cout << "Enter a decimal number\n";
    cin >> decimal;
    cout << "Binary number = " << decimalToBinary(decimal);

    return 0;
}

// Function to convert a decinal number to binary number
long decimalToBinary(long n)
{
    int remainder;
    long binary = 0, i = 1;

    while (n != 0)
    {
        remainder = n % 2;
        n = n / 2;
        binary = binary + (remainder * i);
        i = i * 10;
    }
    return binary;
}