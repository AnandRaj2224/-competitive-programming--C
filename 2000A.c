# include <stdio.h>

int main () {
    
    int count,lastDigit,number;
    scanf("%d",&count);

    for(int i = 0;i<count;i++) {
        int lCounter = 0;

        scanf("%d",&number);

        while(number >99) {
            lastDigit = number%10;
            number/=10;
            lCounter++;
        }
        if( lastDigit != 0  && lCounter >=2 ) {
            printf("YES\n");
        }
        else if (lastDigit != 0  && lastDigit !=1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}