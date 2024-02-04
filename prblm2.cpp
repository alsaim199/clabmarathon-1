#include<stdio.h>
void solve(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a<b) printf("<\n");
    else if(a>b) printf(">\n");
    else printf("=\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--) solve();
}