#include<stdio.h>
int main(){
	int num[5]={101,205,103,205,101};
	
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
		   if(num[i]==num[j]){
			printf("duplicate number is %d\n", num[i]);
		   }
	    }
    }
}
