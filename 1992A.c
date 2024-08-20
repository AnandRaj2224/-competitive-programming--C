/*my main foucs was to get the  solution to the immidiate problem now finding the key to the soultion which was very easy ,u just had to know the trick.
waasted too much time on this problem ---- a math trick involved.*/


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