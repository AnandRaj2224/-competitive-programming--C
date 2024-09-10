# include <stdio.h>

int main () {

    int a,b,count =0;
    scanf("%d%d",&a,&b);
    if( a == b) {

    printf("1");
    } else {

    while(b>=a) {

      a *=3;
      b *=2;
      count ++;
    }
    printf("%d",count);
  }
    return 0;
}