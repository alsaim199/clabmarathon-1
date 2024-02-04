#include<cstdio>
long long factorial(long long n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    long long n;
    while(scanf("%lld",&n) != EOF){
        if(n>13 || (n<0 && n%2==1)) {
            printf("Overflow!\n");
        }
        else if(n<8 || (n<0 && n%2==0)) {
            printf("Underflow!\n");
        }
        else{
            long long p=factorial(n);
            printf("%lld\n",p);
        }
    }
}