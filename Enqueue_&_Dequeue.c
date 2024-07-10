# include <stdio.h>
# include <conio.h>
void enqueue();
void dequeue();


int dis,x;
char num[5];
int i,max=5,front=-1,rear=-1;

int main(){
	
		while(dis!=3){
		
		printf("\t =====menu=====\n");
		printf("\t| 1.Enqueue    |\n"  );
		printf("\t| 2.Dequeue    |\n"  );
		printf("\t| 3.Exit       |\n"  );
		printf("\t ==============\n");
		printf("Enter Your Decision: ");
		scanf("%d", &dis);
		
	
		switch(dis){
			case 1:
				enqueue();				
				break;
				
				case 2:
					dequeue();
					break;
					
					case 3:
						printf("Exited...");
						break;
						
						default: printf("Invalid selection..");
						break;
					
		}
		
	}
	
	
	
	getch();
	return 0;
}



void enqueue(){
		
		if(rear==max-1){
			printf("\nOverflow..\n");
			
		}
		else{
			printf("\nEnter a number: ");
			scanf("%d", &x);
			
			
			if(front==-1 && rear==-1){
				front=0;
				rear=0;
						
			}
			else{			
				rear++;			
					
			}
					
			num[rear]=x;
			
		}
		
	
}



void dequeue(){
	if(front==-1 || front>rear){
			printf("Underflow..\n");
			
		}
		else{
			printf("%d is deleted.\n", num[front]);
			front++;
		}		
		
		
}




