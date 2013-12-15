#include <unistd.h>
#include <iostream>
using namespace std;
class Obj{

public:
	Obj();
	~Obj();
	void Add(int, int);
	void Add(double, double);	
	int x;	
	int integers[10];	
private:

protected:



};

Obj::Obj(){
x=5;

}

Obj::~Obj(){


}
void Obj::Add(int x, int y){
cout << "Two ints!\n" << endl;
}
void Obj::Add(double x,double y){
cout << "Two doubles!\n" << endl;
}
