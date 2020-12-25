#include<iostream>
#include<cstring>
using namespace std;

char A;
char before(char x){
    if(x == 'A'){
         A = 'Z';
    }else if(x >= 'A' && x <= 'Z'){
         A = x -1;
    }else if(x < 65 || x > 90){
         A = '0';
    }
    return A;

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
