#include<iostream>
#include<fstream>
#include "Singleton.h"

using namespace std;
char* pries = "pries pasalinima";
char* po = "po pasalinimo";
int main(){
	ofstream fr("Rezultatai.txt");
	fr.close();
	int A[100], n;
	Singleton::Instance() -> skaitymas(A , n);
	Singleton::Instance() -> Spausdint(A, n, pries);
	Singleton::Instance() -> naikinimas(A, n);
	Singleton::Instance() -> Spausdint(A, n, po);
}