//WAP to implement a doubly linkd list using singly linked list.



typedef struct node_dll5_538
{
    int data_dll5_538;
    struct node_dll5_538 *nxt_dll5_538;
}node_dll5_538;

void create_dll5_538(node_dll5_538 *ptr_dll5_538)
{
    scanf("%d",&ptr_dll5_538->data_dll5_538);
    ptr_dll5_538->nxt_dll5_538=(node_dll5_538 *)malloc(sizeof(node_dll5_538));
    if(ptr_dll5_538->data_dll5_538!=-999)
        create_dll5_538(ptr_dll5_538->nxt_dll5_538);
    else
        ptr_dll5_538->nxt_dll5_538=NULL;
}

void move_dll5_538(node_dll5_538 *ptr_dll5_538)
{
    node_dll5_538 *p_dll5_538=ptr_dll5_538;
    node_dll5_538 *q_dll5_538=ptr_dll5_538;

    int ch_dll5_538;

    printf("\nPointer at %d\n", ptr_dll5_538->data_dll5_538);

    printf("Select option:\n1. Move front\n2. Move back\n3. Exit\nYour choice: ");
        scanf("%d", &ch_dll5_538);
    while(ch_dll5_538!=3)
    {
        printf("Select option:\n1. Move front\n2. Move back\n3. Exit\nYour choice: ");
        scanf("%d", &ch_dll5_538);
        switch(ch_dll5_538)
        {
        case 1: if(q_dll5_538->nxt_dll5_538 != NULL)
                {
                    q_dll5_538 = q_dll5_538->nxt_dll5_538;
                    printf("\nPointer at %d\n", q_dll5_538->data_dll5_538);
                }
                else
                {
                    printf("\nPointer at last node %d. Cannot move ahead.\n", q_dll5_538->data_dll5_538);
                }
                break;
        case 2: while (p_dll5_538->nxt_dll5_538 != q_dll5_538)
                {
                    p_dll5_538 = p_dll5_538->nxt_dll5_538;
                }
                if (p_dll5_538 == q_dll5_538)
                {
                    printf("\nPointer at first node %d. Cannot move behind.\n", q_dll5_538->data_dll5_538);
                }
                else
                {
                    q_dll5_538 = p_dll5_538;
                    p_dll5_538 = ptr_dll5_538;
                    printf("\nPointer at %d\n", q_dll5_538->data_dll5_538);
                }
                break;
        case 3: return;
        default: printf("\nInvalid choice entered. Try again\n");
        }}
}

void main_dll5_538()
{
    node_dll5_538 *head_dll5_538=(node_dll5_538*)malloc(sizeof(node_dll5_538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_dll5_538(head_dll5_538);
    move_dll5_538(head_dll5_538);

}