#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary);
int binaryToHex(long long binary);

int main()
{
    long long binary;
    int decimal;
    long long hex;
    // 0b11011 -> 27
    scanf("%lld", &binary);
    decimal = binaryToDecimal(binary);
    printf("%d\n", decimal);
    //printf("%lld", hex);
    return 0;
}
int b_to_d(int b, int n)
{
    for(int i=0;i<n;i++)
    {
        b *= 2;
    }
    return b;
}
int binaryToDecimal(long long binary)
{
    int decimal = 0;
    // 0
    for(int i=0;binary>0;i++)
    {
        decimal += b_to_d(binary%10,i);
        binary/=10;
    }
    return decimal;
}