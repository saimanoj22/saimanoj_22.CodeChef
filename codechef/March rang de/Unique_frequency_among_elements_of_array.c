
#include <stdio.h>

int main()
{   
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int arr[10000], freq[10000];
        int size, i, j, count;
        scanf("%d", &size);
        for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
            freq[i] = -1;
        }
        for(i=0; i<size; i++)
        {
            count = 1;
            for(j=i+1; j<size; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    /* Make sure not to count frequency of same element again */
                    freq[j] = 0;
                }
            }
            /* If frequency of current element is not counted */
            if(freq[i] != 0)
            {
                freq[i] = count;
            }
        }
        /* Print frequency of each element */
        int flag = 0;
        for (int i = 0 ;i < size-1; i++) {
            for (int j = i+1; j < size; j++) {
                if (freq[i] == freq[j]) {
                    if(freq[i] == 0)
                        ;
                    else{
                        flag++;
                    }
                }
            }
        }
        if(flag != 0){
            printf("No\n");
        }
        else if(flag == 0){
            printf("Yes\n");
        }
        /*//check
        printf("nFrequency of all elements of array :");
        for(i=0; i<size; i++)
        {
            printf("%d", freq[i]);
        }
        //check*/
    }
    return 0;
}