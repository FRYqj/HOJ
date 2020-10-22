#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int dp[110000];
    int a[110000];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            dp[i]=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j]&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }
        //printf("%d ",dp[i]);
    }
    sort(dp,dp+n);
    printf("%d\n",dp[n-1]+1);
} 
