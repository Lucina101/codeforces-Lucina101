#include<bits/stdc++.h>
using namespace std;
const int maxn=3e6+10;
int a[maxn],c[maxn],n,b[maxn];
long long sum;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        c[a[i]]++;
    }
    int pt=0;
    for(int i=1;i<=n;i++){
        if(((sum-a[i])/2)<=int(1e6))
        if(c[a[i]]){
        c[a[i]]--;
        if(c[(sum-a[i])/2]&&(sum-a[i])%2==0)
            b[++pt]=i;
        c[a[i]]++;
        }
    }
    printf("%d\n",pt);
    for(int i=1;i<=pt;i++){
        printf("%d ",b[i]);
    }
}
