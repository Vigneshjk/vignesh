#include <stdio.h>
int main(void)
{
    long long n;
    int count = 0;
    printf(" ");
    scanf("%lld", &n);
    while(n != 0)
    {
    	n /= 10;
        ++count;
        }
    printf(%d", count);
}
