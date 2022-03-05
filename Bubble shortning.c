#include <stdio.h>
int main ()
{
    int arr[10],i,N,j,temp; 
    printf("Enter the number of elements present in the array: ");
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);


    }

    for (i=0;i<N;i++)
    {
        for (j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
              { temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
        }
        }
        
    }
    for(j=0;j<N;j++)
    {
        printf("%d ",arr[j]);
    }
}