#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
int d[2100000];
int n,g;
char s[maxn],e;
long long ans,u;
bool ch;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        //printf("%d",a[s]);
            stack<char> f;
            for(int j=0;s[j]!='\0';j++){
                if(f.empty()){
                    f.push(s[j]);
                }
                else{
                    if(f.top()=='('&&s[j]==')'){
                        f.pop();
                        continue;
                    }
                    else{
                        f.push(s[j]);
                    }
                }
            }
            if(!f.empty()){
                    ch=true;
                    e=f.top();
                    g=f.size();
                    while(!f.empty()){
                        if(f.top()!=e)
                            ch=false;
                            f.pop();
                    }
                    if(ch){
                        if(e=='(')
                            d[g]++;
                        else
                            d[int(1e6)+g]++;
                    }
                }
                else{
                    d[0]++;
                }
    }
    for(int i=1;i<=int(5e5)+55;i++){
        u=min(d[i],d[i+int(1e6)]);
        ans+=u;
    }
    ans+=(d[0])/2;
    printf("%lld\n",ans);
}
