#include<stdio.h>
#include<stdlib.h>
#define max_size 50

void push();
void pop();
void peek();
void display();
int a[max_size];
int top=-1;
void main()
{
	int opt;
	while(1)
	{
		printf("\nEnter the choice:\n1.Push\n2.Pop\n3.peek\n4.display\n5.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			case 5: exit(0);
                	break;
			default:printf("Invalid Input");
					break;
		}
	}
}
void push()
{
	int val,i;
	if(top==max_size-1)
		printf("The stack is full\n");
	else
	{	
		top+=1;
		printf("\nEnter the element to be inserted: ");
		scanf("%d",&val);
		a[top]=val;
		
	}
}
void pop()
{
	int item;
	if(top==-1)
		printf("\nThe stack is empty\n");
	else
	{
		item=a[top];
		printf("\nDeleted element: %d\n",item);
		top--;
	}
}
void display()
{
	int i,element;
	if(top==-1)
		printf("\nThe stack is empty\n");
	else
	{
		for(i=top;i>-1;i--)
		{
			element=a[i];
			printf("\n%d",element);
		}
	}
}
void peek()
{
	if(top==-1)
		printf("\nthe stack is empty");
	else
		printf("\nthe topmost element is %d",a[top]);
}

