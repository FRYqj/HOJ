//10003 
#include <iostream>
 
using namespace std;
int T,M,a,b;
int k[10010],sumk[10010];
long long dD;   //dD=在第i+1层停靠的不满意度之和与在i层不满意度之和的差
long long c;  //c=k[1]*1+k[2]*2+k[3]*3+....+k[m]*m;
int ans;
int main()
{
    int i;
    cin>>T;
    while(T--)
    {
        cin>>M>>a>>b; //楼层数 上满意度 下满意度
        cin>>k[1];c=sumk[1]=k[1];
        for(i=2;i<=M;i++)
        {
            cin>>k[i];
            sumk[i] = sumk[i-1]+k[i];
            c+=k[i]*i;
        }
        //求解并输出
        ans=1;
        for(i=1;i<M;i++)
        {
            dD=(b+i)*sumk[i] - (a-i-1)*(sumk[M]-sumk[i])-c;
            if(dD<0) ans=i+1;
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}

