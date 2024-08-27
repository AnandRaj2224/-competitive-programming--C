/*thing i did 
-- used a lib function to concat the characters and number[need to learn how it happens under the hood]
-- condition setting of length - be super clear or error may happen [length<10-X length<=10-✔]*/

# include <stdio.h>
# include <string.h>

int main()
{
 int count;
 char word[100];
 char firstLetter,lastLetter;
 char newWord[100];
 int length;
 scanf("%d",&count);
 getchar();
 for (int i = 0; i < count; i++)
  {  
    scanf("%s",word);
    length = strlen(word);
    int lengthTOUse = length-2;
    if (length<=10)
    {
      printf("%s\n",word);
    }
    else 
    {
      firstLetter = word[0];
      lastLetter = word[length-1];
      snprintf(newWord, sizeof(newWord), "%c%d%c", firstLetter, lengthTOUse, lastLetter);
      printf("%s\n",newWord);
    }
  }
 return 0;
}