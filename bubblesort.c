#include <stdio.h>

int main(){
  int array[] = {2,5,7,1,8,9};
    
  int arraySize = sizeof(array) / sizeof(array[0]);
  printf("Size of array: %d\n", arraySize);
  
  // out loop scans the array
  // inner loop swaps 

  for(int i = 0; i < arraySize; i++){
    for(int j = 0; j < (arraySize - 1); j++){
      if(array[j] > array[j + 1]){  
        int temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp; 
      }
    }
  }
      
  for(int i = 0; i < arraySize; i++){
    printf("%d\t", array[i]);
  }
  printf("\n");
  
  return(0);
}
