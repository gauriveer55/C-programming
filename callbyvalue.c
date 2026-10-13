#include <stdio.h>
void square(int n);
void _square(int*n);

int main(){
int number=4;
square(number);//argument
printf("number=%d\n",number);

_square(&number);
printf("number=%d\n",number);
return 0;
}
//call by value
void square(int n){//passed by function
    n=n*n;
    printf("square=%d\n",n);
}
void_square(int*n){
    *n=(*n)*(*n);
    printf("sqaure=%d\n",*n);
}