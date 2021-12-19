#include<stdio.h>
int main()
{

    float n1,n2,n3,n4,n5;
    double avg1, avg2;

    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    avg1 = ((n1*2)+(n2*3)+(n3*4)+n4) / 10;
    printf("Media: %.1lf\n", avg1);

    if (avg1 >= 7.0) printf("Aluno aprovado.\n");
    else if (avg1 < 5.0) printf("Aluno reprovado.\n");

    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1lf\n", n5);
        avg2 = (avg1 + n5) / 2;
        if (avg2>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", avg2);
    }

    return 0;
}
