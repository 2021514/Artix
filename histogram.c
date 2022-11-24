


#include <stdio.h>
int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int plot[] = {34,56,78,32,46,70,92,45,32};
   for (int i=0; i<9; i++){
      printf("[%d]",arr[i]);
      for (int j =0; j<plot[i]; j++){
         printf("*");
      }
      printf("\n");
   }
}