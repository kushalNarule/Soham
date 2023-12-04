#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
    int real,img;
    public:
            complex()
            {
                real=img=0;
            }
            complex operator +(complex);
            complex operator *(complex);

            friend ostream& operator << (ostream& output,complex& c)
            {
                output<<c.real<<"+"<<c.img<<"i"<<endl;
            }
            friend istream& operator >> (istream& input,complex& c)
            {
                cout<<"Enter real part of complex number : ";
                input>>c.real;
                cout<<"Enter imaginary part of complex number : ";
                input>>c.img;
            }

};
complex complex::operator +(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.img=img + c.img;
    return temp;

}
complex complex::operator *(complex c)
{
    complex temp;
    temp.real=((real*c.real)-(img*c.img));
    temp.img=((real*c.img)+(img*c.real));
    return temp;

}
int main()
{
    complex c1,c2,c3,c4;
    int p;
    do 
    {
        cout<<"______________________________MENU___________________________________";
        cout<<"\n1. call default constructor \n";
        cout<<"\n2. Enter complex number \n";
        cout<<"\n3.Display complex number\n";
        cout<<"\n4. addition of complex number \n";
        cout<<"\n5. multiplication of complex number \n";
        cout<<"\n6. Exit \n";
        cout<<"Enter your choice : ";
        cin>>p;
        switch(p)
        {
            case 1 : cout<<"Default constructor ";
                     cout<<c1;
                     break;

            case 2 : cout<<"Enter 1st complex number ";
                     cin>>c1;
                     cout<<"Enter 2nd complex number ";
                     cin>>c2;
                     break;
            case 3 : cout<<" 1st complex number is = ";
                     cout<<c1;
                     cout<<" 2nd complex number is = ";
                     cout<<c2;
                     break;
            case 4 : cout<<"Addition is : ";
                     c3=c1+c2;
                     cout<<c3;
                     break;
            case 5 : cout<<"multiplication is : ";
                     c4=c1*c2;
                     cout<<c4;
                     break;
            case 6 :
                        exit (0);

        }

    }while(p!=0);
return 0;
}
/*______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 1
Default constructor 0+0i
______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 2
Enter 1st complex number Enter real part of complex number : 3
Enter imaginary part of complex number : 4
Enter 2nd complex number Enter real part of complex number : 5
Enter imaginary part of complex number : 3
______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 3
 1st complex number is = 3+4i
 2nd complex number is = 5+3i
______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 4
Addition is : 8+7i
______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 5
multiplication is : 3+29i
______________________________MENU___________________________________
1. call default constructor

2. Enter complex number

3.Display complex number

4. addition of complex number

5. multiplication of complex number

6. Exit
Enter your choice : 6

--------------------------------
Process exited after 23.05 seconds with return value 0
Press any key to continue . . .
*/