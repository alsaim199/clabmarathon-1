#include<stdio.h>
#include<math.h>
int T=1;
void solve(){
    int a1,a2,b1,b2,c1,c2,d1,d2;
    int area;
    scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);
    d1=(a1+c1)-b1;d2=(a2+c2)-b2;
    area=abs((1/2.0)*((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2)-(a2*b1)-(c1*b2)-(c2*d1)-(d2*a1)));
    printf("Case %d: %d %d %d\n",T++,d1,d2,area);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    
}