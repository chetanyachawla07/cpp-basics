#include <stdio.h>
int bubble_sort(int arr[], int size)  
{       
    for(int i=0;i<=size,i++)
    {
        for(int j=0;i<=size;j++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                int arr[i]= arr[i+1];
                int arr[i+1] = temp;
            }
        }
    }
    return arr[size];
}


int main()
{
    int ar[5]={10 ,2, 12, 3 ,4}
    int size = sizeof(data) / sizeof(data[0]);

    bubble_sort(ar, size);
  
     printf("Sorted Array in Ascending Order:\n");
    for(int i=0;i<=size;i++)
    {
        printf("%d",ar[i]);
    }
    return 0;
}