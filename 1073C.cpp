#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=2e5+10;
int n,x,y,dx[maxn],dy[maxn],g;
char s[maxn];
bool fuck(int len){
    for(int i=0;i<=n-len;i++){
        g=abs(y-dy[n]+dy[i+len]-dy[i])+abs(x-dx[n]+dx[i+len]-dx[i]);
        if(g<=len)
            return true;
    }
    return false;
}
int main(){
    scanf("%d%s",&n,s+1);
    scanf("%d%d",&x,&y);
    if((x+y-n)%2!=0||(abs(x)+abs(y)>n)){
        printf("%d\n",-1);
        return 0;
    }
    for(int i=1;i<=n;i++){
     dx[i]=dx[i-1];
     if(s[i]=='R')
        dx[i]++;
     else if(s[i]=='L')
        dx[i]--;
     dy[i]=dy[i-1];
     if(s[i]=='U')
        dy[i]++;
     else if(s[i]=='D')
        dy[i]--;
    }
    int l=0,r=n,ans=0,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(fuck(mid)){
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    printf("%d\n",ans);
}
