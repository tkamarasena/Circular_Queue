# include <stdio.h>
# include <conio.h>
int main(){
	int i,max=3,front=-1;
	int rear=-1;
	char dis;
	//printf("Enter number of Value: ");
	//scanf("%d", &max);
	
	int num[max];
	
	printf("Do you need to enter a value: ");
	scanf(" %c", &dis);
	
	while(dis=='Y'){
		
		if(rear==max-1){
			printf("\nOverflow..\n");
			break;
		}
		
		
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
						
		}
		else{			
			rear++;			
					
		}		
		printf("\nEnter a number: ");
		scanf("%d", &num[rear]);
				
		
		printf("Do you need to enter a value: ");
		scanf(" %c", &dis);
				
	}
	
	printf("\nQueue:\t");
		
		for(i=0;i<max;i++){
			printf("%d\t", num[i]);
		}
	
	
	
	getch();
	return 0;
}
