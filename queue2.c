#include<stdio.h>
#include<stdlib.h>
#define max 5

int front=-1,rear=-1;
int queue[max];

void insert()
{
    int item;
    if(rear==(max-1))
    {
        printf("Queue Is OverFlow..");
    }
    else
    {
        printf("Enter Element : ");
        scanf("%d",&item);
        front=0;
        rear++;
        queue[rear]=item;
        printf("Done..");
    }
}

void display()
{
    if(rear==-1)
    {
        printf("Queue Is Empty....");
    }
    else
    {
        printf("Front <-------");
        for(int i=front;i<=rear;i++)
        {
            printf("\t%d",queue[i]);
        }
        printf(" <-------Rear");
    }
}
void delete()
{
    if(rear==-1)
    {
        printf("Queue Is Empty....");
    }
    else
    {
        printf("Deleted Element is : %d",queue[front]);
        //printf("REAR : %d",queue[rear]);
        for(int i=front;i<=rear-1;i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
    }
}

int main()
{
    /*insert();
    display();*/
    int ch;
    while(1)
    {
        printf("\n--------------------------------------\n");
        printf("1.insert\n2.display\n3.delete\n4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: delete();break;
            case 4: exit(0);
            default: printf("Wrong choice ");
        }

    }
    return 0;

}
