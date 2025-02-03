#include <iostream>
using namespace std;

int main() {
    int X=1;
    int Y=2;
    int temp;
    
    cout<<"X Before: "<<X<<endl;
    cout<<"Y Before: "<<Y<<endl;
    
    temp = X;
    X = Y;
    Y=temp;
    
    cout<<"X After: "<<X<<endl;
    cout<<"Y After: "<<Y<<endl;


    return 0;
}