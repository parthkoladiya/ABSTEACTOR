#include<iostream.h>
#include<conio.h>
class Power
{
 private:
 int a , b , ans1 , ans2 , ans3;
 float total;
 private:
		void setdata()
		{
		  cout << "Enter your 2 value" << endl;
		  cin >> a >> b ;
		}
		void sumdata()
		{
		 ans1 = a + b;
		 cout << "your first ans is == > " << ans1 << endl;
		}
		void substrdata()
		{
		 ans2 = a - b;
		 cout << "Your secound ans is == > " << ans2 << endl;
		}
		void multidata()
		{
		 ans3 = a * b;
		 cout << "Your third ans is == > " << ans3 << endl;
		}
		void devisioundata()
		{
		  total = a / b;
		  cout << "Your last ans is == >" << total << endl;
		}
   public:
		void accessdata()
		{
		  setdata();
		  sumdata();

		}
		void secoudata()
		{
		 setdata();
		 substrdata();
		}
		void combinedata()
		{
		  setdata();
		  multidata();
		}
		void getdata()
		{
		  setdata();
		  devisioundata();
		}
};
class Calculate : public Power
{
  public:
		void printdata()
		{
		 accessdata();
		 secoudata();
		 combinedata();
		 getdata();
		}
};
void main()
{
 int choose;
 Calculate obj;
 clrscr();
 cout << "press 1 to addisioun \n press 2 to substritoun \n press 3 to multiplaction \n press 4 to devieioun" << endl;
 cout << "Enter your choose" << endl;
 cin >> choose ;
 if(choose==1)
 {
  obj.accessdata();
 }
 else if(choose==2)
 {
  obj.secoudata();
 }
 else if(choose==3)
 {
  obj.combinedata();
 }
 else if(choose==4)
 {
  obj.getdata();
 }

 getch();
}