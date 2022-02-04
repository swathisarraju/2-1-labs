#include<stdio.h>

int binary_search(int[],int ,int ,int , int );
int main(){
  int i,key,n,pos;
  printf("Enter the value of n:");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter the element to be searched:");
  scanf("%d",&key);
  pos=binary_search(a,n,key,0,n-1);
  if(pos>=0){
    printf("element is at the position %d",pos);
  }
  else{
    printf("not in list\n");
  }
  return 0;
}

int binary_search(int a[],int n, int key,int l,int h){
  int i,mid;
  while(l<=h){
    mid=(l+h)/2;
    if(a[mid]==key){
      return mid;
    }
    else if(key>a[mid]){
      l=mid+1;
    }
    else{
      h=mid-1;
    }
  }
  return -1;
}
