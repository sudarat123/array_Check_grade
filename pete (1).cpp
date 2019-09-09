/*Program test array in Compro */
#include<iostream>
#include<string>
using namespace std;
void ListStudent(string name[100],int score[100]);
char CalGrade(int score);

int main()
{
	int num,score[100];
	string name[100];
	cout << "Input number of student : ";
	cin >> num;
	for(int i = 0;i<num;i++)
	{
		cout << "Input name : ";
		cin >> name[i];
		cout << "Input score " << i+1 << " : ";
		cin >> score[i];
	}
	cout << endl;
	ListStudent(name,score);
	return 0;
}

void ListStudent(string name[100],int score[100])
{
	for(int i = 0;i < 100;i++)
	{
		if (name[i] != "")
		{
			cout << "Student name : " << name[i] << " Score " << i+1 << " = " << score[i]; 
			cout << " You grade is " << CalGrade(score[i]) << endl;
		}
		else {break;}
	}
	
}
char CalGrade(int score)
{
	char grade;
	if (score >= 80)
	{
		grade = 'A';
	}
	else if(score >= 70)
	{
		grade = 'B';
	}
	else if(score >= 60)
	{
		grade = 'C';
	}
	else if(score >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	return grade;
}