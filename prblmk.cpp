#include<stdio.h>
#include<math.h>
int max(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(a<=b&& b>=c) return b;
    else return c;
}
int T=1;
void solve(){
    int a,b,c,d,e,f,g,sum=0;
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    sum=(a+b+c+d);
    sum+=(max((e+f),(e+g),(f+g)))/2;
    char ch;
    //printf("%d\n",sum);
    if(sum>=90) ch='A';
    else if(sum>=80) ch='B';
    else if(sum>=70) ch='C';
    else if(sum>=60) ch='D';
    else ch='F';
    printf("Case %d: %c\n",T++,ch);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}