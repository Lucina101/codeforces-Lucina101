#include<bits/stdc++.h>
long long t,m,n,x[5],y[5],r;
bool g;
long long s;
int main(){
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&m);
        s=(m*n)/2;
        if(m%2&&n%2) g=1;
        scanf("%lld%lld%lld%lld",&x[1],&y[1],&x[2],&y[2]);
        r=(x[2]-x[1])*(y[2]-y[1]);
        if(r%2){
            if(x[2]-x[1]-g)
                r=r/2+1;
            else
                r=r/2-1;
        }
        else r=r/2;
        s-=r;
        scanf("%lld%lld%lld%lld",&x[3],&y[3],&x[4],&y[4]);
        l=(x[4]-x[3])*(y[4]-y[3]);
        if(l%2){
            if(x[2]-x[1]-g)
                l=l/2+1;
            else
                l=l/2-1;
        }
        else l=l/2;
        s+=l;
        /*
        we should compute 3 things
        first number of black filled by white
        second number of original white filled by black
        third number of black filled by white which is on the second fill
        the answer is black-*1+*2+*3
        */
    }
}
