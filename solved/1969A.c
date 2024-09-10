//edit ---1
/* initial thought --- input the array then srt it in acending order via buble sort then check if  
arr[0]+1 = arr[1]  and arr[1]+1 = arr[2] example - 1,2,3. then we get 2 people for party with the min.no of invites send */ 

//edit ---2
/*now that i need to chatgpt to understand the problem the best friend of arr[1] = 3 , so 3's best friend is 1 and the indexing of friend is from 1 not zero*/

//edit --3
/*COULD'nt  Solve THE QUESTION STILL saw the editorial ,but need to see gpt code to understand the solution */

# include <stdio.h>
# include <stdlib.h>

int main () {

    int testCases,temp;
    scanf("%d",&testCases);

    for(int i = 0; i<testCases; i++) {

        int arrLen,count = 0,only2 = 0;
        scanf("%d",&arrLen);
        int *arr = malloc((arrLen+1) * sizeof(int));
        arr[0] = 0;

        for(int j = 1; j<=arrLen; j++) {
            scanf("%d",&arr[j]);
        }

        for(int k = 1; k<arrLen; k++)  {
                if(k == arr[arr[k]]) {
                    only2 = 1;
                    break;
                }
            }

        if(only2 != 0) {
        printf("2\n");
        } else { 
        printf("3\n");
        }
        free(arr);
    }
    return 0;
}