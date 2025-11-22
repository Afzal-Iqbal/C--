#include <iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int size;
        int* arr = new int[size];

    public:
        Queue(int s): size = s, front = -1, rear = -1 {};
}