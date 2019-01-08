#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int a[maxn],n,p[maxn],x,y;
pair<int,int> f[maxn];

int main(){
    scanf("%d",&n);
    if(n==3)
        printf("1 2 3");
    for(int i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        f[i]={x,y};
    }

    x=1;
    for(int i=1;i<=n/2+n%2;i++){
        if(f[x].second!=f[f[x].first].first&&f[x].second!=f[f[x].first].second)
            p[2*i-1]=f[x].second,p[2*i]=f[x].first;
        else
            p[2*i-1]=f[x].first,p[2*i]=f[x].second;
        x=p[2*i];
    }
    for(int i=1;i<=n;i++){
        printf("%d ",p[i]);
    }
}
