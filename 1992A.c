# include <stdio.h>

int main()
{
  int count,a,b,c;
  scanf("%d",&count);
  for(int i = 0;i<count;i++)
  {
    scanf("%d%d%d",&a,&b,&c);
    for(int j =0 ;j<5;j++)
    {
      if(a<=b && a<=c)
      {
        a++;
      }
      else if(b<=a && b<=c)
      {
        b++;
      }
      else
      {
        c++;
      }
    }
    printf("%d\n",a*b*c);
  }
  return 0;
}