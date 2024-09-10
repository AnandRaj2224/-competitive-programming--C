#include <stdio.h>
 
int main (void)
{
    int testcases, noOfBooks;
 
    scanf("%d", &testcases);
 
    while (testcases--)
    {
        int max = -1, input;
 
        scanf("%d", &noOfBooks);
 
        for (int i = 0; i < noOfBooks; i++)
        {
            scanf("%d", &input);
 
            if (input > max && i != noOfBooks - 1)
            {
                max = input;
            }
        }
 
        printf("%d\n", max + input);
    }
 
    return 0;
}