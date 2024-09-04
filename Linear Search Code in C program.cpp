// Linear Search Code in C program

#include<stdio.h>
void LS(int arr[], int length,int item)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==item)
        {
            printf("The element is found in the index of %d",i);
            return;
        }
    }
}
int main()
{
    int arr[]={22,23,35,67,10, 22, 24,44};
    int length= sizeof(arr)/sizeof(arr[1]);
    int item =67;
    
    LS(arr, length,item);
    
    return 0;
    
}
