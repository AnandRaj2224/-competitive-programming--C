# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main() {

    int testcases;
    scanf("%d",&testcases);
    
    for(int i = 0;i<testcases;i++) {

        int a,b;
        scanf("%d%d",&a,&b);

        if(a % 2 == 0 && b % 2 == 0) {
            printf("YES\n");
        }
        else if( b % 2 != 0 && a % 2 == 0 && a != 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}