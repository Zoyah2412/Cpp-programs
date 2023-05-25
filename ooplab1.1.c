#include<stdio.h>
struct student{
    char n[100];
    int roll;
    int marks[5];
};
int main(){
    struct student s;
    printf("Enter name of the student : ");
    scanf("%[^\n]",s.n);
    printf("Enter roll numnber of the student : ");
    scanf("%d",&s.roll);
    printf("Enter marks of student in five subjects :\n");
    for(int i=0;i<5;i++)
        scanf("%d",&s.marks[i]);
    printf("\nName : %s\nRoll number : %d\n",s.n,s.roll);
    printf("Marks of the student in five subjects :\n");
    for (int i=0;i<5;i++)
        printf("%d\n", s.marks[i]);
	return 0;
}