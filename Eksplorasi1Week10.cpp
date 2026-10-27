#include <iostream>
using namespace std;

int main (){
    int arr[] = {10,20,30};
    int *ptr=arr;

    cout << *ptr++ << endl;
    cout << *ptr << endl;
    cout << (*ptr)++ << endl;
    cout << *ptr << endl;
    cout << ++*ptr << endl;
    
}