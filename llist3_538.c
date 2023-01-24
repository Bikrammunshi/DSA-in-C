//WAP to print the mth node from the last in a link list of n nodes


typedef struct linked_list_llist3_538
{
    int data_llist3_538;
    struct linked_list_llist3_538 *nxt_llist3_538;
}node_llist3_538;

int count_538(node_llist3_538 *list_llist3_538,int c_llist3_538)
{
    if(list_llist3_538->nxt_llist3_538!=NULL)
    {
        c_llist3_538++;
        list_llist3_538=list_llist3_538->nxt_llist3_538;
        count_538(list_llist3_538,c_llist3_538);
    }
    else
        return c_llist3_538;
}
void create_538(node_llist3_538 *ptr_llist3_538)
{
    scanf("%d",&ptr_llist3_538->data_llist3_538);
    ptr_llist3_538->nxt_llist3_538=(node_llist3_538 *)malloc(sizeof(node_llist3_538));
    if(ptr_llist3_538->data_llist3_538!=-999)
        create_538(ptr_llist3_538->nxt_llist3_538);
    else
        ptr_llist3_538->nxt_llist3_538=NULL;
}

void display_538(node_llist3_538 *list_llist3_538,int i_llist3_538)
{
    if(list_llist3_538->nxt_llist3_538!=NULL && i_llist3_538>0)
    {
        display_538(list_llist3_538->nxt_llist3_538,--i_llist3_538);
    }
    else if(i_llist3_538==0)
        printf("The nth node from the last is %d \n",list_llist3_538->data_llist3_538);
        
}

int main_llist3_538()
{
    node_llist3_538 *head_llist3_538=(node_llist3_538*)malloc(sizeof(node_llist3_538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_538(head_llist3_538);
    int n_llist3_538;
    printf("Enter the nth node from the last you want to print \n");
    scanf("%d",&n_llist3_538);
    if(n_llist3_538>count_538(head_llist3_538,0))
        printf("INVALID INPUT ");
    else
        display_538(head_llist3_538,count_538 (head_llist3_538,0)-n_llist3_538);
        return 0;
}
