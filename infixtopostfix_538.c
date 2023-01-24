//WAP to convert an infix eression into its equivalent postfix notation.

typedef struct node_infixtopostfix_538
{
    char data_infixtopostfix_538;
    struct node_infixtopostfix_538* next_infixtopostfix_538;
}stack_infixtopostfix_538;
stack_infixtopostfix_538* top_infixtopostfix_538;
char* e_infixtopostfix_538;

void push_infixtopostfix_538(char op_infixtopostfix_538)
{
    stack_infixtopostfix_538* temp_infixtopostfix_538=(stack_infixtopostfix_538 *)malloc(sizeof(stack_infixtopostfix_538));     
    temp_infixtopostfix_538->data_infixtopostfix_538=op_infixtopostfix_538;
    temp_infixtopostfix_538->next_infixtopostfix_538=top_infixtopostfix_538;
    top_infixtopostfix_538=temp_infixtopostfix_538;
}

char pop_infixtopostfix_538()
{
    stack_infixtopostfix_538* temp_infixtopostfix_538;
    char ele_infixtopostfix_538;
    if(top_infixtopostfix_538!=NULL)
    {
        ele_infixtopostfix_538= top_infixtopostfix_538->data_infixtopostfix_538;
        temp_infixtopostfix_538=top_infixtopostfix_538;
        top_infixtopostfix_538=top_infixtopostfix_538->next_infixtopostfix_538;
        free(temp_infixtopostfix_538);
    }
    else
        printf("REACHED UNDERFLOW");
    return ele_infixtopostfix_538;
}

int priority_infixtopostfix_538(char x_infixtopostfix_538)
{
    if(x_infixtopostfix_538=='(')
        return 0;
    if(x_infixtopostfix_538=='+'||x_infixtopostfix_538=='-')
        return 1;
    if(x_infixtopostfix_538=='*'||x_infixtopostfix_538=='/')
        return 2;
    if(x_infixtopostfix_538=='^')
        return 3;
}



int main_infixtopostfix_538()
{
    e_infixtopostfix_538 = (char *)malloc(sizeof(100));
    printf("Enter the expression\n");
    scanf("%s",e_infixtopostfix_538);
    int i_infixtopostfix_538=0;
    while(e_infixtopostfix_538[i_infixtopostfix_538]!='\0')
    {
        if(isalnum(e_infixtopostfix_538[i_infixtopostfix_538]))
            printf("%c",e_infixtopostfix_538[i_infixtopostfix_538]);
        else if(e_infixtopostfix_538[i_infixtopostfix_538]=='(')
            push_infixtopostfix_538(e_infixtopostfix_538[i_infixtopostfix_538]);
        else if(e_infixtopostfix_538[i_infixtopostfix_538]==')')
        {
            char x_infixtopostfix_538;     
            while((x_infixtopostfix_538=pop_infixtopostfix_538())!='(')
                printf("%c",x_infixtopostfix_538);
        }
        else
        {
            while(priority_infixtopostfix_538(top_infixtopostfix_538->data_infixtopostfix_538)>=priority_infixtopostfix_538(e_infixtopostfix_538[i_infixtopostfix_538]))
                printf("%c",pop_infixtopostfix_538());
            push_infixtopostfix_538(e_infixtopostfix_538[i_infixtopostfix_538]);
        }
        i_infixtopostfix_538++;
    }
    while(top_infixtopostfix_538!=NULL)
        printf("%c",pop_infixtopostfix_538());
    return 0;
    
}