//WAP to display the linked list in an reverse order



typedef struct linked_list_llist2_538
{
    int data_llist2_538;
    struct linked_list_llist2_538 *nxt_llist2_538;
}node_llist2_538;

void create_llist2_538(node_llist2_538 *ptr_llist2_538)
{
    scanf("%d",&ptr_llist2_538->data_llist2_538);
    ptr_llist2_538->nxt_llist2_538=(node_llist2_538 *)malloc(sizeof(node_llist2_538));
    if(ptr_llist2_538->data_llist2_538!=-999)
        create_llist2_538(ptr_llist2_538->nxt_llist2_538);
    else
        ptr_llist2_538->nxt_llist2_538=NULL;
}

void display_llist2_538(node_llist2_538 *list_llist2_538)
{
    if(list_llist2_538->nxt_llist2_538!=NULL)
    {
        display_llist2_538(list_llist2_538->nxt_llist2_538);
        printf("%d \n",list_llist2_538->data_llist2_538);
    }
}

void main_llist2_538()
{
    node_llist2_538 *head_llist2_538=(node_llist2_538*)malloc(sizeof(node_llist2_538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_llist2_538(head_llist2_538);
    printf("The list in reverse order is \n");
    display_llist2_538(head_llist2_538);
}