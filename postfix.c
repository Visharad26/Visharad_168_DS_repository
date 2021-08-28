//Author:Nausheen Koul                                                             
// Purpose ;  // Postfix Evaluatation
          
	#include<stdio.h> 
	
	int stack[20];  
	int top = -1;  
	int n1,n2,n3,num; // Global Declratation
	void push(int x)
	{      // Pre-increment 
	    top=top+1;
	    stack[top]=x;
	}
	
	int pop()
{
    return stack[top--]; 

	int main()
	{
	    char exp[20];
	    char *e;
	    printf("Welcome to Postfix Operations");
		printf("  Only enter in this e.g: abc+-*/  ")	;
	    printf("Enter the expression in the postfix :: ");
	    scanf("%s",exp);
	    e = exp;
	    while(*e)             
	    {
	        if(isdigit(*e))
	        {
	            num = *e -'0'; 
	            push(num);
	        }
	        else
	        {
	            n1 = pop();
	            n2 = pop();
	            switch(*e)
	            {
	            case '+':
	            {
	                n3 = n1 + n2;
	                break;
	            }
	            case '-':
	            {
	                n3 = n2 - n1;
	                break;
	            }
	            case '*':
	            {
	                n3 = n1 * n2;
	                break;
	            }
	            case '/':
	            {
	                n3 = n2 / n1;
	                break;
	            }
	            }
	            push(n3);
	        }
	        e++;
	    }
	    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
	    return 0;
	
}
