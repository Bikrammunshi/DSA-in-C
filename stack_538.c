/*Write a menu driven program to perform the following operation of a stack by using
    array by using suitable user defined function for each case.
    a)check if the stack is empty
    b)display the contents of stack
    c)push_stack_538 
    d)pop
*/

int top_stack_538=-1;
int n_stack_538;
int *arr_stack_538;
void push_stack_538()
{
    if(top_stack_538<n_stack_538)
    {
        top_stack_538++;
        scanf("%d",&arr_stack_538[top_stack_538]);
    }
    else
        printf("OverFlow");
        
}

void pop_stack_538()
{
    if(top_stack_538>-1)
    {
        free(arr_stack_538+top_stack_538);
        top_stack_538--;
    }
    else
        printf("REACHED UNDERFLOW");
}

int isEmpty_stack_538()
{
    if (top_stack_538==-1)
        return 1;
    else    
        return 0;
}

void display_stack_538()
{
    while(top_stack_538>-1)
    {
        printf("%d \t",arr_stack_538[top_stack_538]);
        free(arr_stack_538+top_stack_538);
        top_stack_538--;
    }
}

int main_stack_538()
{
    printf("Enter the size of the stack\n");
    scanf("%d",&n_stack_538);
    arr_stack_538=(int *)malloc(sizeof(int));
    printf("1. Check if the stack is empty\n");
    printf("2. Display the contents of the stack\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    
    char c_stack_538;
    printf("Enter y if you want to enter your choice\n");
    scanf(" %c",&c_stack_538);
    while(c_stack_538=='y')
    {
        printf("Enter your choice from the above menu\n");
        int i_stack_538;
        scanf("%d",&i_stack_538);
        switch(i_stack_538)
        {
            case 1:
            if(isEmpty_stack_538()==1)
                printf("The stack is empty");
            else    
                printf("The stack is not empty");
            break;

            case 2:
                printf("The contents of the stack is \n");
                display_stack_538(arr_stack_538);
            break;

            case 3:
                printf("Enter the elements\n");
                push_stack_538(arr_stack_538);
            break;

            case 4:
                pop_stack_538(arr_stack_538);
            break;
            default:
                printf("SORRY WRONG CHOICE\n");
        }
       printf("\nEnter y if you want to enter your choice\n");
       scanf(" %c",&c_stack_538); 
    }
return 0;

}