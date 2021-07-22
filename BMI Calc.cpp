#include <iostream>
using namespace std;

double bmi(double bb, double tb);

int main (){
	
	double berat, tinggi, hasil;
	cout << "Kalkulator BMI" << endl;
	cout << "Masukkan Berat Badan Anda: ";
	cin >> berat;
	cout << "Masukkan Tinggi Tubuh Anda: ";
	cin >> tinggi;
	hasil = bmi(berat, tinggi);
	if (hasil <= 18.5){
		cout << "Berat Badan Kurang" << endl;
	} else if (hasil > 18.5 && hasil < 22.9){
		cout << "Berat Badan Normal" << endl;
	} else if(hasil > 23 && hasil < 29.9){
		cout << "Berat Badan Berlebih" << endl;
	} else if(hasil >= 30){
		cout << "Obesitas" << endl;
	} 
	
	cin.get();
	return 0;
}

double bmi(double bb, double tb){
	double hasil;
	hasil = bb / (tb*tb);
	return hasil;
}
