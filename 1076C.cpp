#include<stdio.h>
#include<algorithm>
using namespace std;
int ta,la,ra,tb,lb,rb,x,y,z,a,b,c;
int main(){
    scanf("%d%d%d%d%d%d",&la,&ra,&ta,&lb,&rb,&tb);
    int d =__gcd(ta,tb);
    x=((la-lb)%d+d)%d;
    a=min(rb-lb+1-x,ra-la+1);
    b=min(ra-la+1-d+x,rb-lb+1);
    a=max(a,b);
    if(a>0)
        printf("%d\n",a);
    else
        printf("0");
}

