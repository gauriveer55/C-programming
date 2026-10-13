#include <stdio.h>

int main(){
    
//int a=4*3/6*2;// associativity left to right for same precendance

//int a=("%d\n",5*2-2*3);//presendance priority * / % + - =

int a=("%d\n",5*(2/2)*3);// first solve the bracket then presendance
printf("%d \n",a);
return 0;
}
