#include <stdio.h>
#define max(a,b,c,d) \
    printf("%d",(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d))));\

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max(a,b,c,d);
}