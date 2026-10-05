// #include <stdio.h>
// int main(){
    // int i=1;
    // while(i<=5){
        // printf("hello world\n");
    //    i++;
    // }
    // return 0;

// }

//give the input from user 
#include <stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}