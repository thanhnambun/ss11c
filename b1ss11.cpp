#include<stdio.h>
#include<stdlib.h> 
int main(){
//nhap gia tri mang
	int n;
	printf("nhap so phan tu mang\n");
	scanf("%d",&n); 
	int number[n];
	int choice;
	printf("nhap gia tri cac mang \n");
	for(int i=0; i<n; i++){
		printf("number[%d]\n",i);
		scanf("%d",&number[i]); 
		} 
	do{ 
//in ra menu
	printf("\n******menu****\n");
	printf("1.in gia tri cac mang \n"); 
	printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
	printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
	printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
	printf("5. thoat\n");
	printf("lua chon cua ban \n");
	scanf("%d",&choice); 
	switch(choice){
		case 1:
//in gia tri cac mang 		
		printf("gia tri cac phan tu trong mang la \n");
		for(int i=0; i<n; i++){
			printf("%d\n",number[i]); 
			} 
		break;
		case 2:
		for(int i=1; i<n ;i++){
			int key=number[i];
			int j=i-1;
			while(j>=0&&number[j]<key){
				number[j+1]=number[j];
				j-=1; 
				} 
				number[j+1]=key; 
			}
		printf("mang sau khi sap xep la \n");
		for(int i=0; i<n; i++){
			printf("%d\t",number[i]);	
			}	 
		break;
		case 3:
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(number[j]<number[i]){
				int temp = number[i];
				number[i] = number[j];
				number[j] = temp;	
				} 
			} 
		}
		for(int i=0; i<n; i++){
			printf("%d",number[i]); 
		} 
		break;
		case 4:
		for(int i=0; i<n; i++){
			for(int j=0; j<n-i-1;j++){
				if(number[j+1]>number[j]){
				int temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;	
				}
			} 
		} for(int i=0; i<n; i++){
			printf("%d",number[i]); 
		}
		case 5:
		exit(0); 
		break;
		default :
		printf("ban da nhap sai \n");
}
}while(1==1); 
}
