using namespace std;
template <class T>
class queue{ 
	private:
		T item[MAX];
		int rear, front, count;
	public:
		queue();
		bool isEmpty();
		bool isFull();
		void EnQueue(T element);
		void DeQueue();
};

