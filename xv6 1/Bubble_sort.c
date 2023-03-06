#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


void bubble_sort(int arr[], int num_elements) 
{
  int temp;
  
  for (int  i= 0; i < num_elements - 1; i++) 
  {
      
    for (int j = 0; j < num_elements - i - 1; j++) 
    {

      if (arr[j] > arr[j + 1]) 
      {
        
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        
      }
    }
  }
  
  for(int k = 0; k<num_elements; k++)
  {
      printf(1,"%d ", arr[k]);
  }
  printf(1, "\n");
}


int main(int argc, char*argv[]) 
{
    int array_size = argc - 1;
    
    int array[array_size];
    for (int i = 1; i < array_size + 1; i++ )
    {
	int neg = 1;
	char* str = argv[i];
   	if (str[0] == '-')
    	{
    		neg = -1;
    		str++;
        }
        array[i-1] = atoi(str) * neg;
    }
   
    bubble_sort(array, array_size);
    exit();
}

