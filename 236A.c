# include <stdio.h>
# include <string.h>

int main ()
{
  int count = 0;
  char userName[101];
  scanf("%s",userName);
  int nameLength = strlen(userName);
  for(int i = 0 ;i<nameLength;i++)
  {
    char currentLetter = userName[i];
    if(currentLetter == '$') {continue;}

    for(int j = i+1 ; j<nameLength; j++)
    {
      if(currentLetter == userName[j])
    {
      userName[j] = '$';
    }
    }
  }
  for(int k = 0 ;k<nameLength; k++)
  {
    if(userName[k] != '$')
    {
      count++;
    }
  }
  if(count%2 == 0)
  {
    printf("CHAT WITH HER!");
  }
  else{
    printf("IGNORE HIM!");
  }
  return 0;
}