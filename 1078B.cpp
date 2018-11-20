#include<bits/stdc++.h>
using namespace std;
int n,p[1000000],b[1000000];
int main(){
    scanf("%d",&n);
    if(n==1){
        printf("1 0");
        return 0;
    }
    long long ans=1;
    int t=0,x,maxp=0;
    bool check=true;
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i;j<=n;j+=i){
                p[j]=1;
            }
            if(n%i==0){
                ans*=i;
            x=n,t++;
            while(x%i==0){
                b[t]++;
                x=x/i;
            }
            maxp=max(maxp,b[t]);
            if(b[t]!=maxp)
                check=false;
            }
        }
    }
    int sum=0;
    int f=1,l=0;
    while(f<maxp){
        f*=2;
        l++;
    }
    if(check&&f==maxp){
        sum=0;
    }
    else sum++;
    sum+=l;
    printf("%lld %d",ans,sum);
}
