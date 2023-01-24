/*evev
Write a menu driven program to implement queue operations such as
    Enqueue, Dequeue, Peek, Display of elements, IsEmpty using linked list.
*/


typedef struct node_queue2_538
{
    int data_queue2_538;
    struct node_queue2_538 *next_queue2_538;
    struct node_queue2_538 *prev_queue2_538 ;
}queue_queue2_538;
queue_queue2_538 *a_queue2_538;
queue_queue2_538 *front_queue2_538;
queue_queue2_538 *rear_queue2_538;

void enqueue_queue2_538()
{
    if(rear_queue2_538==NULL)
    {
        printf("OVERFLOW\n");
        exit(0);
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d",&rear_queue2_538->data_queue2_538);
        rear_queue2_538->next_queue2_538=(queue_queue2_538*)malloc(sizeof(queue_queue2_538));
        front_queue2_538=a_queue2_538;
        rear_queue2_538=rear_queue2_538->next_queue2_538;
    }
}
void dequeue_queue2_538()
{
    if(rear_queue2_538==NULL)
        printf("UNDERFLOW\n");
    else
    {
        printf("Element deleted is %d\n",front_queue2_538->data_queue2_538);
        queue_queue2_538 *temp_queue2_538=front_queue2_538;
        front_queue2_538=front_queue2_538->next_queue2_538;
        a_queue2_538=front_queue2_538;
        free(temp_queue2_538);
    }
}
void peek_queue2_538()
{
    if(front_queue2_538==rear_queue2_538)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",front_queue2_538->data_queue2_538);
    }
}
void display_queue2_538()
{
    queue_queue2_538 *i_queue2_538=a_queue2_538;
    while(i_queue2_538!=rear_queue2_538)
    {
        if(i_queue2_538->data_queue2_538!=0)
            printf("%d \n",i_queue2_538->data_queue2_538);
        i_queue2_538=i_queue2_538->next_queue2_538;
    }
    
}
void isempty_queue2_538()
{
    if(rear_queue2_538==NULL)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not empty\n");
}
void isfull_queue2_538()
{
    if(rear_queue2_538==NULL)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_queue2_538()
{
    a_queue2_538=(queue_queue2_538 *)malloc(sizeof(queue_queue2_538));
    rear_queue2_538=a_queue2_538;
    front_queue2_538=a_queue2_538;
    printf("A queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c_queue2_538;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c_queue2_538);

    while(c_queue2_538=='y')
    {
        
        printf("Enter your choice: ");
        int i_queue2_538;
        scanf("%d",&i_queue2_538);
        switch(i_queue2_538)
        {
            case 1:
            enqueue_queue2_538();
            break;

            case 2:
            dequeue_queue2_538();
            break;

            case 3:
            peek_queue2_538();
            break;

            case 4:
            display_queue2_538();
            break;

            case 5:
            isempty_queue2_538();
            break;

            case 6:
            isfull_queue2_538();
            break;
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c_queue2_538);
    }
    return 0;
}