#include<stdio.h>
#define max 5

int top=-1;
int stack[max];

void push()
{
    if(top==(max-1))
        printf("STACK OVERFLOW....");
    else
    {
        int item;
        printf("\nEnter element : \n");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("Done..");
    }
}
void Display()
{
    if(top==-1)
    {
        printf("Stack UnderFlow..");
    }
    else
    {
        printf("\nElement is : [%d] <---------TOP\n",stack[top]);
        for(int i=top-1;i>-1;i--)
        {
            printf("\nElement is : [%d] \n",stack[i]);
        }
    }
}

void pop()
{
    if(top==-1)
    {
        printf("UnderFlow....");
    }
    else
    {
        printf("\nDeleted Element Is : %d\n",stack[top]);
        top--;
    }
}

int main()
{
    //push();
    //Display();
    //pop();
    int ch;
    while(1)
    {
        printf("\n1.Push \n2.Display \n3.POP\n4.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:Display();break;
            case 3:pop();break;
            case 4:exit(0);
            default :
                printf("Wrong choice .....");
        }
    }

    return 0;
}
