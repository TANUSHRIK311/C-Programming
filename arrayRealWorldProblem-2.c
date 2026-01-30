#include <stdio.h>

int main() {
    int N, i;
    int count0 = 0, count1 = 0, count2 = 0;

    printf("Enter number of items: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter risk values (0, 1, or 2):\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] == 0)
            count0++;
        else if(arr[i] == 1)
            count1++;
        else if(arr[i] == 2)
            count2++;
    }

    // Printing sorted array
    for(i = 0; i < count0; i++)
        printf("0 ");

    for(i = 0; i < count1; i++)
        printf("1 ");

    for(i = 0; i < count2; i++)
        printf("2 ");

    return 0;
}
