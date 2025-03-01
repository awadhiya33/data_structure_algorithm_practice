#include<stdio.h>



int main(){
    int n;
    int a=0,b=1;
    int c=0,i=0;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;

    }



    
    return 0;
}
