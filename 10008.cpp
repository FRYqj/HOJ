//10008 
#include <cstring>
#include <cstdio>

using namespace std;


int n;
char s[2200][2200];

void sett(int a,int b)
{
    if(b > 7)
    {
        return;
    }
    for(int i = 0;i < a;i ++)
    {
        for(int j = 0;j < a;j ++)
        {
            s[i + a][j + a] = s[i + a * 2][j] = s[i][j + a * 2] = s[i + a * 2][j + a * 2] = s[i][j];//依次为中间=右上角=左下角=右下角 =左上角 
        }
    }
    sett(a * 3,b + 1);
}
 
int set3(int t)
{
    int d = 1;
    while(t)
    {
        d *= 3;
        t --;
    }
    return d;
}
int main()
{
    memset(s,' ',sizeof(s));//全赋值为空格 
    s[1][2] = '\0';
    s[0][0] = 'X';
    sett(1,2);
    while(~scanf("%d",&n) && n != -1)
    {
        int d = set3(n - 1);
        for(int i = 0;i < d;i ++)
        {
            for(int j = 0;j < d;j ++)
            {
                putchar(s[i][j]);
            }
            putchar('\n');
        }
        printf("-\n");
    }
    return 0 ;
}
