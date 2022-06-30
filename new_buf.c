#include <stdio.h>

int main()
{
  int arr[10];
  int flag;

  flag = rand() % 2;
  printf("Flag = %d\n", flag);
 
  for(int i=0 ; i<11 ; i++)
    arr[i] = 0;

  if(flag == 0)
    printf("A\n");
  else
    printf("B\n");

  return 0;
}
