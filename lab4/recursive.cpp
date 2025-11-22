#include <iostream>
using namespace std;
// demostrating the functionality of 

// void printR(int value){
//     if(value <1)
//         return;
//     else{
//         cout << value << " ";
//         printR(value -1);
//     }
// }

// int main(){
//     int test = 4;
//     printR(test);
// }


void RecursiveFunction(int value){
    if(value < 1)
        return;
        else{
            
            RecursiveFunction(value-1);
            cout << value << " "  ;
            return;
        }

}
//6 X
//5 x
//4 x
//3 x
//2 x
//1 x
//0 TRUE RETURN TO 1 


void RecursiveFunctionO(int value){
    if(value < 1)
        return;
        else{
            
            cout << value << " "  ;
            RecursiveFunction(value-1);
            return;
        }

}


int main() {
    int test = 6;
    RecursiveFunction(test); // First call
    cout << endl;
    RecursiveFunctionO(test); // Second call
    return 0;
}