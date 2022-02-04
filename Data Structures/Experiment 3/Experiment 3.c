#include <stdio.h>

void insertionsort(int a[], int n);

int main(){
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("Elements in sorted order:\t");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void insertionsort(int a[], int n){
	int i,j,index;
	for(i=0;i<n;i++){
		index = a[i];
		j = i;
		while((j>0) && (a[j-1] > index)){
			a[j] = a[j-1];
			j = j-1;
		}
		a[j] = index;
	}
}
