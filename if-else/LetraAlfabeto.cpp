#include <iostream>
using namespace std;

char character='A';

int main(){

if (character>=65 && character<=90){
    cout<<"upper-case alphabet";
} else if (character>=97 && character<=122){
    cout << "lower-case alphabet";
} else {
    cout << "not an alphabet";
}

}
