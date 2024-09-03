# include <stdio.h>
 
 int main () {

    int t;
    scanf("%d",&t);

    while( t != 0) {
        
        int a,b,sum = 0;
        scanf("%d%d",&a,&b);

        printf("%d\n",( b - a));
        t--;
    }
    return 0;
 }