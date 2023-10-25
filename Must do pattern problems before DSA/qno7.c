#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            printf(" ");}
        for(j=n-i;j<n+i+1;j++){
            printf("*");}
        for(j=n+i+2;j<n-1;j++){
            printf(" ");}
        printf("\n");
    }
    return 0;
}
