#include<stdio.h>
int main(){
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    if(x>=100&&x<=999)
    printf("%d is three digit number",x);
    else 
    printf("%d is not a three digit number",x);
    return 0;
}
    