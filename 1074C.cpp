#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
const int maxn=3e6+10;
int b[maxn];
char s[2000];
void rever(int k){
for(int i=0;i*2<=k-1;i++){
    swap(s[i],s[k-1-i]);
}
}
int main(){
    scanf("%s",&s);
    int n;
    n=strlen(s);
    for(int i=0;s[i]!='\0';i++){
        if(i==n-1&&s[i]=='a'){
            rever(i+1);
            b[i]=1;
            continue;
        }
        if(s[i]=='a'&&s[i+1]=='b'){
            rever(i+1);
            b[i]=1;
            continue;
            }
        if(s[i]=='b'&&s[i+1]=='a'){
            rever(i+1);
            b[i]=1;
            continue;
        }
    }
    for(int i=0;s[i]!='\0';i++){
        printf("%d ",b[i]);
    }
}
