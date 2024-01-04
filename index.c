#include <stdio.h>
#include <stdlib.h>

void tri_bulle(int arr[],int taille){
    int i,j,X,N;
    for(i=0; i <N-1; i++){
         for(j=0; j <N-i-1; j++){
          if(arr[j]>arr[j+1]){
            X=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=X;
          }
      }
    }
}
int main()
{   
    int T[100];
    int i,n;
    
    printf("donner la taille de tableau");
    scanf("%d,&n");
    printf("donner les elements de tabbleau");
    for(i=0; i<=n; i++){
       scanf("%d",T[i]);
    }
    return 0;

}
