#include<stdio.h>
#include<stdlib.h>

void shellsort(int arr[],int len)
{
  for(int gap=len/2;gap>0;gap/=2)
  {
    for(int i=gap;i<len;i++)
    {
      for(int j=i-gap;j>=0;j-=gap)
      { 
        if(arr[j]>arr[j+gap])
        {
          int temp=arr[j];
          arr[j]=arr[j+gap];
          arr[j+gap]=temp;
        }
      }
    }
  }
}

void printf_array(int arr[],int len)
{
  for(int i=0;i<len;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[]={2,4,8,0,5,7,1,3,9};
  int len=sizeof(arr)/sizeof(arr[0]);

  printf("befor: \n");
  printf_array(arr,len);

  shellsort(arr,len);

  printf("after :\n");
  printf_array(arr,len);

  system("pause");
  return 0;
}