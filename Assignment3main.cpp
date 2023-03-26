#include "Person.h"
#include "queue.h"
using namespace std;

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
