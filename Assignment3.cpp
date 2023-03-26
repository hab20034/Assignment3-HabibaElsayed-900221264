#include "Person.h"
#include "queue.h"
using namespace std;

		Person::Person ();
		void Person::setname(string n)
		{
			Name=n;
		}
		string Person::getname()
		{
			return Name; 
		}
		void Person::setid(int i)
		{
			ID=i;
		}
		int Person::getid()
		{
			return ID;
		}
		void Person::setage(int a)
		{
			age=a;
		}
		int Person::getage()
		{
			return age;
		}
		void Person::printinfo()
		{
			string j=Name;
			cout << j << "\t" << ID << "\t" << age << endl;
		}
		
	
		void Customer::setmID(int mID)
		{
			mechanicID=mID;
		}
		int Customer::getmID()
		{
			return mechanicID;
		}
		void Customer::setappointment(int h, int m)
		{
			appointment.hrs=h; appointment.mins=m;
		}
		Appointment Customer::getappointment()
		{
			return appointment;
		}
		bool Customer::operator == (Customer &b){
			if (A.hrs == b.A.hrs && A.mins == b.A.mins)
				return true;
			else return false;
		}
		
		
		bool Mechanic::isAvailable(int h, int m)
		{
			for (int i=0; i<=24; i++)
			{
				if(a[i].hrs==h&&a[i].mins==m)
					return false;
				else
					return true;
			}
		}
		
		void Mechanic::setAppointment (int h, int m){
			while(count!=24)
			{
				a[count].hrs=h; a[count].mins=m;
			}
		}


		queue::queue(){
			front=0; rear=MAX-1; count=0;
		}
		bool queue::isEmpty(){
			if (count==0) return true;
			else return false;
		}
		bool queue::isFull(){
			if (count==MAX) return true;
			else return false;
		}
		void queue::EnQueue(T element){
			if(isFull()) cout << "Full" << endl;
			else{
				rear=(rear+1)%MAX;
				item[rear]=element;
				count++;
			}
		}
		void queue::DeQueue(){
			if(isEmpty()) cout << "Empty" << endl;
			else {
				front=(front+1)%MAX;
				count--;
			}
		}

int main ()
{
	Mechanic mechanics[3];//number of mechanics in the workshop
	for (int i=0; i<3; i++)
	{
		char x[20]; int id; int a;
		cout << "Enter Mechanic info" << endl;
		cin >> x >> id >> a;
		mechanics[i].setname(x); mechanics[i].setid(id); mechanics[i].setage(a);
	}
	queue <string>q;
	Customer C[4]; 
	C1.setname(x); C1.setid(id); C1.setage(a);
	int h; int m; 
	for(int i=0; i<4;i++)
	{
		string x; int id; int a;
		cout << "Enter customer info" << endl;
		cin >> x >> id >> a;
		C[i].setname(x); C[i].setid(id); C[i].setage(a);
		cout << "Enter the customer's preferred time" << endl;
		cin >> h >> m; 
		for (int j=0; j<3; j++)
	{
		if (mechanics[j].isAvailable(h, m))
		{
			C[i].setmID(mechanics[j].getid());
			C[i].setappointment(h,m)
			mechanics[i].setAppointment(h, m);
			q.EnQueue(x);
			break;
		}	
	}
	}

}
