#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b=0, i=0;
    printf("Enter a number to check: ");
    scanf("%d",&n);

    a = n;

    while(n>10)
    {
        n = n/10;
        i++;
    }

    n = a;

    while(n>10)
    {
        int rem = n%10;
        b = b+ rem*pow(10,i);
        n=n/10;
        i--;
    }
    if(n)
    {
        b = b+ n*pow(10,i);
    }

    if (b == a)
    {
        printf("\n\n Number is Palindrome \n\n");
        printf("\n b=%d a=%d\n", b, a);
    }
    else
    {
        printf("\n\n Number is NOT Palindrome");
        printf("\n b=%d a=%d\n", b, a);
    }
    return 0;
}



