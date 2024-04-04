#include <stdio.h>

void binarySearch(int arr[], int n, int a)
{
    int s=0,e = n;
    while (s<e){
        int m = (s+e)/2;
        if(arr[m]==a){
            printf("%d is found at %d",a,m);
            break;
        }else if(arr[m]>a){
            e = m;
        }else{
            s = m;
        }
    }
    
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[100];
    int n,a;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the number to be searched: ");
    scanf("%d",&a);
    printArray(arr,n);
    binarySearch(arr,n,a);
    
    return 0;
}


