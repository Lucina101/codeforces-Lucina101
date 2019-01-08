#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int a[maxn],b[maxn],c[maxn],d[maxn],posa[maxn],posb[maxn],t,la,ra,lb,rb,x,y,n,m;
long long ans;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        posa[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
        posb[b[i]]=i;
        }
    for(int i=1;i<=m;i++){
        scanf("%d",&t);
        if(t==2){
            scanf("%d %d",x,y);
            swap(b[x],b[y]);
            swap(posb[b[x]],posb[b[y]]);
        }
        else if(t==1){
                ans=0;
            scanf("%d%d%d%d",&la,&ra,&lb,&rb);
            for(int j=la;j<=ra;j++){
                if(posa[j]>=posb[lb]&&posa[j]<=posb[rb])
                    ans++;
            }
            printf("%lld\n",ans);
        }

    }




}
