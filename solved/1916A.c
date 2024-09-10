# include <stdio.h>
# include <stdlib.h>

int main () {
    int product  = 2023;
    int factors[6] = {1,7,17,119,289,2023};
    int testcases;

    scanf("%d",&testcases);
   for(int c = 0 ;c<testcases;c++) {
            int b,k,found = 0,missingNumber = 1;
            long long int checkProduct = 1;
        scanf("%d%d",&b,&k);

        int *arr = malloc(b * sizeof(int));
        for(int i =0;i<b;i++) {
            scanf("%d",&arr[i]);
            checkProduct *= arr[i];
        }

        for(int j = 0; j<6;j++) {
            if(checkProduct == factors[j]) {
                    printf("YES\n");
                    missingNumber = 2023 / checkProduct;
                    printf("%d",missingNumber);
                    for(int z = 0; z<k-1;z++) {
                        printf(" 1");
                    }
                    printf("\n");
                    found = 1;
                    break;
            } 
        }
        if(found != 1) {
            printf("NO\n");
        }
        free(arr);
   }

    return 0;
}