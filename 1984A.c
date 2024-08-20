# include <stdio.h>
# include <stdlib.h>


int main()  {
    int count;
    scanf("%d",&count);

    for (int i =0; i<count; i++) {
      int arraySize;
      int possible = 0;
      int oneRed = 0;
      scanf("%d",&arraySize);

      int *array = malloc(arraySize * sizeof(int));
      char *charArray = malloc((arraySize + 1) * sizeof(char));

      for(int j =0;j<arraySize;j++) {
            scanf("%d",&array[j]);
        }

      int currentElement = array[0];

      for (int k = 1 ; k<arraySize;k++) {
            if (currentElement != array[k]) {
                possible = 1;
                break;

            }
        }

      if (possible == 0) {
          printf("NO\n");
        } else {
              for (int k = 0; k < arraySize; k++) {
                  if (k !=1 ) {
                      charArray[k] = 'R';
                  } else {
                    charArray[k]  ='B';
                  }

                }
                charArray[arraySize] = '\0';  
                printf("YES\n%s\n", charArray);
        }

        free(array);
        free(charArray);
    }

    return 0;
}