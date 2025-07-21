#include<stdio.h>
#include<stdlib.h>
#define size 5
void insert(int);  
void deletequeue();  
void display();  
int Front=-1,Rear=-1,a[size],i;
void main()  
{  
	int choice,item1;   
	while(choice!=4)   
	{     
	    printf("*******Main Menu*******\n");  
	    printf("\n1.Insert:\n2.Delete:\n3.Display:\n4.Exit:\n");  
	    printf("\nEnter your choice: ");  
        scanf("%d",&choice);  
	    switch(choice)  
	    {  
	        case 1: 
			printf("Enter the inserted element: ");
			scanf("%d",&item1);
	        insert(item1);  
	        break;  
		    case 2:
			deletequeue();
		    break;
		    case 3:
			display();    
		    break;
			case 4:
			exit(0);  
		    default:   
	        printf("\nWrong choice\n");  
	    }  
    }  
}  
void insert(int item)
{
	if(Rear==size-1)
		printf("Queue is overflow");
	else if(Front==-1 && Rear==-1)
	{
		Front++;
		Rear++;
		a[Rear]=item;
	}
	else
	{
		Rear++;
		a[Rear]=item;	
	}
}
void deletequeue()
{
	if(Rear==-1 && Front==-1)
		printf("The queue is empty");
	else if(Front==Rear && Front>=0)
	{
		printf("The deleted element is: %d",a[Front]);
		Front=-1;
		Rear=-1;
	}
	else
	{
		printf("The deleted element is: %d",a[Front]);
		Front++;	
	}
}
void display()
{
	if(Rear==-1 && Front==-1)
		printf("The queue is empty");
	else
	{	
		printf("The queue is: \n");
		for(i=Front;i<=Rear;i++)
			printf("%d ",a[i]);
	}
}