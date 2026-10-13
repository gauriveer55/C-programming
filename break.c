# include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if (i==3){
            break;//exit the loop
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}

//uesr control program 
#include<stdio.h>
int main() {
    int n;
    do{
        printf("Enter the number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2!=0){
            break;
        }
    } while(1);
    printf("Thank you");

    return 0;
}
