#include<iostream>
#include<string>
using namespace std;
int main(){

	string name, family;
	float a, b ,c,d;

	cout << "please enter name" << endl;
	cin >> name;

	cout << "please enter family" << endl;
	cin >> family;
	cout << "please enter darse 1" << endl;
	cin >> a;

	cout << "please enter darse 2" << endl;
	cin >> b;
	cout << "please enter darse 3" << endl;
	cin >> c;
	d = (a + b + c) / 3;
	if (d >= 17){
		cout << "greet"<<endl;
	}
	if (12<d < 17){
		cout << "normal"<<endl;
	}
	if (12>d ){
		cout << "fail"<<endl;
	}
	
	system("pause");
	return 0;
}