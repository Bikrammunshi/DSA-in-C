/*
WAP using C to Evaluate the Given Polynomial Equation f(x). Note: Order of
polynomial, co-efficient and value of x will be user input.
*/



void main_polynomial3_538()
{
    int n_polynomial3_538;
    printf("Enter the order of the polynomial \n");
    scanf("%d",&n_polynomial3_538);
    int *poly_polynomial3_538=(int *) malloc((n_polynomial3_538+1) * sizeof(int));
    printf("Enter the coefficients of the polynomials \n");

    for(int i_polynomial3_538=0;i_polynomial3_538<n_polynomial3_538+1;i_polynomial3_538++)
        scanf("%d",&poly_polynomial3_538[i_polynomial3_538]);

    int x_polynomial3_538;
    printf("Enter the value of x \n");
    scanf("%d",&x_polynomial3_538);

    int sum_polynomial3_538=0;

    for(int i_polynomial3_538=0;i_polynomial3_538<n_polynomial3_538+1;i_polynomial3_538++)
    {
        sum_polynomial3_538=sum_polynomial3_538+(poly_polynomial3_538[i_polynomial3_538]*pow(x_polynomial3_538,(n_polynomial3_538-i_polynomial3_538)));
    }

    printf("The polynomial is \n");
    for(int i_polynomial3_538=0;i_polynomial3_538<n_polynomial3_538;i_polynomial3_538++)
    {
        
        printf("%d*x^(%d) + ",poly_polynomial3_538[i_polynomial3_538],(n_polynomial3_538-i_polynomial3_538));
    }
    printf("%d.  \n",poly_polynomial3_538[n_polynomial3_538]);

    printf("The summation of the polynomial for the value x %d is %d .\n",x_polynomial3_538,sum_polynomial3_538);
}   