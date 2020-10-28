//10178
#include<cstdio>

int main ()
{
	int f;
	int m , n ;
	int temp;
	scanf("%d",&f);
	for (int i = 0; i!=f;i++)
	{
		scanf("%d %d", &m, &n);
		if(m==n)
		{
			printf("%d\n",n);
			continue;
		}
		temp = m>n?n:m ;
		while (n%temp||m%temp)
		{
			if(m>n)
			{
				m=m%n;
				temp = m;
			}
			else
			{
				n=n%m;
				temp = n;
			}
			//
			//printf("m=%d,n=%d\n",m,n);
		}
		printf("%d\n",temp);
	}
	return 0 ;
 } 
