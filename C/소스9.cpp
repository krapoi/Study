#include <stdio.h>



int main() {

	int arr[30];
	int i = 0;
	while (1) {
		scanf("%d", &arr[i]);
		arr[i]++;
		i++;
		if (i == -99) {
			break;
		}
	}
}