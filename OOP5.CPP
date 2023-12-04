#include<iostream>
using namespace std;
template<class T>
class sort
{
	
	T a[50];
	int n;
	public:
	void accept()
	{
		cout<<"\n ENTER THE NO OF ELEMENTS IN ARRAY";
		cin>>n;
		cout<<"ENTER THE ELEMENTS"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
	}
	void selection_sort()
	{
		T temp;
		for (int i=0;i<n-1;i++)
		{
			int min=i;
			for (int j=i+1;j<n;j++)
			{
				if (a[min]>a[j])
				{
					min=j;
				}
			}
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	void display()
	{   cout<<"SORTED ARRAY IS:";
		for (int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		} 
	}
};
int main()
{
 sort<int>s1;
 sort<float>s2;
 int ch;
 do
 {
 	cout<<"_________________________MENU_________________________"<<endl;
 	cout<<"\n 1. FOR INTEGER DATA"<<endl;
 	cout<<"\n 2. FOR FLOAT DATA"<<endl;
 	cout<<"\n 3. EXIT "<<endl;
 	cout<<"\n ENTER THE CHOICE"<<endl;
 	cin>>ch;
 switch(ch)
 {
 	
   case 1:
  	    s1.accept();
  	    s1.selection_sort();
  	    s1.display();
  	    break;
    case 2:
  	   s2.accept();
  	   s2.selection_sort();
  	   s2.display();
  	   break;
     case 3:
     	exit(0);
     	
  	   
  	   
  	   
  	   
 }
 }while(ch!=3);
}
/*_________________________MENU_________________________

 1. FOR INTEGER DATA

 2. FOR FLOAT DATA

 3. EXIT

 ENTER THE CHOICE
1

 ENTER THE NO OF ELEMENTS IN ARRAY3
ENTER THE ELEMENTS
2
1
5
SORTED ARRAY IS:1
2
5
_________________________MENU_________________________

 1. FOR INTEGER DATA

 2. FOR FLOAT DATA

 3. EXIT

 ENTER THE CHOICE
2

 ENTER THE NO OF ELEMENTS IN ARRAY3
ENTER THE ELEMENTS
2.4
5.2
2.2
SORTED ARRAY IS:2.2
2.4
5.2
_________________________MENU_________________________

 1. FOR INTEGER DATA

 2. FOR FLOAT DATA

 3. EXIT

 ENTER THE CHOICE
3

--------------------------------
Process exited after 33.93 seconds with return value 0
Press any key to continue . . .




*/