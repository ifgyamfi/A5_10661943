//Author: Isaac Frimpong Gyamfi
//ID: 10661943
//A program to take students details and print their scores and grade to a file


#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;


// The struct for  student
struct student {
	int idNumber;
	string name;
	char gender;
	int age;
	double score;
	char grade;

};

student newStudent[5];

int main() 
{
	
	int x,j,y;
	int numOfMales = 0, numOfFemales = 0, sumOfMales = 0, sumOfFemales = 0, count, sumAge = 0;
	double avgScore = 0.0, avgAge = 0.0, sumScore = 0.0;
	string file;
	
	
	for(x = 0; x < 5; x++)
	{
		cout<<"Enter your student "<<x + 1<<" id number : ";
		cin>>newStudent[x].idNumber;
		cout<<"Enter student "<<x + 1<<" name: ";
		cin>>newStudent[x].name;
		cout<<"Enter student "<<x + 1<<" gender: ";
		cin>>newStudent[x].gender;
		cout<<"Enter the student "<<x + 1<<" age: ";
		cin>>newStudent[x].age;
		cout<<"Enter the student "<<x + 1<<" score: ";
		cin>>newStudent[x].score;
		
			if (newStudent[x].score >= 80 && newStudent[x].score <= 100) {
			newStudent[x].grade = 'A';
			}
			else if (newStudent[x].score >= 70 && newStudent[x].score <= 79) {
				newStudent[x].grade = 'B';
			}
			else if (newStudent[x].score >= 60 && newStudent[x].score <= 69) {
				newStudent[x].grade = 'C';
			}
			else if (newStudent[x].score >= 50 && newStudent[x].score <= 59) {
				newStudent[x].grade = 'D';
			}
			else if (newStudent[x].score >= 40 && newStudent[x].score <= 49) {
				newStudent[x].grade = 'E';
			}
			else if (newStudent[x].score < 40) {
				newStudent[x].grade = 'F';
			}
			else {
				cout<<"Wrong score entered"<<endl;
			}
			
			sumScore += newStudent[x].score;
		    avgScore =  sumScore / static_cast<double>(5);
		
		    sumAge += newStudent[x].age; // sumAge = sumAge +
		    avgAge = sumAge / 5;	
	}
	
	
	// male and female counts
		for(int j = 0; j < 5; j++){
            if(newStudent[j].gender == 'M' || newStudent[j].gender == 'm')
                numOfMales++;

            else if(newStudent[j].gender == 'F' || newStudent[j].gender == 'f')
                numOfFemales++;
			
			else 
				count;
        }
	system("cls");


//	Make output to the file
	cout<<"\tNo \t\tID \t\tName \t\tAge \t\tGender \t\tScore \t\tGrade "<<endl;
		cout<<"**********************************************************************************************************************************************"<<endl;

		
	for(j = 0; j < 5; j++) 
	{
		cout<<"\t"<<j + 1<<"\t\t"<<newStudent[j].idNumber<<"\t\t"<<newStudent[j].name<<"\t\t"<<newStudent[j].age<<"\t\t"<<newStudent[j].gender<<"\t\t"<<newStudent[j].score<<"\t\t"<<newStudent[j].grade;
		cout<<endl;
	}
		

//	Make output to the file	
	cout<<endl<<"\tAverage Score: "<<avgScore<<endl;
	cout<<"\tAverage Age: " <<avgAge<<endl;
    cout<<"\tMale Count: "<<numOfMales<<endl;
	cout<<"\tFemale count: "<<numOfFemales<<endl;	
	
	cout<<"*********************************************************************************************************************************************"<<endl;

	
	ofstream sndData;
	sndData.open("Student record.txt");
	
	
	//	Make output to the file
	sndData<<"\tNo \t\tID \t\tName \t\tAge \t\tGender \t\tScore \t\tGrade "<<endl;
	sndData<<"*****************************************************************************************************************************************"<<endl;
		
	for(j = 0; j < 5; j++) 
	{
		sndData<<"\t"<<j + 1<<"\t\t"<<newStudent[j].idNumber<<"\t\t"<<newStudent[j].name<<"\t\t"<<newStudent[j].age<<"\t\t"<<newStudent[j].gender<<"\t\t"<<newStudent[j].score<<"\t\t"<<newStudent[j].grade;
		sndData<<endl;
	}
		

//	Make output to the file	
	sndData<<endl<<"\tAverage Score: "<<avgScore<<endl;
	sndData<<"\tAverage Age: " <<avgAge<<endl;
    sndData<<"\tMale Count: "<<numOfMales<<endl;
	sndData<<"\tFemale count: "<<numOfFemales<<endl;
	
	sndData<<"*****************************************************************************************************************************************"<<endl;
	
return 0;
}




