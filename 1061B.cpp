#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn=3100;
int n,m,a[maxn][maxn];
void filt(int i, int j){
    for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            if(l!=1||k!=1)
                a[i+k][j+l]=2;
        }
    }
}
int main(){
    scanf("%d %d",&m,&n);

}
/*


*/
