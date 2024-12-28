
#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
	struct node *prev;
};
struct node * head, *tail;

void ftraversal()
{
    struct node * t = head;
        if(head==NULL)
        {
            printf("\nList empty");
            return;
        }
        while(t!=NULL)
        {
            printf("%d -> ", t->value);
            t=t->next;
        }
}

void btraversal()
{
    struct node * t = tail;
        if(tail==NULL)
        {
            printf("\nList empty");
            return;
        }
        while(t!=NULL)
        {
            printf("%d -> ", t->value);
            t=t->prev;
        }
}
int main()
{
    head=NULL;
    tail=NULL;
    int choice;

while(1)
{
    printf("\n1. F Traversal \n2. B Traversal \n3. Insert First \n4. Insert Last \n5. Insert After a val \n6. Insert at a middle pos \n7. Delete \n8. Search \n9. Your custom function!  \n10.EXIT\nEnter choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {
        ftraversal();
    }
    else if(choice==2)
    {
         btraversal();
    }
    else if(choice==2)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==2)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==3)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==4)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==5)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==6)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==7)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==8)
    {
         //WRITE APPROPRIATE CODE HERE
    }
    else if(choice==9)
    {
         //WRITE APPROPRIATE CODE HERE
    }

    else if(choice==10)
        break;

    else
    {
        printf("Wrong choice, enter again");
    }

}

}
