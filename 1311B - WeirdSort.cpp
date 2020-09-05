#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x[100],p[100],a,b,swap;
        scanf("%d%d",&a,&b);
        for(int i=1; i<=a; i++)
        {
            scanf("%d",&x[i]);
        }
        for(int i=1; i<=b; i++)
        {
            scanf("%d",&p[i]);
        }
        for(int i=1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
            {
                if(p[j]<=a-1)
                {
                    if(x[p[j]]>x[p[j]+1])
                    {
                        swap=x[p[j]];
                        x[p[j]]=x[p[j]+1];
                        x[p[j]+1]=swap;
                    }
                }
            }
        }
        int cnt=1;
        for(int i=1; i<a; i++)
        {
            if(x[i+1]<x[i])
            {
                cnt=0;
                break;
            }
        }
        if(cnt)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
