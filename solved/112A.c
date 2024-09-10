// need to learn the underlying implementation of 1.toupper and 2.string length.

# include <stdio.h>
# include <ctype.h>
# include <string.h>

int main () {

  char s1[101] ,s2[101];
  scanf("%s%s",s1,s2);

  int len = strlen(s1);
  int count = 0;
  for(int i = 0; i< len; i++) {

    s1[i] = toupper(s1[i]);
    s2[i] = toupper(s2[i]);
  }

  for(int j = 0; j<len; j++) {

    if(s1[j] < s2[j]) {
      printf("-1");
      count++;
      break;
    }
    else if (s1[j] > s2[j]) {
      printf("1");
      count++;
      break;
    }
  }
  if(count == 0) {
    printf("0");
  }
  return 0;
}