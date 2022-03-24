#include <stdio.h>
#include <stdlib.h>
void read_alloc(int **arr,int *N,int *K)
{
    printf("Insert the size of the array:");
    scanf("%d",N);
    printf("Insert the searched number:");   
    scanf("%d",K);
    *arr = (int *)malloc((*N) * sizeof(int));
    printf("Insert the array:");   
    for (int i = 0; i < *N; i++)
    {
        scanf("%d",&(*arr)[i]);
    }
    
}
int Binary_Search(int *arr,int left,int right, int K)
{
    
    if(left > right)
    {
        return -1;
    }
    else
        {
            int mid = (left + right)/2;
            if(arr[mid] == K)
            return mid;
            else
                {
                    if(K > arr[mid])
                        return Binary_Search(arr,mid + 1, right, K);
                    else
                        return Binary_Search(arr,left, mid - 1, K);
                }
        }
    
}
int main()
{
    int N,K,*arr;
    read_alloc(&arr,&N,&K);
    printf("The searched number is located at the position: %d\n",Binary_Search(arr,0,N-1,K));
    free(arr);

return 0;

}