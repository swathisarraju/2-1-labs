#include<stdio.h>
void bubble_sort(int [],int );
int main(){
  int a[8],n,i;
  printf("enter the number of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  bubble_sort(a,n);
  printf("after sorting:");
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
  return 0;
}
void bubble_sort(int a[8],int n){
  int i,j,temp;
  for (i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
