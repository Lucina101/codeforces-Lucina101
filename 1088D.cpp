#include<bits/stdc++.h>
using namespace std;
long long p[35];
int main(){
    p[0]=1;
    for(int i=1;i<=34;i++)
        p[i]=p[i-1]*2;

/*
a^c>(b^d) return 1;
a^c<(b^d) return -1;
a^c=(b^d) return 0;



}
