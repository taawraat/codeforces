
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n--)
    {
        long long int a,b,c;
        scanf("%lld%lld",&a,&b);
        c=a-b;
        if(a<b){
            if(c%2==0)
                printf("2\n");
            else
                printf("1\n");
        }
        else if(a>b){
            if(c%2==0)
                printf("1\n");
            else
                printf("2\n");
        }
        else
            printf("0\n");
    }
    return 0;
}
