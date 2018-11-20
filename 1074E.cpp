#include<stdio.h>
const int mod=998244353;
const int maxn=1e5;
long long u,ans,b[maxn];
long long l,r,k;
long long power(long long x,long long t){
    for(int i=1;i<=t;i++){
        x=x*10;
    }
    return x;
}
void permu(int x,int y,int t,int ww){
if(y==0){
        u=0;
    for(int i=1;i<=t;i++){
        u+=power(a[i],t-i);
    }
    if(u>=l&&u<=r){
        ans+=u;
        ans=ans%mod;
    }
}
for(int j=1;j<=10;j++){
    if(b[j]==0&&ww<k)
    else
    {
        b[j]=1;
    }
    }
}
}
int main(){
    scanf("%lld%lld%lld",&l,&r,&k);




}
