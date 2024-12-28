#include<stdio.h>
int main()
{
    int i,n;
    float A,HW,CT,MT,TF,sum,per;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nEnter the marks of Attendance,Assignments,Class Tests,Mid Term,Final of student%d in sequence: \n",i);
        scanf("%f %f %f %f %f",&A,&HW,&CT,&MT,&TF);
        sum=A+HW+CT+MT+TF;
        per=(sum/180)*100;
        if(per>=90&&per<=100)
        {
            printf("\nstudent%d: A",i);
        }
        if(per>=86&&per<=89)
        {
            printf("\nstudent%d: A-",i);
        }
        if(per>=82&&per<=85)
        {
            printf("\nstudent%d: B+",i);
        }
        if(per>=78&&per<=81)
        {
            printf("\nstudent%d: B",i);
        }
        if(per>=74&&per<=77)
        {
            printf("\nstudent%d: A",i);
        }
        if(per>=70&&per<=73)
        {
            printf("\nstudent%d: C+",i);
        }
        if(per>=66&&per<=69)
        {
            printf("\nstudent%d: C",i);
        }
        if(per>=62&&per<=65)
        {
            printf("\nstudent%d: C-",i);
        }
        if(per>=58&&per<=61)
        {
            printf("\nstudent%d: D+",i);
        }
        if(per>=55&&per<=57)
        {
            printf("\nstudent%d: D",i);
        }
        if(per<=55)
        {
            printf("\nstudent%d: F",i);
        }
    }

}
