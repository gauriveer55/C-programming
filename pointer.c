#include <stdio.h>

int main(){
//int i=72;
//int*j=&i;// j is the pointer pointing to i
//printf("The address of i is %p\n",&i);
//printf("The address of i is %p\n",j);

int age=22;
int*ptr=&age;//*means value,& means address
//address
//printf("%p\n",&age);

printf("%u\n",&age);//unsinged value thay are covert the hexadecimal to normal
 printf("%u\n",ptr);//age address are store
 printf("%u\n",&ptr);//address of ptr
return 0;
}