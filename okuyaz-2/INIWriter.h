
#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
ofstream outfile;

void dosyaAc(string DosyaAdi)
{
	outfile.open(DosyaAdi, ios::out | ios::trunc);

}

void dosyaKapa()
{
	// close the opened file.
	outfile.close();


}

void AddHeader(string baslik)
{
	//ofstream outfile;
	//outfile.open(DosyaAdi,  ios::out | ios::trunc);

	outfile << "[" + baslik + "]" << endl;
}

void Addnumber(string degeradi ,int sayi)
{
	// Create an output string stream
	std::ostringstream streamObj3;

	// Set Fixed -Point Notation
	streamObj3 << std::fixed;

	// Set precision to 2 digits
	streamObj3 << std::setprecision(12);

	//Add double to stream
	streamObj3 << sayi;

	// Get string from output string stream
	std::string strObj3 = streamObj3.str();

	outfile << degeradi + " = "<< strObj3 << endl;
}

void Addstring(string degeradi, string yazi)
{
	outfile << degeradi + " = " << yazi << endl;
}

void AddnumberIntegerArray(string degeradi, int *sayi, int ArrSize)
{
	std::vector< string > vd;
	// Create an output string stream
	std::stringstream streamObj3;

	// Set Fixed -Point Notation
	streamObj3 << std::fixed;

	// Set precision to 2 digits
	streamObj3 << std::setprecision(12);
	for (int i = 0; i < ArrSize; i++) { streamObj3 << sayi[i] << " "; }

	// Get string from output string stream
	std::string strObj3 = streamObj3.str();

	outfile << degeradi + " = ";

	std::size_t pos = 0;
	string d;


	std::stringstream ss(strObj3);
	while (ss >> d)
		vd.push_back(d);
	for (int i = 0; i < vd.size(); ++i)
		if (i == ArrSize - 1)
		{
			outfile << vd[i];
		}
		else
		{
			outfile << vd[i] << ",";
		}

	outfile << endl;
}

void AddnumberDoubleArray(string degeradi, double *sayi, int ArrSize)
{
	std::vector< string > vd;
	// Create an output string stream
	std::stringstream streamObj3;

	// Set Fixed -Point Notation
	streamObj3 << std::fixed;

	// Set precision to 2 digits
	streamObj3 << std::setprecision(12);
	for (int i = 0; i < ArrSize; i++) { streamObj3 << sayi[i] << " "; }

	// Get string from output string stream
	std::string strObj3 = streamObj3.str();

	outfile << degeradi + " = ";

	std::size_t pos = 0;
	string d;


	std::stringstream ss(strObj3);
	while (ss >> d)
		vd.push_back(d);
	for (int i = 0; i < vd.size(); ++i)
		if (i == ArrSize - 1)
		{
			outfile << vd[i];
		}
		else
		{
			outfile << vd[i] << ",";
		}

	outfile << endl;
}