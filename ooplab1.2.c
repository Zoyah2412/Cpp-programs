#include<stdio.h>
struct student{
	char name[50];
	int roll_no;
	int marks[5];
	int total_marks;
	float percentage;
};
void create(struct student *s,int size){
	for(int i=0;i<size;i++){
		printf("Enter the name of the student : ");
		scanf("%[^\n]",s[i].name);
		printf("Enter the roll number of the student : ");
		scanf("%d",&s[i].roll_no);
		s[i].total_marks=0;
        printf("Enter marks of the student in 5 subjects : ");
		for(int j=0;j<5;j++)
			scanf("%d",&s[i].marks[j]);
	}
}
void totalmarksandpercentage(struct student *s,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<5;j++)
			s[i].total_marks+=s[i].marks[j];
		float c=1.0*s[i].total_marks;
		s[i].percentage=c/5;
	}
}
void display(struct student *s,int size){
	for(int i=0;i<size;i++){
		int j;
		printf("\nName of the student : %s",s[i].name);
		printf(" Roll number of the student is : %d",s[i].roll_no);
		printf(" Total marks scored by the student is : %d",s[i].total_marks);
		printf(" Percentage obtained by the student is : %.2f",s[i].percentage);
	}
}
void range(struct student *s,int size){
	float a,b;
	printf("\nEnter the range of percentage for details to be displayed : ");
	scanf("%f %f",&a,&b);
	for(int i=0;i<size;i++){
		if(s[i].percentage>=a && s[i].percentage<=b){
			printf("\nName of the student : %s",s[i].name);
			printf("\nRoll no. of the student : %d",s[i].roll_no);
		}
	}
}
void sort(struct student *s,int size){
	for(int i=0;i<size;i++){
		for(int j=1;j<size;j++){
			if(s[i].total_marks>s[j].total_marks){
				struct student temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}
int main(){
	int i,n;
	printf("Enter no. of students whose details you want to input :");
	scanf("%d",&n);
	struct student arr[n];
	create(arr,n);
    totalmarksandpercentage(arr,n);
	range(arr,n);
	printf("\nBefore sorting the list : ");
	display(arr,n);
	sort(arr,n);
	printf("\nAfter sorting the list : ");
	display(arr,n);
	return 0;
}