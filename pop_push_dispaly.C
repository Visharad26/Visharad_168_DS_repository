#include<stdio.h>
#include<stdlib.h>
int n,a,s=-1,b,i;
int* nausheen;
int push();
int pop();
int view();
int main()
{

	printf("enter the size of stack\n");
	scanf("%d",&n);
	nausheen=(int*)malloc(n*sizeof(int));
	while (1)
	{
		printf("\nenter 1 to push");
		printf("\nenter 2 to pop");
		printf("\nenter 3 to view");
		printf("\nenter 4 to exit");
		printf("\nenter the choice: ");
		scanf("%d",&a);
		switch (a)
		{
			case 1: push();
			        break;
			case 2: pop();
			        break;
			case 3: view();
			        break;
		    case 4: exit(0);
		    default: printf("\n\n enter the right choice\n\n");
     	}
	}
}
int push()
{
	if(s==n)
	printf("overflow\n");
	else
	{
	printf("enter the element\n");
	scanf("%d",&b);
	s=s+1;
	nausheen[s]=b;
	}
	return 0;


}
int pop()
{
	if(s==-1)
	printf("underflow\n");
	else
	{
   		printf("element %d popped out from stack\n",nausheen[s]);
   		s=s-1;

	}
	return 0;

}
int view()
{
	if(s==-1)
	printf("empty\n");
	else
	{
		printf("elements in the stack are\n");

		for(i=s;i>=0;i--)
		{

			printf("%d\n",nausheen[i]);
		}
	}
	return 0;
}
