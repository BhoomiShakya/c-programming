#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,a=1;

    printf("enter the rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        if(a==10){
            a=1;
        }

    }
        printf("\n");
    }

    return 0;
}