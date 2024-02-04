#include<stdio.h>
int T=1;
void solve(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b+c)%a==0) printf("Case %d: %d\n",T++,a);
    else printf("Case %d: %d\n",T++,(b+c)%a);
        
    
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}