#include<stdio.h>
void nhap(int arr[], int &n){
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(n<2||n>99);
	for(int i=0; i<n; i++){
		printf("Array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int ktrant(int n){
	if(n<2)
		return 0;
	else{
		for(int i=2;i<=n/2;i++)
			if(n%i==0)
				return 0;
		return 1;
	}
}
void insonguyento(int arr[], int n){
	printf("\nCac so nguyen to co trong mang la: \n");
	for(int i=0;i<n;i++)
		if(ktrant(arr[i]))
			printf("%d\n",arr[i]);
}
int main(){
	int arr[100];
	int n;
	nhap(arr,n);
	insonguyento(arr,n);
	return 0;
}
