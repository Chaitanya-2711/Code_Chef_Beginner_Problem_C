#include <stdio.h>

int main()
{
    int t, n, m, sum=0; //t is total no. of test cases
    scanf("%d\n",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        while(n>0)
        {
         m=n%10;
        sum=sum+m;
        n=n/10;
        }
        printf("%d\n",sum);

    }

	return 0;
}

