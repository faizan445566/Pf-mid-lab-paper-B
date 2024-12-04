#include<stdio.h>
#include<math.h>
int main(){
	int choice;
  int income,expenses,balance,budgetincome,budgetexpenses;
	do{
	printf("\n1.Add Income\n2.Add Expenses\n3.View Balance\n4.Exit");
	printf("\nEnter what you want to do:");
	scanf("%d",&choice);
	switch(choice){
		case 1:

			printf("\nEnter your income to add: ");
			scanf("%d",&income);
			if(income<=0){
				printf("\nEnter Positive Number");
				continue;
			}
			else{
			budgetincome+=income;}
			break;
			case 2:
				printf("Enter your expenses: ");
				scanf("%d",&expenses);
				if(expenses<=0){
					printf("\nEnter the value in Positve number");
				continue;}
				else{
					budgetexpenses+=expenses;
			}
					
			break;
			case 3:
				balance=budgetincome-budgetexpenses;
				printf("\nyour balance is %d",balance);
				
			
	}
	
}while(choice!=4);
return 0;
	
}
