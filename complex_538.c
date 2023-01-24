//Add two complex numbers by passing structures to a function


struct complex_complex_538
{
    double rl_complex_538;
    double img_complex_538;
};
typedef struct complex_complex_538 number_complex_538;

number_complex_538 add_complex_538(number_complex_538 a_complex_538,number_complex_538 b_complex_538)
{
    a_complex_538.rl_complex_538=a_complex_538.rl_complex_538+b_complex_538.rl_complex_538;
    a_complex_538.img_complex_538=a_complex_538.img_complex_538+b_complex_538.img_complex_538;
    return a_complex_538;
}

void main_complex_538()
{
    number_complex_538 a_complex_538,b_complex_538;
    printf("For first complex number\n");
    printf("Enter the real number: ");
    scanf("%lf",&a_complex_538.rl_complex_538);
    printf("Enter the imaginary number: ");
    scanf("%lf",&a_complex_538.img_complex_538);

    printf("For second complex number\n");
    printf("Enter the real number: ");
    scanf("%lf",&b_complex_538.rl_complex_538);
    printf("Enter the imaginary number: ");
    scanf("%lf",&b_complex_538.img_complex_538);

    number_complex_538 res_complex_538;
    res_complex_538=add_complex_538(a_complex_538,b_complex_538);

    printf("After addition complex number is %lf+%lfi. \n",res_complex_538.rl_complex_538,res_complex_538.img_complex_538);

}