//WAP Store information of n students using structures and Dynamic Memory Allocation.


struct details_students1_538
{
    char name_students1_538[50];
    char gender_students1_538;
    long roll_students1_538;
    int sem_students1_538;
    char sec_students1_538;
};
typedef struct details_students1_538 stu_students1_538;

void input_students1_538(stu_students1_538 *p_students1_538,int n_students1_538)
{
    for(int i_students1_538=0;i_students1_538<n_students1_538;i_students1_538++)
    {
        printf("Enter the name \n");
        scanf("%s",&p_students1_538[i_students1_538].name_students1_538);
        printf("Enter the gender \n");
        scanf(" %c",&p_students1_538[i_students1_538].gender_students1_538);
        printf("Enter the roll number \n");
        scanf("%ld",&p_students1_538[i_students1_538].roll_students1_538);
        printf("Enter the semester \n");
        scanf("%d",&p_students1_538[i_students1_538].sem_students1_538);
        printf("Enter the section \n");
        scanf(" %c",&p_students1_538[i_students1_538].sec_students1_538);
    }
}

void display_students1_538(stu_students1_538 *p_students1_538,int n_students1_538)
{
    for(int i_students1_538=0;i_students1_538<n_students1_538;i_students1_538++)
    {
        printf("\n\nName: %s\n",p_students1_538[i_students1_538].name_students1_538);
        printf("Gender: %c \n",p_students1_538[i_students1_538].gender_students1_538);
        printf("Roll number: %ld \n",p_students1_538[i_students1_538].roll_students1_538);
        printf("Semester: %d \n",p_students1_538[i_students1_538].sem_students1_538);
        printf("Section: %c \n",p_students1_538[i_students1_538].sec_students1_538);
    }
}

void main_students1_538()
{
    stu_students1_538 *ptr_students1_538;
    int n_students1_538;
    printf("Enter the number of students \n");
    scanf("%d",&n_students1_538);
    ptr_students1_538=(stu_students1_538*) calloc(n_students1_538,sizeof(stu_students1_538));

    input_students1_538(ptr_students1_538,n_students1_538);
    display_students1_538(ptr_students1_538,n_students1_538);
}