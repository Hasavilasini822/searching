#include <stdio.h>
int main(){
    int i,j,n,a[n];
    printf("enter the range of the array:");
    scanf("%d",&n);
    
    printf("enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (a[i]==a[j])
                printf("The duplicate elements in the array %d\n",a[j]);
        }        
    }
            
    return 0;
}    
