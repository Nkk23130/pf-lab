#include<stdio.h>
int main(){
	int num;
	printf("enter num:" );
	scanf("%d", &num);
	for(int i=1; i<=num; i++){
		printf("%d:\t", i);
		for(int j=1; j<=10; j++){
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}
