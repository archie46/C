#include<stdio.h>
int arr[100]={};
int curr_size=0;
void print_heap(){
	int i;
	for (i = 0; i <curr_size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void insert(int val){
	arr[curr_size]=val;
		curr_size++;
	int i = curr_size;
	while(i>0){
		int p=i/2;
		if(arr[i]>arr[p]){
			int c = arr[p];
			arr[p] = arr[i];
			arr[i] = c;
			i=p;
		}
		else
		return;
	}
}
void delete(){
   arr[1]=arr[curr_size];
   curr_size--;
   int i=1;
   while(i<curr_size){
   	int l = arr[2*i] > arr[2*i+1]?2*i:2*i+1;
   	if(arr[i]<arr[l]){
   		int c = arr[l];
			arr[l] = arr[i];
			arr[i] = c;
			i=l;
	   }
	   else
	   return;
   }
}
int main(){
	int ele;
	int i=0;
     while(i<10){
     	printf("Insert");
     	scanf("%d",&ele);
     	insert(ele);
     	print_heap();
     	i++;
	 }
//	 delete();
//	 print_heap();
	 return 0;
}
