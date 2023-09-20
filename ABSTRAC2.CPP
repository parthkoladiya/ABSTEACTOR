#include<iostream.h>
#include<conio.h>
class Area
{
  private:
   int s1,s2,s3,l,h,ans2,ans3,ans4;
   float r,ans1,ans5;
  private:
		void firstdata()
		{
		 //circl area;
		 cout << "Enter your r valur" << endl ;
		 cin >> r;
		 ans1 = 3.14 * r * r;
		 cout << "Your circle area is == >" << ans1 << endl;
		}
		void secounddata()
		{
		//triangle area;
		cout << "Enter your 3 triangle sides" << endl;
		cin >> s1 >> s2 >> s3 ;
		ans2 = s1 * s2 * s3;
		cout << "Your Triangel area is == > "  << ans2 << endl;
		}
		void thirddata()
		{
		 // square area;
		 cout << "Enter your  1 value of square " << endl;
		 cin >> l;
		 ans3 = l * l * l * l;
		 cout << "Your square Area is == > " << ans3 << endl;
		}
		void secoundlastdata()
		{
		 // rectangle area ;
		 cout << "Enter your 2 value " << endl;
		 cin >> l >> h ;
		 ans4 = l * h;
		 cout << "Your rectangle area is == > " << ans4 <<endl;
		}
		void lastdata()
		{
		 //sylinder area;
		 cout << "Enter your 2 value " << endl;
		 cin  >> r >> h;
		 ans5 = 3.14 * r * r * h;
		 cout << "Your sylinder area is == >" << ans5 <<endl;
		}
  public:
		void access()
		{
		 firstdata();

		}
		void printdata()
		{
		 secounddata();
		}
		void getdata()
		{
		  thirddata();
		}
		void showdata()
		{
		  secoundlastdata();
		}
		void finedata()
		{
		  lastdata();
		}
};
class Child : public Area
{
  public:
	       void displaydata()
	       {
		access();
		printdata();
		getdata();
		showdata();
		finedata();
	       }

};
void main()
{
  Area *p;
  Child obj;
  int choose;
  clrscr();
  p=&obj;
  cout << "Enter 1 to find circle area \n Enter 2 for find riangle \n Enter 3 to find square \n Enter 4 to find rectanglr \n Enter 5 to find sylinder"<< endl;
  cout << "choose your number " << endl;
  cin >> choose;
  if (choose==1)
  {
   p->access();
  }
  else if (choose==2)
  {
   p->printdata();
  }
  else if(choose==3)
  {
   p->getdata();
  }
  else if(choose==4)
  {
   p->showdata();
  }
  else if(choose==5)
  {
   p->finedata();
  }
  else
  {
   cout << "retry please";
  }
  cout << "Thankyou for visit";
  getch();
}
