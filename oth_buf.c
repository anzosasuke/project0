#include <stdio.h>

int func(int N)
{
  int arr[10];
  int flag;

  flag = rand() % 2;
  printf("Flag = %d\n", flag);
 
  for(int i=0 ; i<N ; i++)
    arr[i] = 0;

  if(flag == 0)
    printf("A\n");
  else
    printf("B\n");

  return 0;
}
 
int main(int argc, char *argv[])
{
  int val = atoi(argv[1]);
  if(val > 10)
    func(10);
  else
    func(10);
}
