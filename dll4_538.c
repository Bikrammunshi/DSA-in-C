//WAP to remove the duplicaties in a sorted double linked list.



typedef struct node_dll4_538
{
    struct node_dll4_538 *prev_dll4_538;
    int data_dll4_538;
    struct node_dll4_538 *nxt_dll4_538;
}node_dll4_538;

void create_dll4_538(node_dll4_538 *head_dll4_538)
{
    scanf("%d",&head_dll4_538 ->data_dll4_538);

    if(head_dll4_538->data_dll4_538==-999)
    {
        head_dll4_538->nxt_dll4_538=NULL;
        head_dll4_538->prev_dll4_538 =head_dll4_538;
    }
    else
    {
        head_dll4_538->nxt_dll4_538 = (node_dll4_538 *)malloc(sizeof(node_dll4_538));
        head_dll4_538->nxt_dll4_538->prev_dll4_538 =head_dll4_538;
        create_dll4_538(head_dll4_538->nxt_dll4_538);
    }
}

void search_dll4_538(node_dll4_538 *list_dll4_538,int dat_dll4_538)
{
    int c_dll4_538=0;
    while(list_dll4_538->nxt_dll4_538!=NULL)
    {
        if(list_dll4_538->data_dll4_538==dat_dll4_538)
            c_dll4_538++;
            list_dll4_538=list_dll4_538->nxt_dll4_538;
    
    }
        printf("The element %d is found in the list %d times. \n",dat_dll4_538,c_dll4_538);
}


void main_dll4_538()
{
    node_dll4_538 *head_dll4_538=(node_dll4_538*)malloc(sizeof(node_dll4_538));
    head_dll4_538->prev_dll4_538=NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_dll4_538(head_dll4_538);
    node_dll4_538 *temp=head_dll4_538;
    while(temp->nxt_dll4_538!=NULL)
    {
            search_dll4_538(head_dll4_538,temp->data_dll4_538);
            temp=temp->nxt_dll4_538;
    }
}