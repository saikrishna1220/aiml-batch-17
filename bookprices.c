//scenario based
#include <stdio.h>
void printArray(int arr[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("%9d\n", arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n, int order) {
	int i,j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((order == 1 && arr[i] < arr[j]) || (order == 2 && arr[i] > arr[j])) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
		int i;
    int prices[100];
    int n; 
    int order; 

    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter book prices:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Enter 1 for high to low or 2 for low to high: ");
    scanf("%d", &order);

    sortArray(prices, n, order);

    printArray(prices, n);

    return 0;
}



