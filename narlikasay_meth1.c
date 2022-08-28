#include<stdio.h>

int main(){
  int n,i,j,k,g;
  printf("number?:");
  scanf("%d", &n);
  g=n;

//upper body
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf(" ");
    }
    for(k=1;k<=(2*g-1);k++){
      printf("*");
      }
    g = g-1;
    printf("\n");
  }


  
//lower body 
  for(i=2;i<=n;i++){     
    for(j=n;j>=i;j--){
      printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
      printf("*");
    }
    // printf("%d", i);
    printf("\n");
  }
    
}
  