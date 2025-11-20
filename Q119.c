#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Assuming values are <= 100000
    static int freq[100001] = {0};

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("Repeated element: %d", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    // In case no element is repeated (though problem says one will be)
    printf("No repetition");
    return 0;
}
