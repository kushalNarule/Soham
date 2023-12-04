#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class student
{
    private:
       string name;
       int rollno;
       int marks;
    public:
       void getdata()
       {
    ofstream o2;
         o2.open("nnc.txt",ios::app);
         if(o2.fail())
         cout<<"PROBLEM IN FILE CREATION";
         else
         {
            cout<<"ENTER NAME OF THE STUDENT";
            cin>>name;
            cout<<"ENTER THE ROLLNO";
            cin>>rollno;
            cout<<"ENTER THE MARKS";
            cin>>marks;

            o2<<name;
            o2<<" ";
            o2<<rollno;
            o2<<" ";
            o2<<marks;
            o2<<" ";
            o2.close();
         }
       }
       void display()
       {
        ifstream i1;
        i1.open("nnc.txt");
        if(i1.fail())
        cout<<"ERROR IN READING FILE";
        else
        {
            while(!i1.eof())
             {
                i1>>name;
                i1>>rollno;
                i1>>marks;
                cout<<name<<" "<<endl;
                cout<<rollno<<" "<<endl;
                cout<<marks<<" "<<endl;
                
             }
        }
       }
};
int main()
{
    student s1;
    int ch;
    do
    {
        cout<<"\nSTUDENT DATABASE";
        cout<<"\n .MENU";
        cout<<"\n 1.ADD STUDENT RECORD";
        cout<<"\n 2.DISPLAY STUDENT RECORD";
        cout<<"\n 3.EXIT";
        cout<<"\n ENTER YOUR CHOICE";
        cin>>ch;
        switch(ch)
        {
            case 1:
             s1.getdata();
             break;
            case 2:
             s1.display();
             break;
            case 3:
              exit(0);
              break;
        }
    }
     while(ch!=3);
return 0;
}
/*STUDENT DATABASE
 .MENU
 1.ADD STUDENT RECORD
 2.DISPLAY STUDENT RECORD
 3.EXIT
 ENTER YOUR CHOICE1
ENTER NAME OF THE STUDENTXYZ
ENTER THE ROLLNO39
ENTER THE MARKS100

STUDENT DATABASE
 .MENU
 1.ADD STUDENT RECORD
 2.DISPLAY STUDENT RECORD
 3.EXIT
 ENTER YOUR CHOICE2
xyz
39
100
XYZ
39
100
XYZ
39
100

STUDENT DATABASE
 .MENU
 1.ADD STUDENT RECORD
 2.DISPLAY STUDENT RECORD
 3.EXIT
 ENTER YOUR CHOICE3
--------------------------------
Process exited after 63.34 seconds with return value 0
Press any key to continue . . .*/