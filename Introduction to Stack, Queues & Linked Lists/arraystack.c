#include<stdio.h>
#define SIZE 5

int stack[SIZE], choice, top, ele, i;

int isFull();
int isEmpty();
void push();
void pop();
void display();

void main(){
    top = -1;
    
    while(1)
    {

        printf("\n\t STACK OPERATION USING ARRAY");
        printf("\n\t------------------------------");
        printf("\n\t 1. Push\n\t 2. Pop\n\t 3.Display \n\t 4.Exit");
    

        printf("\nEnter your Choice: ");
        scanf("%d",&choice);
            switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\n\t EXIT POINT!!");
            break;
        
        default:
            printf("\n\t Invalid choice, Please enter a valid choice.");
            break;
        }
        
    } 
    
}

int isFull(){
    if (top == SIZE-1)
    {
        return(1);
    }
    else{
        return(0);
    }
}

void push(){
    if (isFull()==1)
    {
        printf("\n\t STACK is overflow");
    }
    else
    {
        printf("\n\t Enter the element in the stack: ");
        scanf("%d",&ele);
        top++;
        stack[top] = ele;
    }
}

int isEmpty(){
    if (top == -1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void pop(){
    if (isEmpty() == 1)
    {
        printf("\n\t STACK is underflow");
    }
    else
    {
        printf("\n Element popped: %d", stack[top]);
        top--;
    }
}

void display(){
    if (isEmpty() == 1)
    {
        printf("\n\t STACK is underflow");
    }
    else
    {
        printf("\n Stack element: ");
        for(i=top; i>=0; i--){
        printf("\n %d",stack[i]);
        }
    }
}