#include<stdio.h>

int main(){
	int num[3][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int rowsum[3]={0};
	int columnsum[4]={0};
	int max=0;
	int row;
	int column;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d\t", num[i][j]);
			rowsum[i]+=num[i][j];
			columnsum[j]+=num[i][j];
			if(num[i][j]>max){
				max=num[i][j];
				row=i;
				column=j;
			}
			
		}
		printf("\n");
		
		
	}
	printf("max number is %d at index %d %d \n", max, row, column);
	
	for(int i=0; i<3; i++){
		printf("your matrix row sum is %d\n", rowsum[i]);
    }
    for(int j=0; j<4; j++){
    	printf("your matrix column sum is:%d\n", columnsum[j]);
	}
	
}
