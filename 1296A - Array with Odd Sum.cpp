#include<stdio.h>
int main()
{
    int n,i,j,a,b;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        int sum=0,l=0,m=0;
        scanf("%d",&a);

        for(j=1; j<=a; j++)
        {
            scanf("%d",&b);
            sum+=b;
            if(b%2==0)
                l++;
            else
                m++;
        }

        if(sum%2==0)
        {

            if(l==a || m==a)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
            printf("YES\n");
    }


    return 0;
}
