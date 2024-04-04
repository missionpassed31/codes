#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 0; i < n; i++) {

        for (j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
        }
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
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Unsorted Array: ");
    bubbleSort(arr, n);
    printf("Sorted Array: ");
    printArray(arr, n);
 
    return 0;
}

