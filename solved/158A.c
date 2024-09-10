/* the plan --- first input stuff then check if they are greater and k and are also +ve(greater than 0) X
needed----- to check not k but arr[k] is > or not rhen whole array and the array is indecx from 1 not zero.
*/

# include <stdio.h>
# include <stdlib.h>

int main () {

    int n,k,count = 0;

    scanf("%d %d",&n,&k);

    int *arr = malloc((n+1) * sizeof(int));
    arr[0] = 0;
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int j = 1;j<=n;j++) {
        if(arr[j] >= arr[k] && arr[j] > 0) {
            count++;
        }
    }
    printf("%d",count);
    free(arr);
    return 0;
}