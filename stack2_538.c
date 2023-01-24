/*
Write a menu driven program to perform the following operations of a stack using linked list 
    by using suitable user defined functions for each case.
    a)check if the stack is empty
    b)display the contents of stack
    c)push
    d)pop
*/




typedef struct node_stack2_538
{
    int data_stack2_538;
    struct node_stack2_538* next_stack2_538;
}list_stack2_538;
list_stack2_538* top_stack2_538;

void push_stack2_538()
{
    list_stack2_538* temp_stack2_538=(list_stack2_538 *)malloc(sizeof(list_stack2_538));
    if(!temp_stack2_538)
        printf("OverFlow");
    else
    {
        
        scanf("%d",&temp_stack2_538->data_stack2_538);
        temp_stack2_538->next_stack2_538=top_stack2_538;
        top_stack2_538=temp_stack2_538;
    }
        
        
}

void pop_stack2_538()
{
    list_stack2_538* temp_stack2_538;

    if(top_stack2_538!=NULL)
    {
        temp_stack2_538=top_stack2_538;
        top_stack2_538=top_stack2_538->next_stack2_538;
        free(temp_stack2_538);
    }
    else
        printf("REACHED UNDERFLOW");
}

int isEmpty_stack2_538()
{
    if (top_stack2_538==NULL)
        return 1;
    else    
        return 0;
}

void display_stack2_538()
{
    list_stack2_538* temp_stack2_538;

    if(top_stack2_538!=NULL)
    {
        temp_stack2_538=top_stack2_538;
        while(temp_stack2_538!=NULL)
        {
            printf("%d->",temp_stack2_538->data_stack2_538);
            temp_stack2_538=temp_stack2_538->next_stack2_538;
        }
    }
    else
        printf("REACHED UNDERFLOW");
}

int main_stack2_538()
{
    printf("1. Check if the stack is empty\n");
    printf("2. Display the contents of the stack\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    
    char c_stack2_538;
    printf("Enter y if you want to enter your choice\n");
    scanf(" %c",&c_stack2_538);
    while(c_stack2_538=='y')
    {
        printf("Enter your choice from the above menu\n");
        int i_stack2_538;
        scanf("%d",&i_stack2_538);
        switch(i_stack2_538)
        {
            case 1:
            if(isEmpty_stack2_538()==1)
                printf("The stack is empty");
            else    
                printf("The stack is not empty");
            break;

            case 2:
                printf("The contents of the stack is \n");
                display_stack2_538();
            break;

            case 3:
                printf("Enter the elements\n");
                push_stack2_538();
            break;

            case 4:
                pop_stack2_538();
            break;
            default:
                printf("SORRY WRONG CHOICE\n");
        }
       printf("\nEnter y if you want to enter your choice\n");
       scanf(" %c",&c_stack2_538); 
    }
return 0;

}