#include<stdio.h>
void print(int m,int n,int arr[][n]){
	int i,j;
	  for (i=0;i<m;i++){
         for (j=0;j<n;j++){
            printf("%d ",arr[i][j]);
         }
         printf("\n");
    }
}
void getArray(int m,int n,int arr[][n]){
	int i,j;
	  for (i=0;i<m;i++){
         for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
         }
    }
}
int main(){

    int arr[6][6]
  //  getArray(6,6,arr);
	={
        {1,1,1,0,0,0},
        {0,1,0,0,0,0},
        {1,1,1,0,0,0},
        {0,0,2,4,4,0},
        {0,0,0,2,0,0},
        {0,0,1,2,4,0},
   };
  //  print(6,6,array);
    int array[]={0,1,2};
    int sum;
 //   int r=0,c=0;
    int i=3;
    int j=1;
   int gsum=-100;
     do{
         int a[]={0,1,2};
           do{
               sum=0;
           int m=0,n=0;
           for(m=0;m<3;m++){
               for(n=0;n<3;n++){
                  //  r=array[m];
                  //  c=a[n];
                   if(m==1)
                   {
                  //     printf("here");
                       sum+=arr[array[1]][a[1]];
                       break;
                   }
                   else
                   sum+=arr[array[m]][a[n]];
               }
           }
          //   printf("%d ",sum);
             if(gsum<sum)
              gsum=sum;
          a[0]++;
          a[1]++;
          a[2]++;
     }while(a[0]<=3);
     array[0]++;
     array[1]++;
     array[2]++;
     printf("\n");
     }while(array[0]<=3);
     printf("\n%d",gsum);
    return 0;
}
