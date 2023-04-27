//- Write a function to print squares of the first 5 natural numbers.
#include <iostream>

using namespace std;
void sq();
int square(int num);
int main(){
    sq();
    cout<<endl;
    for(int i=1;i<=5;i++){
        square(i);
    }
}
void sq(){
    for(int x=1;x<=5;x++){
        cout<<x*x<<" ";
    }
return;
}


int square(int num){
    int sq=num*num;
    cout<<sq<<" ";
    return 0;

}
