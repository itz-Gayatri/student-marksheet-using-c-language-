#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno, no_of_subjects;
char stud_name[20];
int *marks;
string Sub_List [5 ] = {"maths","English","chemsitry","physics"};
public:
student(int rno,char *name, int nos)
{//Parameterized Constructor
rollno=rno;
strcpy(stud_name, name);
no_of_subjects=nos;
marks=new int[no_of_subjects]; //dynamically memory allocated for storing marks
}
void accept();
void display();
};
void student::accept()
{
for(int i=0; i<no_of_subjects; i++)
{
cout<<"\n\n Enter Marks for Subject ";
cout<< Sub_List[i]<<" : ";
cin>>marks[i];
}
}

void student::display()
{
cout<<"\n ---------------------";
cout<<"\n\n Student Information";
cout<<"\n ---------------------";
cout<<"\n\n Roll no :"<<rollno;
cout<<"\n\n Name : "<<stud_name;
for(int i=0; i<no_of_subjects; i++)
{
cout<<"\n\nMarks of Subject ";
cout<< Sub_List[i]<<":"; 
cout<<marks[i];
}
cout<<"\n ---------------------";
}
int main()
{
int rollno, no_of_subjects;
char stud_name[20];
int cnt, i;
cout<<"\n Enter No. of Students You Want?";
cin>>cnt;
for(i=0; i<cnt; i++)
{
cout<<"\n -----------------------------------------\n";
cout<<"\n Enter Roll No:";
cin>>rollno;
cout<<"\n Enter Name:";
cin>>stud_name;
cout<<"Enter No. of Subjects:";
cin>>no_of_subjects;
cout<<"\n --------------";
student st(rollno, stud_name, no_of_subjects);
st.accept();
st.display();}

return 0;
}