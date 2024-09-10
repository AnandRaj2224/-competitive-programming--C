# include <stdio.h>
# include <stdlib.h>

int main () {

    int testCases;
    scanf("%d",&testCases);

    for(int i =0 ; i<testCases; i++) {
        int arrSize,score = 0,temp;
        scanf("%d",&arrSize);

        int *arr =  malloc((2*arrSize) * sizeof(int));

        for(int j = 0; j<2*arrSize; j++) {
            scanf("%d",&arr[j]);
        }

        for(int k = 0; k<2*arrSize-1; k++) {
            for(int l = 0;l<2*arrSize-1;l++) {
                if(arr[l] < arr[l+1]) {
                    temp = arr[l+1];
                    arr[l+1] = arr[l];
                    arr[l] = temp;
                }
            }
        }
        for ( int m = 1; m < 2*arrSize; m+=2)
        {
            score += arr[m];
        }
        
        printf("%d\n",score);
        free(arr);
    }
    return 0;
}