#include<stdio.h>
int main(){
    int n,p=0,T=1;
    while(scanf("%d",&n)==1 && n>-1){
        if(n==0&&n==1)printf("0\n");
        else{
            for(int i=1;i<n;i*=2){
                p=p+1;
            }
            printf("Case %d: %d\n",T++,p);
        }
        p=0;

    }
}