//WAP to reverse the sequence elements in a double linked list.

typedef struct node_end_dll2_538
{
    struct node_end_dll2_538 *prev_end_dll2_538;
    int data_end_dll2_538;
    struct node_end_dll2_538 *nxt_end_dll2_538;
}node_end_dll2_538;

void create_end_dll2_538(node_end_dll2_538 *head_end_dll2_538)
{
    scanf("%d",&head_end_dll2_538 ->data_end_dll2_538);

    if(head_end_dll2_538->data_end_dll2_538==-999)
    {
        head_end_dll2_538->nxt_end_dll2_538=NULL;
        head_end_dll2_538->prev_end_dll2_538 =head_end_dll2_538;
    }
    else
    {
        head_end_dll2_538->nxt_end_dll2_538 = (node_end_dll2_538 *)malloc(sizeof(node_end_dll2_538));
        head_end_dll2_538->nxt_end_dll2_538->prev_end_dll2_538 =head_end_dll2_538;
        create_end_dll2_538(head_end_dll2_538->nxt_end_dll2_538);
    }
}

void display_end_dll2_538(node_end_dll2_538 *list_end_dll2_538)
{
    if(list_end_dll2_538->nxt_end_dll2_538!=NULL)
    {
        display_end_dll2_538(list_end_dll2_538->nxt_end_dll2_538);
        printf("%d \n",list_end_dll2_538->data_end_dll2_538);
    }
}
void main_dll2_538()
{
    node_end_dll2_538 *head_end_dll2_538=(node_end_dll2_538*)malloc(sizeof(node_end_dll2_538));
    head_end_dll2_538->prev_end_dll2_538=NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_end_dll2_538(head_end_dll2_538);
    printf("The list  is \n");
    display_end_dll2_538(head_end_dll2_538);
}