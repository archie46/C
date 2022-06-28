#include<stdio.h>
int main(){
	int i,j,k;
   int a[]={1,2,3};
   int b[]={1,2,3};
   for(i=0;i<3;i++){
   	  for(j=0;j<3;j++){
   	  	   for(k=0;k<3;k++){
   	  	   	if(a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k])
   	  	   	   printf("%d%d%d ",a[i],a[j],a[k]);
				}
		 }
   }
}
