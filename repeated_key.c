#include <stdio.h>
int main() {
	int arr[100], range, i, key, count = 0;
	printf("Enter the range of the array:");
	scanf("%d", &range);

	printf("enter the array elements:");
	for (i = 0; i < range; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the key:");
	scanf("%d", &key);

	for (i = 0; i < range; i++) {
		if (arr[i] == key) {
			count++;
		}
	}
	printf("The required key %d is repeated %d times.", key, count);
	return 0;
}