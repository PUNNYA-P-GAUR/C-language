
#include<stdio.h>
#include <stdlib.h>
int i = 0;
struct sinfo {
	char fname[50];
	char lname[50];
	int roll;
	float cgpa;
	float attendence;
	long long int mobile_number;
} st[55];

// "ADD STUDENT" CODE BY RAGHAV GUPTA AND ANUKUL GANGWAR;

void add_student()   
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first name of student\n");
	scanf("%s", st[i].fname);
	printf("Enter the last name of student\n");
	scanf("%s", st[i].lname);
	printf("Enter the Roll Number\n");
	scanf("%d", &st[i].roll);
	printf("Enter the CGPA you obtained\n");
	scanf("%f", &st[i].cgpa);
	printf("Enter the overall attendence\n");
	scanf("%f", &st[i].attendence);
	printf("Enter the Mobile nuber\n");
	scanf("%lld", &st[i].mobile_number);
	i = i + 1;
}

// "VIEW DETAILS" CODE BY PUNNYA PRASOON GAUR AND NIKHIL GARG;

void view()
{
	int x;
	printf("Enter the Roll Number of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[j].roll) {
			printf("The Students Details are\n");
			printf("The First name is %s\n",st[i].fname);
			printf("The Last name is %s\n",st[i].lname);
			printf("The CGPA is %f\n",st[i].cgpa);
			printf("overall attendence is %f\n",st[i].attendence);
			printf("mobile number is %lld\n",st[i].mobile_number);
		}
		else{
		    printf("No such Roll number found\n");
		}
		break;
	}
}

// "REMOVE DETAILS" CODE BY SUDEEP JAIN AND RAHUL PATHAK;

void removed()
{
	int a;
	printf("Enter the Roll Number which you want to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number is removed Successfully\n");
}

// "MODIFY DETAILS" CODE BY SUMIT KUMAR AND RAGHAV MITTAL;

void modify()
{

	printf("Enter the roll number to update the entry : ");
	int x;
	scanf("%d", &x);
	int c=0;
	for (int j = 0; j <=i; j++) {
		if (st[j].roll==x) {
		    c=c+1;
			printf("1. first name\n2. last name\n3. roll no.\n4. CGPA\n5. overall attendence\n6. Mobile number\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new first name : \n");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new roll numnber : \n");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf("%f", &st[j].cgpa);
				break;
			case 5:
				printf("Enter the new overall attendence : \n");
				scanf("%f", &st[j].attendence);
				break;
			case 6:
				printf("Enter the new mobile number \n");
				scanf("%lld", &st[j].mobile_number);
				break;
			}
			
		}
	}
	if(c==0){
	    printf("No such roll number found\n");
	}
	else{
	    printf("UPDATED SUCCESSFULLY.\n");
	}
}
// All student details code designed by Punnya Prasoon Gaur and Sudeep Jain.

void alldetaisls()
{
	for (int j = 0; j <= i; j++) {
			printf("The details of %d students are:-\n");
			printf("The First name is %s\n",st[i].fname);
			printf("The Last name is %s\n",st[i].lname);
			printf("The CGPA is %f\n",st[i].cgpa);
			printf("overall attendence is %f\n",st[i].attendence);
			printf("mobile number is %lld\n",st[i].mobile_number);
		}
	if{
		printf("NO SUCH RECORD FOUND.\n");}
    break;
}
// Main code designed by Mayank Kumar Dhaiya and Gyan Prakash Gupta

void main()

{
	int choice, count;
	while (i = 1) {
		printf("The Task that you want to perform\n");
		printf("1. Add the Student Details\n");
		printf("2. Find the Student Details by Roll Number\n");
		printf("3. Delete the Students Details by Roll Number\n");
		printf("4. Update the Students Details by Roll Number\n");
		printf("5. To Exit\n");
		printf("Enter your choice to find the task\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			view();
			break;
		case 3:
			removed();
			break;
		case 4:
			modify();
			break;
		case 5:
			alldetaisls();
			break;
		case 6:
			exit(0);
			break;
		default:
		printf("!!invalid no entered!!");
		break;
		}
	}
}
