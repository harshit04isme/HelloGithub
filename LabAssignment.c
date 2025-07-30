#include<stdio.h>
int main(){
int num=675;
int rev=0;
for(int copy=num;copy!=0;copy/=10){
        int digit=copy%10;
        rev=rev*10+digit;
    }
    printf("%d",rev);
}