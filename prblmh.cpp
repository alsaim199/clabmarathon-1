#include<stdio.h>
void solve(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            count++;
        }
    }
    printf("%.3f%%\n",((float)count/n)*100);

    
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        solve();
    }
}