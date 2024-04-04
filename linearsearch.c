#include <stdio.h>

void linearSearch(int arr[], int n, int a)
{
    for (int i = 0; i < n; i++) {
    if (arr[i]==a){
        printf("%d is at %d index \n",a,i);
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
    linearSearch(arr,n,a);
    
    return 0;
}


