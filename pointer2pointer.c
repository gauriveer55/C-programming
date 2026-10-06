#include <stdio.h>

int main(){
int i=6;//store the value of the i 
int *j=&i;//store the value of i in form of j 
int **k=&j;// store the value of i in form of k

printf("The value of i is %d\n", i);
printf("The value of i is %d\n", *j);
return 0;
}