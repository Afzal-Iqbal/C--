#include <iostream>
using namespace std;

class Stack{
    private:
    int size;
    int top;
    int* arr= new int[size];
    public:
    // Stack(int s) : size = s, top = -1 {}
    Stack(int s){
        size = s;
        top = -1;
    };

    // insertion function
    bool isEmpty(){
        // if(top == -1)return false;
        // else true;
        return top == -1 ;
    };
    bool ifFull(){
        return top == size -1;
    }
    void insert(int d){
        if(ifFull()) return ;
        else{
            top++;
            arr[top] = d;
        }

    }
    void Delete(){
        if(isEmpty()) return;
        else{
            top--;
            return;
        }
    }
    void peek (){
        cout << "this is the peek elements" << arr[top] << endl;
    }
    void display(){
        if(isEmpty()) return ;
        else{
            int temp = top;
            while (temp != -1)
            {
                /* code */
                cout << arr[temp] << endl;
                temp--;
            }
            
        }
    };

};

int main(){
    Stack s(6);
    s.insert(23);
    s.insert(24);
    s.insert(25);
    s.insert(26);
    s.isEmpty();
    s.peek();
    s.display();
    
    s.Delete();
    cout << "\n";
    s.display();
    s.peek();
    return 0;
}