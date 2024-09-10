/* plan -- 
1.first input the array then sort it in descending order
2.the calculate the sum of the array and a black money
3.run a loop and subtract money from sum and add to blackmoney  */
# include <stdio.h>
# include <stdlib.h>

void sort(int arr[] , int length);
int solve(int arr[] , int length);

int main () {

    int length,i;
    scanf("%d",&length);

    int *arr = malloc(length * sizeof(int));

    for(i =0; i<length; i++) {
        scanf("%d",&arr[i]);
    }

    sort(arr,length);
    int answer = solve(arr,length);

    printf("%d",answer);
    free(arr);
    return 0;
}

void sort(int arr[] , int length) {

    int i,j,temp;

    for(i = 0; i<length-1; i++) {
        
        for(j = 0+i; j<length; j ++) {

            if(arr[i] < arr[j]) {
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int solve(int arr[] , int length) {
    int sum = 0,blackMoney = 0,i,j,counter = 0;

    for(i = 0; i<length;i++) {
        sum += arr[i]; 
    }

    for(j = 0; j<length;j++) {
        if(blackMoney>sum) {
            break;
            
        } else {
            blackMoney += arr[j];
            sum -= arr[j];
            counter++;
        }
    }
    return counter;
}
