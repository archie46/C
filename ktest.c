#include<stdio.h>
int fun(){
	static int num = 40;
	return num--;
}
int main(){
       for(fun();fun();fun()){
       	printf("%d ",fun());
	   }
	 return 0;
}
