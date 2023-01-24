//WAP to convert an infix expression into its equivalent prefix notation.



typedef struct node_infixtoprefix_538
{
    char data_infixtoprefix_538;
    struct node_infixtoprefix_538* next_infixtoprefix_538;
    
}stack_infixtoprefix_538;
stack_infixtoprefix_538* top_infixtoprefix_538;
char* e_infixtoprefix_538;

void push_infixtoprefix_538(char op_infixtoprefix_538)
{
    stack_infixtoprefix_538* temp_infixtoprefix_538=(stack_infixtoprefix_538 *)malloc(sizeof(stack_infixtoprefix_538));     
    temp_infixtoprefix_538->data_infixtoprefix_538=op_infixtoprefix_538;
    temp_infixtoprefix_538->next_infixtoprefix_538=top_infixtoprefix_538;
    top_infixtoprefix_538=temp_infixtoprefix_538;
}

char pop_infixtoprefix_538()
{
    stack_infixtoprefix_538* temp_infixtoprefix_538;
    char ele_infixtoprefix_538;
    if(top_infixtoprefix_538!=NULL)
    {
        ele_infixtoprefix_538= top_infixtoprefix_538->data_infixtoprefix_538;
        temp_infixtoprefix_538=top_infixtoprefix_538;
        top_infixtoprefix_538=top_infixtoprefix_538->next_infixtoprefix_538;
        free(temp_infixtoprefix_538);
    }
    else
        printf("REACHED UNDERFLOW");
    return ele_infixtoprefix_538;
}

int priority_infixtoprefix_538(char x_infixtoprefix_538)
{
    if(x_infixtoprefix_538=='(')
        return 0;
    if(x_infixtoprefix_538=='+'||x_infixtoprefix_538=='-')
        return 1;
    if(x_infixtoprefix_538=='*'||x_infixtoprefix_538=='/')
        return 2;
    if(x_infixtoprefix_538=='^')
        return 3;
}

char* reverse_infixtoprefix_538(char* c_infixtoprefix_538)
{
    char *ch_infixtoprefix_538=(char *)malloc(sizeof(100));
    int i_infixtoprefix_538=0;
    int j_infixtoprefix_538=strlen(c_infixtoprefix_538)-1;
    while(c_infixtoprefix_538[i_infixtoprefix_538]!='\0')
    {
        ch_infixtoprefix_538[j_infixtoprefix_538]=c_infixtoprefix_538[i_infixtoprefix_538];
        i_infixtoprefix_538++;
        j_infixtoprefix_538--;
    }
    ch_infixtoprefix_538[i_infixtoprefix_538]='\0';

    strcpy(c_infixtoprefix_538,ch_infixtoprefix_538);
    return c_infixtoprefix_538;
}

int main_infixtoprefix_538()
{
    e_infixtoprefix_538 = (char *)malloc(sizeof(100));
    printf("Enter the expression\n");
    char *p_infixtoprefix_538=(char *)malloc(sizeof(100));
    scanf("%s",e_infixtoprefix_538);
    int i_infixtoprefix_538=0;
    int j_infixtoprefix_538=0;
    e_infixtoprefix_538=reverse_infixtoprefix_538(e_infixtoprefix_538);
    while(e_infixtoprefix_538[i_infixtoprefix_538]!='\0')
    {
        if(isalnum(e_infixtoprefix_538[i_infixtoprefix_538]))
        {
            p_infixtoprefix_538[j_infixtoprefix_538]=e_infixtoprefix_538[i_infixtoprefix_538];
            j_infixtoprefix_538++;
        }
        else if(e_infixtoprefix_538[i_infixtoprefix_538]==')')
            push_infixtoprefix_538(e_infixtoprefix_538[i_infixtoprefix_538]);
        else if(e_infixtoprefix_538[i_infixtoprefix_538]=='(')
        {
            char x_infixtoprefix_538;     
            while((x_infixtoprefix_538=pop_infixtoprefix_538())!=')')
            {
                p_infixtoprefix_538[j_infixtoprefix_538]=x_infixtoprefix_538;
                j_infixtoprefix_538++;
            }
        }
    
        else
        {
            while(priority_infixtoprefix_538(top_infixtoprefix_538->data_infixtoprefix_538)<=priority_infixtoprefix_538(e_infixtoprefix_538[i_infixtoprefix_538]))
            {
                p_infixtoprefix_538[j_infixtoprefix_538]=pop_infixtoprefix_538();
                j_infixtoprefix_538++;
            }
            push_infixtoprefix_538(e_infixtoprefix_538[i_infixtoprefix_538]);
            
        }
        i_infixtoprefix_538++;
    }
    p_infixtoprefix_538[j_infixtoprefix_538]='\0';
    p_infixtoprefix_538=reverse_infixtoprefix_538(p_infixtoprefix_538);
    for(int i_infixtoprefix_538=0;p_infixtoprefix_538[i_infixtoprefix_538]!='\0';i_infixtoprefix_538++)
        printf("%c_infixtoprefix_538",p_infixtoprefix_538[i_infixtoprefix_538]);
    return 0;
    
}