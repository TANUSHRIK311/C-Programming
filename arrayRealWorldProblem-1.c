#include <stdio.h>

int main() {
    int T;
    int i;
    
    printf("Enter number of hours: ");
    scanf("%d", &T);

    int E[T], L[T];
    
    printf("Enter guests entering each hour:\n");
    for(i = 0; i < T; i++) {
        scanf("%d", &E[i]);
    }

    printf("Enter guests leaving each hour:\n");
    for(i = 0; i < T; i++) {
        scanf("%d", &L[i]);
    }

    int currentGuests = 0;
    int maxGuests = 0;

    for(i = 0; i < T; i++) {
        currentGuests = currentGuests + E[i] - L[i];
        
        if(currentGuests > maxGuests) {
            maxGuests = currentGuests;
        }
    }

    printf("Maximum number of guests on cruise: %d\n", maxGuests);

    return 0;
}
