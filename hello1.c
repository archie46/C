#include<stdio.h>
#include<stdlib.h>
void print(int a[],int n){
	for(int i =0 ;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
     int a[10];
   for(int j=0;j<10;j++){
   	a[j] = j;   
   }
   print(a,10);
   

   
//   int b[5];
//    for(i =0 ;i<5;i++){
//   	printf("%d ",b[i]);
//   }
  //   printf("%d",sum);
    return 0;
}
