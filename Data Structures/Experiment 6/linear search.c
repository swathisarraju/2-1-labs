#include<stdio.h>
int linear_search(int [], int, int);
int main() {
	int a[10], key, n, i, p;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    printf("Enter the element to be searched: ");
	scanf("%d", &key);
	p = linear_search(a, key, n);
	if(p > 0){
		printf("Element is at the position %d\n", p);
	}
	else{
	printf("Element is not found");
	}
	return 0;
}
int linear_search(int a[], int key, int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] == key){
			return i + 1;
		}
		
	}
	return -1;
}

