//10013
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int n,weekD,year,t,month,day;
	string str[10]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ,"Saturday"};
	while(scanf("%d",&n),n!=-1)
	{
		weekD=(n+6)%7;
		n++;
		t=0;
		year=2000;
		while(n>=0)
		{
			if(t%4==0 && t!=100 && t!=200 && t!=300)
			{
				n-=366;
				
			}
			else
			{
				n-=365;
				
			}
			t=t+1;
			if(t==400)t=0;
			year++;
			//
			//printf("n=%d,t=%d\n",n,t);
		}
		t--;
		if(t==-1)t=399;
		if(t%4==0 && t!=100 && t!=200 && t!=300)
		{
			n+=366;
			year--;
		}
		else
		{
			n+=365;
			year--;
		}
		if(n==0)
		{
			year--;
			printf("%d-12-31 ",year);
			cout<<str[weekD]<<endl;
			continue;
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300)n--;//使闰年后10个月计算正确 ，前两个月需要结束后重新考虑 
		//
		//printf("n=%d,",n);
		if(n<=31)
		{
			month=1;
			n-=0;
			day=n;
		}
		else if(n<=59)
		{
			month=2;
			n-=31;
			day=n;
		}
		else if(n<=90)
		{
			month=3;
			n-=59;
			day=n;
		}
		else if(n<=120)
		{
			month=4;
			n-=90;
			day=n;
		}
		else if(n<=151)
		{
			month=5;
			n-=120;
			day=n;
		}
		else if(n<=181)
		{
			month=6;
			n-=151;
			day=n;
		}
		else if(n<=212)
		{
			month=7;
			n-=181;
			day=n;
		}
		else if(n<=243)
		{
			month=8;
			n-=212;
			day=n;
		}
		else if(n<=273)
		{
			month=9;
			n-=243;
			day=n;
		}
		else if(n<=304)
		{
			month=10;
			n-=273;
			day=n;
		}
		else if(n<=334)
		{
			month=11;
			n-=304;
			day=n;
		}
		else if(n<=365)
		{
			month=12;
			n-=334;
			day=n;
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==2)
		{
			day++;
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==1)
		{
			day++;
			if(day==32)
			{
				month = 2;
				day = 1;
			}
		}
		/*if(t%4==0 && t!=100 && t!=200 && t!=300&&month==3)
		{
			day++;
			if(day==32)
			{
				month = 4;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==5)
		{
			day++;
			if(day==32)
			{
				month = 6;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==7)
		{
			day++;
			if(day==32)
			{
				month = 8;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==8)
		{
			day++;
			if(day==32)
			{
				month = 9;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==10)
		{
			day++;
			if(day==32)
			{
				month = 11;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==12)
		{
			day++;
			if(day==32)
			{
				month = 1;
				day = 1;
				year++;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==4)
		{
			day++;
			if(day==31)
			{
				month = 5;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==6)
		{
			day++;
			if(day==31)
			{
				month = 7;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==9)
		{
			day++;
			if(day==31)
			{
				month = 10;
				day = 1;
			}
		}
		if(t%4==0 && t!=100 && t!=200 && t!=300&&month==11)
		{
			day++;
			if(day==31)
			{
				month = 12;
				day = 1;
			}
		}*/
		printf("%d-%02d-%02d ",year,month,day);
		cout<<str[weekD]<<endl;
	}
	return 0;
}
