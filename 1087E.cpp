/*
    Lucina~~
      101
    Lucina~~

*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int t,k,c[30],d[30];
char s[maxn],a[maxn],b[maxn];
int main(){
    scanf("%d",&t);
    bool f;
    while(t--){
    for(int i=0;i<29;i++)
        c[i]=0,d[i]=0;
    scanf("%d %s %s %s",&k,s,a,b);
    f=true;
    for(int i=0;i<k;i++){
        if(f){
        if(a[i]==b[i]){// c is the map of s
            if(c[s[i]]){
                if(c[s[i]]+'a'-1==a[i])
                    continue;
                else{
                    printf("NO\n");
                    f=false;
                    break;
                }
            }
            else{
                c[s[i]]=a[i]-'a'+1;
                continue;
            }
        }
        }
    }
    }
}
