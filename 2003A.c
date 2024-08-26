# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main () {

    int testCases;
    scanf("%d",&testCases);

    for(int i = 0; i<testCases; i++) {

        int sLen;
        scanf("%d",&sLen);

        char *s = malloc( (sLen+1) * sizeof(char) );
        scanf("%s",s);

        if(s[0] != s[sLen-1] && sLen >= 2 ) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        free(s);
    }
    return 0;
}