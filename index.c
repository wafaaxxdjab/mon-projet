#include <stdio.h>
#include <stdlib.h>

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
