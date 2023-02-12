#include <iostream>

using namespace std;

class queue1
{

private:
    int noi;
    int rear;
    int frnt;
    int maxSize;
    int *arr;

public:
    queue1(int s);
    ~queue1();
    void enqueue(int x);
    int dequeue();
    int peekFront();
    bool isEmpty();
    bool isFull();
    int qsize();


};

queue1::queue1(int s)
{

    arr=new int[s];
    maxSize=s;
    noi=0;
    frnt=0;
    rear=-1;

}

queue1::~queue1()
{

    delete []arr;

}


bool queue1::isEmpty()
{

    if(frnt==-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool queue1::isFull()
{

    if(rear==maxSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void queue1::enqueue(int x)
{

    if(isFull())
    {
        cout << "Queue is full." << endl;
    }
    else
    {

        rear++;
        arr[rear]=x;
        noi++;

    }

}

int queue1::dequeue()
{

    if(isEmpty())
    {
        cout << "Queue is empty." << endl;
        return -999;
    }
    else
    {

        int y=arr[frnt];
        frnt++;
        noi--;
        return y;

    }

}

int queue1::peekFront()
{

    if (isEmpty())
    {
        cout << "Queue is Empty." << endl;
        return -999;
    }
    else
    {
        return arr[frnt];
    }

}

int queue1::qsize()
{

    return noi;

}

int main()
{

    queue1 q1(4);
    q1.enqueue(10);
    q1.enqueue(20);
    cout<<q1.dequeue()<<endl;
    q1.enqueue(70);
    cout<<q1.peekFront()<<endl;
    q1.enqueue(21);
    q1.enqueue(43);



    return 0;
}
