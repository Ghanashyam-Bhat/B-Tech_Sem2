//5. Write a C program to store and print name, SRN, subject and FSA marks of students using
//structure.
#include <stdio.h>
struct sub
{
	char subj[20];
    int marks;
};
struct std
{
    char srn[50];
    char name[50];
	struct sub subject[50];
};

int main()
{
    struct std s1;
    int n;
    printf("Enter the number of subjects:\n");scanf("%d", &n);fflush(stdin);
    printf("Enter the student's srn:\n");scanf("%s", s1.srn);fflush(stdin);
    printf("Enter the student's name:\n");scanf("%[^\n]s", s1.name);fflush(stdin);
    
    for (int i=0; i<n; i++)
	{printf("Enter the subject:\n");scanf("%[^\n]s",s1.subject[i].subj);fflush(stdin);}

    for (int j = 0; j <n; j++)
	{printf("Enter the marks of %s:\n",s1.subject[j].subj);scanf("%d", &s1.subject[j].marks);}

    printf("Student's srn:%s\n", s1.srn);
    printf("Student's name:%s\n", s1.name);
    for (int q = 0; q < n; q++)
        printf("\nMarks of %s\t:\t%d\n",s1.subject[q].subj, s1.subject[q].marks);
    return 0;
}