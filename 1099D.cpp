#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,s[maxn],u,pa[maxn],cur,fuck;
vector<int> a[maxn];
bool f[maxn];


int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        scanf("%d",&u);
        pa[i]=u;
        a[u].push_back(i);
        a[i].push_back(u);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
        if(s[i]==-1)
            f[i]=true;
        }
    for(int i=2;i<=n;i++){
        if(a[i].size()==1){
         cur=s[i];
        fuck=i;
        while(fuck!=0){
            if(f[fuck]){
                if(cur!=-1&&s[fuck]!=-1){
                s[fuck]=min(s[fuck],cur);
                }
                else if(s[fuck]==-1&&cur!=-1)
                    s[fuck]=cur;
            }
            if(s[fuck]>=0){
                if(f[fuck]==false&&s[fuck]>cur&&cur!=-1){
                    printf("-1");
                    return 0;
                }
                if(cur==-1){
                    cur=s[fuck];
                    }
                cur=min(cur,s[fuck]);
            }
            fuck=pa[fuck];
        }
    }
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
            if(s[i]!=-1){
                ans+=(s[i]-s[pa[i]]);
            }
    }
    printf("%lld\n",ans);
}
