#include<bits/stdc++.h>
using namespace std;
int main(){
	cout << "LUU Y DUNG DAU '.' CHO SO THAP PHAN"<< endl;
	double m, h;
	cout << "Nhap chieu cao(m): \n";
	cin >> h;
	cout << "Nhap can nang(kg): \n";
	cin >> m;
	double bmi = double bmi = round(m / (h * h) * 10) / 10;
	cout << fixed << setprecision(1)<<"Chi so BMI cua ban la: " << bmi<< endl;
	bool sosanh1 = bmi < 18.5;
	if(sosanh1){
		cout << "Ban bi thieu can";
	}
	bool sosanh2 = bmi>= 18.5 && bmi <= 24.9;
	if(sosanh2){
		cout << "Ban binh thuong";
	} 
	bool sosanh3 = bmi >= 25 && bmi <=29.9;
	if(sosanh3){
		cout<< "Ban bi thua can";
	}
	bool sosanh4 = bmi >= 30&& bmi <= 34.9;
	if(sosanh4){
		cout << "Ban qua beo phi do I, can giam can";
	}
	bool sosanh5 = bmi >= 35&& bmi <= 39.9;
	if(sosanh5){
		cout << "Ban qua beo phi do II, can giam can";
	}
	bool sosanh6 = bmi >= 40;
	if(sosanh6){
		cout << "Ban qua beo phi do III nguy hiem, can giam can ngay va luon";
	}
}
