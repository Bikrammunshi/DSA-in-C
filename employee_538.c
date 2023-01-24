/*
WAP  to store n employees data such as employee name, gender, designation, department, basic pay.
Calculate the gross pay of each employees as follows:

gross pay= basic pay+hr+da
ha=25% of basic pay
da=75% of basic pay

*/


struct employee_employee_538
{
    char name_employee_538[50];
    char gender_employee_538;
    char desig_employee_538[50];
    char depart_employee_538[50];
    float basic_employee_538;
    float gross_employee_538;
};
typedef struct employee_employee_538 sal_employee_538;


void input_employee_538(sal_employee_538 *p_employee_538,int n_employee_538)
{
    for(int i_employee_538=0;i_employee_538<n_employee_538;i_employee_538++)
    {
        printf("Enter the name \n");
        scanf("%s",&p_employee_538[i_employee_538].name_employee_538);
        printf("Enter the gender \n");
        scanf(" %c",&p_employee_538[i_employee_538].gender_employee_538);
        printf("Enter the desig \n");
        scanf("%s",&p_employee_538[i_employee_538].desig_employee_538);
        printf("Enter the depart \n");
        scanf("%s",&p_employee_538[i_employee_538].depart_employee_538);
        printf("Entr the basic pay \n");
        scanf("%f",&p_employee_538[i_employee_538].basic_employee_538);
    }
}

void calculate_employee_538(sal_employee_538 *p_employee_538,int n_employee_538)
{
    for(int i_employee_538=0;i_employee_538<n_employee_538;i_employee_538++)
    {
        p_employee_538[i_employee_538].gross_employee_538=p_employee_538[i_employee_538].basic_employee_538 + (p_employee_538[i_employee_538].basic_employee_538 * 25 /100) + (p_employee_538[i_employee_538].basic_employee_538 * 75 / 100);
    }
}

void display_employee_538(sal_employee_538 *p_employee_538,int n_employee_538)
{
    for(int i_employee_538=0;i_employee_538<n_employee_538;i_employee_538++)
    {
        printf("Name \t\t Gender \t\t Designation \t\t Department \t\t Baisc pay \t\t Gross pay \n");
        printf("%s   \t\t %c     \t\t\t %s          \t\t %s         \t\t %f        \t\t %f        \n",p_employee_538[i_employee_538].name_employee_538,p_employee_538[i_employee_538].gender_employee_538,p_employee_538[i_employee_538].desig_employee_538,p_employee_538[i_employee_538].depart_employee_538,p_employee_538[i_employee_538].basic_employee_538,p_employee_538[i_employee_538].gross_employee_538);
       
    }
}
void main_employee_538()
{
    sal_employee_538 *st_ptr;
    int n_employee_538;
    printf("Enter the number of employee \n");
    scanf("%d",&n_employee_538);
    st_ptr=(sal_employee_538 *) calloc(n_employee_538,sizeof(sal_employee_538));

    input_employee_538(st_ptr,n_employee_538);
    calculate_employee_538(st_ptr,n_employee_538);
    display_employee_538(st_ptr,n_employee_538);

}
