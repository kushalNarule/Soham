#include <iostream>
#include <string>
using namespace std;
class student
{ 
    string name,clas,dob,blood_grp,addr,lic;
    int *rollno,div,mob;
    public:
        friend class teacher;
    student()
    {
        rollno=new int;
        name,clas,dob,blood_grp,addr,lic=" ";
        *rollno,div,mob=0;
    }
    student(student &obj)
    {
        this->name=obj.name;
        this->addr=obj.addr;
        this->clas=obj.clas;
        this->div=obj.div;
        this->rollno=obj.rollno;
        this->mob=obj.mob;
        this->blood_grp=obj.blood_grp;
        this->dob=obj.dob;
    }
    ~student()
    {
        delete rollno;
    }
    
    inline static void display_header()
    {
        cout<<"\n---------STUDENT INFORMATION DATA-----------";
        cout<<"\n name \t rollno \tdivision \tclass \tdateofbirth \tmobile \tblood_grp ";
    }
    void getdata()
    {
        cout<<"\n Enter rollno :";
        cin>>*rollno;
        cout<<"\n Enter name :";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter division :";
        cin>>div;
        cout<<"Enter mob :";
        cin>>mob;
        cout<<"Enter class :";
        cin>>clas;
        cout<<"Enter dob :";
        cin>>dob;
        cout<<"Enter blood group :";
        cin>>blood_grp;
        cout<<"Enter address :";
        cin>>addr;
        cout<<"Enter license number :";
        cin>>lic;
        /*cout<<"\n enter class,date of birth, blood group, address, license number ";
        cin>>clas>>dob>>blood_grp>>addr>>lic;*/
    }
    void display()
    {
        cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<div<<"\t"<<clas<<"\t"<<dob<<"\t"<<mob<<"\t"<<blood_grp<<"\t";
    }
};
class teacher
{
    int id;
    public:
        teacher()
        {
            id=0;
        }
        void display_t(student &obj1,int t_d)
        {
            try
            {
                if(obj1.div==t_d)
                obj1.display();
                else
                throw(obj1.div);
            }
            catch(int x)
            {
                cout<<"student and teacher division can not matched";
            }
        }
};
int main()
{
    student s[10];
    teacher t;
    int ch, count=0;
    do
    {
        cout<<"\n------------------STUDENT INFORMATION SYSTEM------------------";
        cout<<"\n---------------------Menu-------------------";
        cout<<"\n 1. Add student record";
        cout<<"\n 2. Display student record";
        cout<<"\n 3. Copy constructor";
        cout<<"\n 4. Division wise information";
        cout<<"\n 5. Exit";
        cout<<"\n Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                s[count].getdata();
                count++;
                break;
            case 2:
                student::display_header();
                for(int i=0;i<count;i++)
                {
                    s[i].display();
                }
                break;
            case 3:
                {
                    cout<<"\n copy constructor";
                    student s1;
                    s1.getdata();
                    student s2(s1);
                    s2.display();
                }
                break;
            case 4:
                int t_div;
                cout<<"\n Enter division :";
                cin>>t_div;
                for(int i=0;i<count;i++)
                {
                    t.display_t(s[i],t_div);
                }
                break;
            case 5:
                exit(0);
        }
    }while(ch!=5);
return 0;
}
/*-----------------STUDENT INFORMATION SYSTEM------------------
---------------------Menu-------------------
 1. Add student record
 2. Display student record
 3. Copy constructor
 4. Division wise information
 5. Exit
 Enter choice: 1
 Enter rollno :35
 Enter name :NIKITA
 Enter division :1
 Enter mob :222
 Enter class :SE
 Enter dob :27/10/2004
 Enter blood group :B+
 Enter address :PUNE
 Enter license number :234
 ------------------STUDENT INFORMATION SYSTEM------------------
---------------------Menu-------------------
 1. Add student record
 2. Display student record
 3. Copy constructor
 4. Division wise information
 5. Exit
 Enter choice: 2
 ---------STUDENT INFORMATION DATA-----------
 name 	 rollno 	division 	class 	dateofbirth 	mobile 	blood_grp 
NIKITA	0x11efeb0	1	SE	27/10/2004	222	B+	
------------------STUDENT INFORMATION SYSTEM------------------
---------------------Menu-------------------
 1. Add student record
 2. Display student record
 3. Copy constructor
 4. Division wise information5. Exit
 Enter choice: 3
 copy constructor
 Enter rollno :36
 Enter name :KOMAL
 Enter division :1
 Enter mob :389
 Enter class :SE
 Enter dob :29/02/2004
 Enter blood group :AB+
 Enter address :PUNE
 Enter license number :221
------------------STUDENT INFORMATION SYSTEM------------------
---------------------Menu-------------------
 1. Add student record
 2. Display student record
 3. Copy constructor
 4. Division wise information
 5. Exit
 Enter choice: 4
 Enter division :1
 ------------------STUDENT INFORMATION SYSTEM------------------
---------------------Menu-------------------
 1. Add student record
 2. Display student record
 3. Copy constructor
 4. Division wise information
 5. Exit
 Enter choice: 5
*/