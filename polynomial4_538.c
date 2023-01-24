//WAP using function that adds given two polynomials f(x) = h(x) + g(x)



void input_polynomial4_538(int *p_polynomial4_538,int o_polynomial4_538)
{
    for(int i_polynomial4_538=0;i_polynomial4_538<=o_polynomial4_538;i_polynomial4_538++)
    {
        scanf("%d",&p_polynomial4_538[i_polynomial4_538]);
    }

}

void calculate_polynomial4_538(int *p_polynomial4_538,int *q_polynomial4_538,int *r_polynomial4_538,int a_polynomial4_538,int b,int n_polynomial4_538)
{
    int i_polynomial4_538,j_polynomial4_538=0,k_polynomial4_538=0;
    for(i_polynomial4_538=0;i_polynomial4_538<=n_polynomial4_538;i_polynomial4_538++)
    {
        if((a_polynomial4_538-j_polynomial4_538)==(b-k_polynomial4_538) && (a_polynomial4_538-j_polynomial4_538)==(n_polynomial4_538-i_polynomial4_538) )
        {
            r_polynomial4_538[i_polynomial4_538]=p_polynomial4_538[j_polynomial4_538]+q_polynomial4_538[k_polynomial4_538];
            j_polynomial4_538++;
            k_polynomial4_538++;
        }
        else if((a_polynomial4_538-j_polynomial4_538)==(n_polynomial4_538-i_polynomial4_538) && (a_polynomial4_538-j_polynomial4_538)!=(b-k_polynomial4_538))
        {
            r_polynomial4_538[i_polynomial4_538]=p_polynomial4_538[j_polynomial4_538];
            j_polynomial4_538++;
        }
        else if((b-k_polynomial4_538)==(n_polynomial4_538-i_polynomial4_538) && (a_polynomial4_538-j_polynomial4_538)!=(b-k_polynomial4_538))
        {
            r_polynomial4_538[i_polynomial4_538]=q_polynomial4_538[k_polynomial4_538];
            k_polynomial4_538++;
        }
        
    }
}

void display_polynomial4_538(int *p_polynomial4_538,int n_polynomial4_538)
{
    for(int i_polynomial4_538=0;i_polynomial4_538<n_polynomial4_538;i_polynomial4_538++)
    {
        
        printf("%d*x^(%d) + ",p_polynomial4_538[i_polynomial4_538],(n_polynomial4_538-i_polynomial4_538));
    }
    printf("%d.  \n",p_polynomial4_538[n_polynomial4_538]);
}

void main_polynomial4_538()
{
    int *p1_polynomial4_538,*p2_polynomial4_538,n1_polynomial4_538,n2_polynomial4_538;
    printf("Enter the order of the first polynomial: ");
    scanf("%d",&n1_polynomial4_538);

    printf("Enter the order of the second polynomial: ");
    scanf("%d",&n2_polynomial4_538);

    p1_polynomial4_538=(int *) malloc((n1_polynomial4_538+1) * sizeof(int));
    p2_polynomial4_538=(int *) malloc((n2_polynomial4_538+1) * sizeof(int));

    printf("Enter the coefficients of the first polynomial \n");
    input_polynomial4_538(p1_polynomial4_538,n1_polynomial4_538);

    printf("Enter the coefficients of the second polynomial \n");
    input_polynomial4_538(p2_polynomial4_538,n2_polynomial4_538);

    int m_polynomial4_538;

    if(n1_polynomial4_538>n2_polynomial4_538)
        m_polynomial4_538=n1_polynomial4_538;
    else 
        m_polynomial4_538=n2_polynomial4_538;

    int *p3_polynomial4_538;
    p3_polynomial4_538 = (int *) malloc(m_polynomial4_538 * sizeof(int));
    calculate_polynomial4_538(p1_polynomial4_538,p2_polynomial4_538,p3_polynomial4_538,n1_polynomial4_538,n2_polynomial4_538,m_polynomial4_538);

    printf("The first polynomial is \n");
    display_polynomial4_538(p1_polynomial4_538,n1_polynomial4_538);
    printf("The second polynomial is \n");
    display_polynomial4_538(p2_polynomial4_538,n2_polynomial4_538);
    printf("The final polynomial is \n");
    display_polynomial4_538(p3_polynomial4_538,m_polynomial4_538);

}
