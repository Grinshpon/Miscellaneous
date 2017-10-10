#include <stdio.h>
#include <math.h>
int a;
int convert(char c);
int toBinary(int b);
int toDecimal(int b);
int main()
{
    scanf("%d",&a);
    char c;
    scanf("%c",&c); //scans the ENTER to clear it before scanning character
    scanf("%c",&c); //a for toBinary, b for toDecimal
    printf ("%c\n%d\n",c,convert(c));
    return 0;
}
int convert(char c)
{
    if (c == 'a')
    return toBinary(a);
    else if (c == 'b')
    return toDecimal(a);
    else
    {
        printf("ERROR");
        return 0;
    }
}
int toBinary(int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return (b % 2 + 10 * toBinary(b / 2));
    }
}
int toDecimal(int b)
{
        int d = 0, i = 0, r;
    while (b!=0)
    {
        r = b%10;
        b /= 10;
        d += r*pow(2,i);
        ++i;
    }
    return d;
}