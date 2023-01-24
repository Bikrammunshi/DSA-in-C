//WAP using function that adds given two polynomials f(x) = h(x) + g(x)


void input_polynomial2_538(int *p_polynomial2_538,int o_polynomial2_538)
{
    for(int i_polynomial2_538=0;i_polynomial2_538<=o_polynomial2_538;i_polynomial2_538++)
    {
        scanf("%d",&p_polynomial2_538[i_polynomial2_538]);
    }

}

void calculate_polynomial2_538(int *p_polynomial2_538,int *q_polynomial2_538,int *r_polynomial2_538,int a_polynomial2_538,int b_polynomial2_538,int n_polynomial2_538)
{
    int i_polynomial2_538,j_polynomial2_538=0,k_polynomial2_538=0;
    for(i_polynomial2_538=0;i_polynomial2_538<=n_polynomial2_538;i_polynomial2_538++)
    {
        if((a_polynomial2_538-j_polynomial2_538)==(b_polynomial2_538-k_polynomial2_538) && (a_polynomial2_538-j_polynomial2_538)==(n_polynomial2_538-i_polynomial2_538) )
        {
            r_polynomial2_538[i_polynomial2_538]=p_polynomial2_538[j_polynomial2_538]+q_polynomial2_538[k_polynomial2_538];
            j_polynomial2_538++;
            k_polynomial2_538++;
        }
        else if((a_polynomial2_538-j_polynomial2_538)==(n_polynomial2_538-i_polynomial2_538) && (a_polynomial2_538-j_polynomial2_538)!=(b_polynomial2_538-k_polynomial2_538))
        {
            r_polynomial2_538[i_polynomial2_538]=p_polynomial2_538[j_polynomial2_538];
            j_polynomial2_538++;
        }
        else if((b_polynomial2_538-k_polynomial2_538)==(n_polynomial2_538-i_polynomial2_538) && (a_polynomial2_538-j_polynomial2_538)!=(b_polynomial2_538-k_polynomial2_538))
        {
            r_polynomial2_538[i_polynomial2_538]=q_polynomial2_538[k_polynomial2_538];
            k_polynomial2_538++;
        }
        
    }
}

void display_polynomial2_538(int *p_polynomial2_538,int n_polynomial2_538)
{
    for(int i_polynomial2_538=0;i_polynomial2_538<n_polynomial2_538;i_polynomial2_538++)
    {
        
        printf("%d*x^(%d) + ",p_polynomial2_538[i_polynomial2_538],(n_polynomial2_538-i_polynomial2_538));
    }
    printf("%d.  \n",p_polynomial2_538[n_polynomial2_538]);
}

void main_polynomial2_538()
{
    int *p1_polynomial2_538,*p2_polynomial2_538,n1_polynomial2_538,n2_polynomial2_538;
    printf("Enter the order of the first polynomial: ");
    scanf("%d",&n1_polynomial2_538);

    printf("Enter the order of the second polynomial: ");
    scanf("%d",&n2_polynomial2_538);

    p1_polynomial2_538=(int *) malloc((n1_polynomial2_538+1) * sizeof(int));
    p2_polynomial2_538=(int *) malloc((n2_polynomial2_538+1) * sizeof(int));

    printf("Enter the coefficients of the first polynomial \n");
    input_polynomial2_538(p1_polynomial2_538,n1_polynomial2_538);

    printf("Enter the coefficients of the second polynomial \n");
    input_polynomial2_538(p2_polynomial2_538,n2_polynomial2_538);

    int m_polynomial2_538;

    if(n1_polynomial2_538>n2_polynomial2_538)
        m_polynomial2_538=n1_polynomial2_538;
    else 
        m_polynomial2_538=n2_polynomial2_538;

    int *p3_polynomial2_538;
    p3_polynomial2_538 = (int *) malloc(m_polynomial2_538 * sizeof(int));
    calculate_polynomial2_538(p1_polynomial2_538,p2_polynomial2_538,p3_polynomial2_538,n1_polynomial2_538,n2_polynomial2_538,m_polynomial2_538);

    printf("The first polynomial is \n");
    display_polynomial2_538(p1_polynomial2_538,n1_polynomial2_538);
    printf("The second polynomial is \n");
    display_polynomial2_538(p2_polynomial2_538,n2_polynomial2_538);
    printf("The final polynomial is \n");
    display_polynomial2_538(p3_polynomial2_538,m_polynomial2_538);

}
