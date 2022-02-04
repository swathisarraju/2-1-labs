#include<stdio.h>
void bubble_sort(int [], int);
int main() {
	int a[20], n, i;
	printf("Enter the value of n:");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	bubble_sort(a, n);
	printf("Elements in sorted order:");
	for(i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
void bubble_sort(int a[], int n){
	int i, j, temp;
	for(i = 0; i < n-i; i++) {
		for(j = 0; j < n - 1 -i; j++){
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

