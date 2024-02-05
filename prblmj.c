#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int binary(char ar[],int b){
    int sum=0;
    int c=b;
    for(int i=0;i<8;i++){
        sum+=((int)ar[c--]-48)*pow(2,i);
    }
    return sum;
}
int main(){
    char a[35];
    char b[15];
    gets(a);
    gets(b);
    int a1=binary(a,7);
    int b1=binary(a,16);
    int c1=binary(a,25);
    int d1=binary(a,34);

}