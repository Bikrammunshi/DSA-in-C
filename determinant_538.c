//WAP to find determinant of 3×3 Matrix.

int main_determinant_538()
{
int *a_determinant_538,i_determinant_538,j_determinant_538,det_determinant_538;
a_determinant_538=(int *) malloc((3*3) * sizeof(int));
printf("Enter the elements of the matrix\n");
for(int i_determinant_538=0;i_determinant_538<3;i_determinant_538++)
{
for(int j_determinant_538=0;j_determinant_538<3;j_determinant_538++)
scanf("%d",&a_determinant_538[i_determinant_538*3+j_determinant_538]);
}
det_determinant_538=a_determinant_538[0]*(a_determinant_538[4]*a_determinant_538[8]-a_determinant_538[5]*a_determinant_538[7])-a_determinant_538[1]*(a_determinant_538[3]*a_determinant_538[8]-a_determinant_538[6]*a_determinant_538[5])+a_determinant_538[2]*(a_determinant_538[3]*a_determinant_538[7]-
a_determinant_538[6]*a_determinant_538[4]);
printf("Determinant of the matrix is %d",det_determinant_538);
return 0;
}