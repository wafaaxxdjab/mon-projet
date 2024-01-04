#include <stdio.h>
#include <stdlib.h>

void tri_bulle(int arr[],int n){
    int i,j,X;
    for(i=0; i <n-1; i++){
       for(j=0; j <n-i-1; j++){
          if(arr[j]> arr[j+1]){
                 X = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = X;
            }
           
        }
    }
}
int main()
{   
    int i,N;
    int T[100];

    printf("donner la taille de tableau :\n");
    scanf("%d",&N);

    printf("donner les elements de tabbleau :\n");
    for(i=0; i<=N; i++){
       scanf("%d",&T[i]);
    }

    tri_bulle(T,N);
    printf("Tableau trié est : \n");
    for(i=0; i< N; i++){
        printf("%d",T[i]);
    }

    printf("\n");

    return 0;

}
