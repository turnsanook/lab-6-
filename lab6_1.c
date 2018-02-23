#include <stdio.h>

int main(){
	int seat[10][10],i,j,r,c;
	
	printf("				          PSU Theather\n");
	printf("	    1	    2	    3	   4	    5	    6	    7	    8	    9	    10");
	for(i = 0;i<10;i++){
		printf("\n	+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+\n");
		printf("%d",i+1);
		for(j=0;j<=10;j++){
			printf("	:");
			seat[i][j]=0;
		}
	}
	printf("\n	+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+\n");
	while(1){
		printf("Enter seat [row cols](***Stop Enter 0 0) : ");
		scanf("%d %d",&r,&c);
		if(r==0&&c==0)
			break;
		if(seat[r-1][c-1]==1){
			printf("RESERVED… please book another seat.\n");
		}
		else if(r>10&&c>10)
			printf("NO SEAT!!!\n");
		else if(r>=0&&c>=0){
			seat[r-1][c-1]=1;
		}
		printf("				          PSU Theather\n");
		printf("	    1	    2	    3	   4	    5	    6	    7	    8	    9	    10");
		for(i = 0;i<10;i++){
			printf("\n	+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+\n");
			printf("%d",i+1);
			for(j=0;j<=10;j++){
				printf("	:");
				if(seat[i][j]==1)
					printf("   *");
			}
		}
		printf("\n	+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+\n");
	}
	
	
}
