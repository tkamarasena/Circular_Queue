# include <stdio.h>
# include <conio.h>
int main(){
	int num[5]={10,20,30,40,50};
	int i,max=5,front=0,rear=4;
	char dis;
	
	printf("Do you need to delete a value: ");
	scanf(" %c", &dis);
		
	while(dis=='Y'){		
		
		if(front==-1 || front>rear){
			printf("Underflow..");
			break;
		}
		else{
			printf("%d is deleted.\n", num[front]);
			front++;
		}		
		
		printf("Do you need to delete a value: ");
		scanf(" %c", &dis);
		
	}
	
	
	
	
	getch();
	return 0;
}
