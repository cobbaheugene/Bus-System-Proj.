#include <iostream>
using namespace std;

int main(){
    int busCapacity;
    int input;
    int part1;

    busCapacity=50;


    cin>>input;

    part1=input%busCapacity;

    cout<<50-part1<<endl;

    return 0;
}
