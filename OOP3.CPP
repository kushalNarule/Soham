#include<iostream>
using namespace std;
class publication
{
    private:
      string name;
      float price;
    public:
      void getdata()
      {
        cout<<"ENTER THE NAME"<<endl;
        cin>>name;
        cout<<"ENTER THE PRICE"<<endl;
        cin>>price;
      }
      void display()
      {
        cout<<"NAME"<<name<<endl;
        cout<<"PRICE"<<price<<endl; 
      }
};
class book:public publication
{
    private:
       int pg_count;
    public:
       void getdata()
       {
        publication ::getdata();
        cout<<"ENTER PG _COUNT"<<endl;
        cin>>pg_count; 
       }                                                                                                                                                                                                                                                              
       void display()
       {
         publication::display();
         cout<<"PG_COUNT:"<<pg_count<<endl;  
       }
};
class tape:public publication
{
   private:
     float playtime;
   public:
     void getdata()
     {
      publication::getdata();
      cout<<"ENTER PLAYTIME"<<endl;
      cin>>playtime;
     }
     void display()
     {
        publication::display();
        cout<<"PLAYTIME"<<playtime<<endl;
     }
};
int main()
{
    book b[10];
    tape t[10];
    int choice=0,bookcount=0,tapecount=0;
   
    do
    {
        
        cout<<"\n1.ADD BOOK";
        cout<<"\n2.ADD TAPE";
        cout<<"\n3.DISPLAY BOOK";
        cout<<"\n4.DISPLAY TAPE";
        cout<<"\n5.EXIT";
        cout<<"\nENTER YOUR CHOICE";
        cin>>choice;
        switch(choice)
        {
            case 1:
              cout<<"\n..........\n";
              cout<<"ADD BOOK:\n";
              b[bookcount].getdata();
              bookcount++;
              break;
              
              
            case 2:
              cout<<"\n..........\n";
              cout<<"ADD TAPE:\n";
              t[tapecount].getdata();
              tapecount++;
              break;
              

            case 3:
               cout<<"\n (books)";
               for(int j=0;j<bookcount;j++)
               {
                b[j].display();
               }
               break;


            case 4:
               cout<<"\n (tape)";
               for(int j=0;j<tapecount;j++)
               {
                t[j].display();
               }
               break;


            case 5:
               cout<<"PROGRAM EXITED SUCCESFULLY"<<endl;
               exit(0);


            default:
               cout<<"\nINVALID";


               
               


        }
        
    }while(choice!=5);
    return 0;
}
/*OUTPUT
1.ADD BOOK
2.ADD TAPE
3.DISPLAY BOOK
4.DISPLAY TAPE
5.EXIT
ENTER YOUR CHOICE1
..........
ADD BOOK:
ENTER THE NAME
Fire
ENTER THE PRICE
900
ENTER PG _COUNT
100
1.ADD BOOK
2.ADD TAPE
3.DISPLAY BOOK
4.DISPLAY TAPE
5.EXIT
ENTER YOUR CHOICE2
..........
ADD TAPE:
ENTER THE NAME
sound
ENTER THE PRICE

80
ENTER PLAYTIME
9.1
1.ADD BOOK
2.ADD TAPE
3.DISPLAY BOOK
4.DISPLAY TAPE
5.EXIT
ENTER YOUR CHOICE3
(books)NAMEFire
PRICE900
PG_COUNT:100

1.ADD BOOK
2.ADD TAPE
3.DISPLAY BOOK
4.DISPLAY TAPE
5.EXIT
ENTER YOUR CHOICE4
(tape)NAMEsound
PRICE80
PLAYTIME9.1

1.ADD BOOK
2.ADD TAPE
3.DISPLAY BOOK
4.DISPLAY TAPE
5.EXIT
ENTER YOUR CHOICE5
PROGRAM EXITED SUCCESFULLY
6*/

