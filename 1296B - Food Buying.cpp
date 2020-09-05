#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        int a,b,c,d;
        scanf("%d",&a);

        for(j=1,d=a; j>=1 ; )
        {
            b=a/10;
            c=a%10;
            d+=b;
            a=b+c;
            if(b+c<10)
                break;
        }
        printf("%d\n",d);
    }

    return 0;

}
