# include <stdio.h>
# include <string.h>
# include <ctype.h>

void string_ToUpperCase(char arr[] , int len );
void string_ToLowerCase(char arr[] , int len );

int main () {

    char s[101];
    int counterUpper = 0,counterLower = 0;

    fgets(s,101,stdin);
    int len = strlen(s);

    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    for(int i = 0; i<len; i++) {

      if( islower(s[i]) ) {

        counterLower ++;

      } else if(isupper(s[i])) {

        counterUpper ++;
      }
    }

      if(counterLower < counterUpper) {

        string_ToUpperCase(s , len);

      } else {

        string_ToLowerCase(s, len);
      }
        
      printf("%s",s);
      return 0;
}

 void string_ToUpperCase(char arr[], int len) {

    for(int i = 0; i< len ;i++) {

        arr[i] = toupper(arr[i]);
    }
}

 void string_ToLowerCase(char arr[], int len) {

    for(int i = 0; i< len ;i++) {

        arr[i] = tolower(arr[i]);
    }
}