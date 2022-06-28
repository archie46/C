#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	system("cls");
	for(int i=0;i<n;i++){
		 for(int j=0;j<=i;j++){
		 	printf("* ");
		 }
		printf("\n");
	}
      printf("\n");

	for(int i=0;i<n;i++){
		 for(int j=n;j>i;j--){
		 	printf("* ");
		 }
		printf("\n");
	}
	  printf("\n");
	  	return 0;
}
