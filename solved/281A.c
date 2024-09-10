/* take the string as input if the first letter is cap do nothing else change it to cap by doing -32*/

# include <stdio.h>


int main () {

    char s[1000];
    scanf("%s",s);

    if(s[0] > 90) {

        s[0] = s[0]-32;
    }
    printf("%s",s);
    return 0;
}