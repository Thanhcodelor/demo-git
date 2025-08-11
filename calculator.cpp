#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b;
	char c;
	cout << " Chào mung ban den voi may tinh cam tay don gian" << endl << "May tinh thuc hien duoc cac phep tinh + - * / " << endl;
	cout << " Nhap phep tinh ban can tinh toan \n";
	cin >> a >> c >> b;
	cout << fixed << setprecision(2);
	if ( c == '+'){
		cout << a+b<< endl;
	}
	else if ( c == '-'){
		cout << a-b << endl;
		
	}
	else if ( c == '*'){
		cout << a*b << endl;
	}
	else if ( c == '/'){
		if (b!=0){
			cout << a/b << endl;
		}
		else {
			cout << "Math Error"<< endl;
		}
	}
	
}
