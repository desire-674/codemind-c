#include<stdio.h>
int main(){
  int n,i,l;
  scanf("%d%d",&n,&l);
  for(i=1;i<=l;i++)
  {  
      if(i%2!=0)
  {
      printf("%d x %d = %d
",n,i,n*i);
     
      }
 }

}