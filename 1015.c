/*int const*p=const int *p;����ʾ*p��ֵ���ܸı䣬��p������ַ���ǿ��Ըı�ģ�int *const p��ʾ p(��ַ)�ǳ��������ɸı䣬����*p��ֵ���Ըı�*/
#include <stdio.h>
#include <stdlib.h>
struct _Student{
    int ID;
    int D;
    int C;
    int rank;
    int sum;    /*sum = D + C   */
};

typedef struct _Student *Student;
int rank(Student s, int H, int L)
{
    if(s->D < L || s->C < L)        return 0;   /* failed */
    else if(s->D >= H && s->C >= H) return 4;   /* best */
    else if(s->D >= H)              return 3;   /* second */
    else if(s->D >= s->C)           return 2;   /* third */
    else                            return 1;   /* fourth */
}

int comp(const void *a, const void *b)
{
    Student s1 = *(Student*)a;
    Student s2 = *(Student*)b;

    if(s1->rank != s2->rank)    return s1->rank - s2->rank;
    else if(s1->sum != s2->sum) return s1->sum - s2->sum;
    else if(s1->D != s2->D)     return s1->D - s2->D;
    else if(s1->ID != s2->ID)   return s2->ID - s1->ID;
    else                        return 0;
}

int main()
{
    int i,N, L, H, M = 0;
    Student students[100000];

    scanf("%d %d %d", &N, &L, &H);
    for( i = 0; i < N; i++)
    {
        Student s = (Student)malloc(sizeof(struct _Student));
        scanf("%d %d %d", &s->ID, &s->D, &s->C);
        s->sum = s->D + s->C;
        if((s->rank = rank(s, H, L)))
            students[M++] = s;
        else
            free(s);
    }

    qsort(students, M, sizeof(Student), comp);

    printf("%d\n", M);
    for( i = M - 1; i >= 0; i--)
        printf("%d %d %d\n", students[i]->ID, students[i]->D, students[i]->C);

    for( i = 0; i < M; i++) free(students[i]);
    return 0;
}
