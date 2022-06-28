#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,num=1;
	scanf("%d",&n);
	system("cls");
	  	for(int i=1;i<=n;i++){
		 for(int j=1;j<=i;j++){
		 	printf("%d ",j);
		 }
		printf("\n");
	}
	  printf("\n");
	  	for(int i=n;i>=1;i--){
		 for(int j=1;j<=i;j++){
		 	printf("%d ",j);
		 }
		printf("\n");
	}
	  printf("\n");
  	for(int i=1;i<=n;i++){
		 for(int j=n;j>=i;j--){
		 	printf("%d ",j);
		 }
		printf("\n");
	}
	  printf("\n");
  	for(int i=1;i<=n;i++){
		 for(int j=1;j<=i;j++){
		 	printf("%d ",i);
		 }
		printf("\n");
	}
	  printf("\n");
	for(int i=1;i<=n;i++){
		 for(int j=1;j<=i;j++){
		 	printf("%d ",num);
		 	num++;
		 }
		printf("\n");
	}
       printf("\n");
   for(int i=1;i<=n;i++){
   	  for(int j=i;j<n;j++){
   	  	    printf(" ");
   	  }
   	  for(int k=1;k<=i;k++){
   	  	printf(" %d ",k);
	  }
		 printf("\n");
   }
   		 printf("\n");
   		 
    for(int i=1;i<=n;i++){
   	  for(int j=i;j<n;j++){
   	  	    printf(" ");
   	  }
   	  for(int k=1;k<=i;k++){
   	  	printf("%d ",k);
	  }
		 printf("\n");
   }
	return 0;
}
