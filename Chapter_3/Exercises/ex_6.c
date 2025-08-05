#include <stdio.h>

int main()
{
    int matric_total_marks, matric_obtained_marks, inter_total_marks, inter_obtained_marks, entrance_total_marks, entrance_obtained_marks;
    printf("Enter Matric total marks : ");
    scanf("%d", &matric_total_marks);
    printf("Enter Matric obtained marks : ");
    scanf("%d", &matric_obtained_marks);
    printf("Enter inter total marks : ");
    scanf("%d", &inter_total_marks);
    printf("Enter inter obtained marks : ");
    scanf("%d", &inter_obtained_marks);
    printf("Enter entrance total marks : ");
    scanf("%d", &entrance_total_marks);
    printf("Enter entrance obtained marks : ");
    scanf("%d", &entrance_obtained_marks);
    double per_matric, per_inter, per_entrance;
    per_matric = ((double)matric_obtained_marks / matric_total_marks) * 100;
    per_inter = ((double)inter_obtained_marks / inter_total_marks) * 100;
    per_entrance = ((double)entrance_obtained_marks / entrance_total_marks) * 100;
    if (per_matric >= 60 && per_inter >= 65 && per_entrance >= 65)
    {
        printf("You are Eligible for admission\n");
    }
    else
    {
        printf("You are not Eligible for admission\n");
    }

    return 0;
}