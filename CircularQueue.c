# include <stdio.h>
# include <conio.h>

void enqueue();
void dequeue();


int i,x,front=-1,rear=-1;
int max=5,num[5];
char dis;

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
						break;
						
						default: printf("\nInvalid Selection..\n");
		}
		
		
		
	}	
		
	
	getch();
	return 0;
}

void enqueue(){

	
		
		if((front==0 && rear==max-1) || front==rear+1){
			printf("Overflow..\n");
			
			printf("\n\n");
			
			for(i=0;i<5;i++){
				printf("%d\t", num[i]);
			}
			
			
		}
		else{
			
			printf("\nEnter a number: ");
			scanf("%d", &x);
			
			if(front==-1){
			front=0;
			rear=0;
			}
		
			else if(rear==max-1 && front!=0){
			rear=0;
			}
			else{			
			
				rear++;
		}
		
			
		
		}
		
		
		printf("\nfront=%d\trear=%d\n", front,rear);
		num[rear]=x;
		
		
	
}

void dequeue(){
	
		if(front<=-1 && rear<=-1){
			printf("\nUnderflow..\n");
		}
		else{
			
			printf("\nfront=%d\trear=%d\n", front,rear);
			printf("\n%d is deleted..\n", num[front]);
			
			if(front==max-1 && rear!=max-1){
			front=0;
			}
			else if(front==rear){
				front=-1;
				rear=-1;
			}
			else{
				front++;
			}
			
			
		}
		
		
		
	
}	
