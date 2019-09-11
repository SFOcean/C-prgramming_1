#include<stdio.h>

int main()
{
    int num[10], sn, i;
    char sub_name[20][20];
    float gp[10], cgpa, total=0;
    printf("NUMBER OF SUBJECTS: ");
    scanf("%d",&sn);
    printf("\nSUBJECT NAMES: \n");

    for(i=0;i<sn;i++)
    {
        printf("SUBJECT %d : ",i+1);
        scanf("%s",sub_name[i]);
    }
    printf("\nMARKS: \n");


    for(i=0;i<sn;i++)
    {
        printf ("%s: ", sub_name[i]);
        scanf("%d",&num[i]);
        if(num[i]>=80&&num[i]<=100)
            gp[i]=4.00;
        else if(num[i]>=70&&num[i]<=79)
            gp[i]=3.5;
        else if(num[i]>=60&&num[i]<=69)
            gp[i]=3.00;
        else if(num[i]>=50&&num[i]<=59)
            gp[i]=2.5;
        else if(num[i]>=40&&num[i]<=49)
            gp[i]=2.00;
        else if(num[i]>=30&&num[i]<=39)
            gp[i]=0;
        }
    printf("\nGPA:\n");

    for(i=0;i<sn;i++)
    {
        printf("%s : %.2f",sub_name[i], gp[i]);
        printf("\n");
        total=total+gp[i];
    }

     printf("\nCGPA : %.2f\n",(total/sn));

    return 0;
}
