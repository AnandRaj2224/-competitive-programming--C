# include <stdio.h>

int main ()
{
  int count;
  char string[6];
  char answer;
  scanf("%d",&count);
  getchar();
  for(int i =0;i<count;i++)
  {
    int countA =0;
    int countB =0;
    scanf("%s",string);
    for(int j = 0;j<5;j++)
    {
      if(string[j] == 'A')
      {
        countA++;
      }
      else 
      {
        countB++;
      }
    }
    answer = countA >countB ? 'A':'B';
    printf("%c\n",answer);
  }
  return 0 ;
}