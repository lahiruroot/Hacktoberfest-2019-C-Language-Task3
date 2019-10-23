#include <stdio.h>


    int main()
{
  int Array[50], i, Number;
 
  printf("\nPlease Enter Number of elements in an array  :  ");
  scanf("%d", &Number);
 
  printf("\nPlease Enter %d elements of an Array \n", Number);
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }     
 
  printf("\n Elemenst in this Array are :\n");
  for (i = 0; i < Number; i++)
  {
 	printf("%d\t", Array[i]);
  }     
 
  return 0;
}
    

