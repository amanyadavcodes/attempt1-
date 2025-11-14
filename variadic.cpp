#include <iostream>
#include <string>
//Infinite amount of input 
using namespace std;


template<typename T >
void func (T t){
    cout << t <<endl;

}

template<typename T, typename... Args >
void func (T t, Args...args){
    cout << t <<endl;
    func (args...);
}

int main (){
    string name = "aman";
    func(1);
    func("hitesh" , name , 1 ,2 ,3 ,5);
}