#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=1e6;
long long n,l,a,t[maxn],r[maxn];

int main(){
    long long ans=0;
    scanf("%lld%lld%lld",&n,&l,&a);
    t[n+1]=l;
    for(int i=1;i<=n;i++){
    scanf("%lld%lld",&t[i],&r[i]);
        if(t[i]-t[i-1]-r[i]-a>0)
            ans+=(t[i]-t[i-1]-r[i])/a;
        }
    printf("%lld\n",ans);
}
