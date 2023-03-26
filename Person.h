#include <iostream>
#include <cstring>
using namespace std;
class Person{
	private:
		string Name;
		int ID;
		int age;
	public:
		Person ();
		void setname(string n);
		string getname();
		void setid(int i);
		int getid();
		void setage(int a);
		int getage();
		void printinfo();
		struct Appointment {
			int hrs, mins;
		};
		Appointment A;
	};
	
class Customer : public Person{
	private:
		int mechanicID;
		Appointment appointment;
	public:
		void setmID(int mID)
		{
			mechanicID=mID;
		}
		int getmID()
		{
			return mechanicID;
		}
		void setappointment(Appointment app)
		{
			appointment=app;
		}
		Appointment getappointment()
		{
			return appointment;
		}
		bool operator == (Customer &b){
			if (A.hrs == b.A.hrs && A.mins == b.A.mins)
				return true;
			else return false;
		}
		
};
class Mechanic: public Person{
	private:
		int counter;
		Appointment a[24];
		int count=0;
	public:
		bool isAvailable(int h, int m)
		{
			for (int i=0; i<=24; i++)
			{
				if(a[i].hrs==h&&a[i].mins==m)
					return false;
				else
					return true;
			}
		}
		
		void setAppointment (int h, int m){
			while(count!=24)
			{
				a[count].hrs=h; a[count].mins=m;
			}
		}
};
