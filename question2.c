#include<stdio.h>
int main(){
    int num;
    int sum=0;
    while(1){
       scanf("%d", &num);
       if(num<0){
        continue;
       }
       else if(num>0){
        sum+=num;
        printf("%d", sum);
       }
       else{
        break;
       }
    }
    return 0;
}

