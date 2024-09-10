# include <stdio.h>

int main () {

    int x,count =0;
    scanf("%d",&x);

    while(x!=0) {
        if(x >= 5) {
            x-=5;
            count++;
        }
        else if(x>=4) {
            x-=4;
            count++;
        }
         else if(x>=3) {
            x-=3;
            count++;
        }
         else if(x>=2) {
            x-=2;
            count++;
        }
         else if(x>=1) {
            x-=1;
            count++;
        }

    }
    printf("%d",count);
    return 0;

}