#include <stdio.h>
#include <stdlib.h>
void read_alloc(int **arr, int *n)
{
    printf("Introduce the array size:");
    scanf("%d",n);
    *arr = (int *) malloc( (*n) * sizeof(int));
    printf("Introduce the array:");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d",&(*arr)[i]);
    }
}
int binary_search(int *arr,int left,int right)
{
    int mid = (left + right)/2;
    if(arr[mid] == 1 && arr[mid - 1] == 0)
    {
        return mid;
    }
    else
        {
            if (arr[mid] == 0)
                return binary_search(arr,mid + 1, right);
            else
                return binary_search(arr,left,mid - 1);
            
        }
}
int main()
{
    int n, *arr;
    read_alloc(&arr,&n);
    if(arr[0] == 1)
        printf("The sum is %d.",n);
    else
        if (arr[n - 1] == 0)
        {
            printf("The sum is 0.");
        }
    else
        printf("The sum is: %d.",n - binary_search(arr,0,n - 1));
        
    free(arr);
return 0;

}