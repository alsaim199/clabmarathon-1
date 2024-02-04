#include<stdio.h>
void solve(long long n){
    long long a=n,b=0;
    while(a!=0){
        b+=a%10;
        a/=10;
    }
    if(b<10) {
        printf("%d\n",b);
        return;
    }
    else{
        solve(b);
    }
}
int main(){
    long long n;
    while(scanf("%lld",&n)==1 && n!=0){
        solve(n);
    }
}