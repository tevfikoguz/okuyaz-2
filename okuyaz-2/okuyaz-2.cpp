
#include "pch.h"
#include <iostream>
#include "INIReader.h"
#include "INIWriter.h"

using namespace std;

int main() {

	INIReader reader("test.ini");

	if (reader.ParseError() != 0) {
		std::cout << "Can't load 'test.ini'\n";
		return 1;
	}
	std::cout << "Config loaded from 'test.ini': version="
		<< reader.GetInteger("protocol", "version", -1) << ", name="
		<< reader.Get("user", "name", "UNKNOWN") << ", email="
		<< reader.Get("user", "email", "UNKNOWN") << ", pi="
		<< reader.GetReal("user", "pi", -1) << ", active="
		<< reader.GetBoolean("user", "active", true) << "\n";

	double *nn = reader.GetRealArray("user", "Arrr", -1, 10);

	std::cout << "arry:";
	for (int m = 0; m < 10; m++)
	{
		 cout << nn[m] <<",";
	}
	

	dosyaAc("abc.ini");
	 AddHeader( "deneme");
	 Addnumber("sayı", 15);
	 Addstring("yazi", "deneme");
	 double *n;
	 n = new double[10]; for (int i = 0; i < 10; i++) { n[i] = 12*i*-1; }
	 AddnumberDoubleArray("arry", nn, 10);
	 dosyaKapa();

	 INIReader reader2("abc.ini");

	 if (reader2.ParseError() != 0) {
		 std::cout << "Can't load 'test.ini'\n";
		 return 1;
	 }
	 double *nn1 = reader2.GetRealArray("deneme", "arry", -1, 10);
	 std::cout << "arry:";
	 for (int m = 0; m < 10; m++)
	 {
		  cout<< nn1[m] <<",";
	 }



return 0;
}