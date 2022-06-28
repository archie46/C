#include<stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
   int i=5,j=0;
  while(i--){
     printf("%d  %d\n",i,j);
     j++;
  }
   
  //   do{
  //    printf("%d  %d\n",i,j);
  //    j++;
  // }while(i--);
  return 0;
}
