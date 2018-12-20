#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
	system("color a");
	int lnum;
	printf("Welcome to the basic drawer.\nThis program can draw some arts line by line.\nFor drawing you need to enter line number and every lines' input number.\n>>>");
	scanf("%d", &lnum );
	printf("You have %d line(s).Now enter lines' input number.", lnum);
	int lines[lnum-1];
	int counter=0;
	
	for(int counter=0; counter < lnum;counter++){
		printf("\n%d. number =", counter+1);
		scanf("%d",&lines[counter]);
	}
	for(int c2 = 0; c2<lnum;c2++){
		
		for(int c3 = 0; c3<lines[c2];c3++){
			
			printf("-");
			
		}
		
		printf("\n");
		
	}
	system("pause");
	
}
