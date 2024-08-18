# include <stdio.h>
# include <string.h>

int main ()
{
  int count;
  int x = 0;
  char operation[4];
  scanf("%d",&count);
  getchar();
  for (int i = 0; i < count; i++)
  {
    scanf("%s",operation);
    if(operation[0] == '+' && operation[1] == '+')
    {
        x++;
    }
    else if(operation[1] == '+' && operation[2] == '+')
     {
        x++;
    }
    else
    {
      x--;
    }
  }
  printf("%d",x);
  return 0;
}