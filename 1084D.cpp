#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int n,w[maxn],x,y,z;

int main(){
vector<pair<int,int>> a[maxn];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&w[i]);
    for(int i=1;i<=n-1;i++){
        scanf("%d%d%d",&x,&y,&z);
        a[x].push_back({y,z});
        a[y].push_back({x,z});
    }



}
