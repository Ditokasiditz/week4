#include<stdio.h>

int main(){
  int n,i,j,k,m;
  printf("number?:");
  scanf("%d",&n);
  m = n;

  //upper body
  for(i=1;i<=n;i++){
    
    for(j=1;j<=i;j++){
      printf(" ");
    }
    for(k=1;k<=m;k++){
      printf("*");
    }
    for(k=1;k<m;k++){
      printf("*");
    }
    
    m--;
    printf("\n");
  }


  //lower body
  for(i=1;i<n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }

    for(k=0;k<=i;k++){
      printf("*");
    }

    for(k=1;k<=i;k++){
      printf("*");
    }

    printf("\n");
 
  }
  
}