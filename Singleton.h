#include <string>
#include <fstreams>

using namespace std;

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	int aitymas(int A[] , iny rt0 
	void naikinimas(int A[], int & n);
	void Spausdint(int A[], int n, p);
	fstream bbd;
private:

	Singleton() {bbd.open("isorry.txt");};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};


