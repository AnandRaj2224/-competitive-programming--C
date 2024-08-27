/* plan -- first input the string and compare the even elements because odd element ar "+" and sort in accending order */

# include <stdio.h>
# include <string.h>


void solve(char s[] , int slen);

int main () {

    char s[101];
    scanf("%s",s);
    int slen = strlen(s);

    solve(s,slen);

    printf("%s",s);
    return 0;
}

void solve(char s[] , int slen) {

    int i,j,temp;

    for(i = 0; i<slen-1; i++) {
        
        for(j = 0+i; j<slen; j +=2) {

            if(s[i] > s[j]) {
                
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}