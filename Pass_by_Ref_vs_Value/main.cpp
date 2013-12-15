#include <iostream>
#include <unistd.h>
#include "Obj.cpp"
#include <time.h>

double diffclock(clock_t clock1,clock_t clock2)
{
	double diffticks=clock1-clock2;
	double diffms=(diffticks*1000)/CLOCKS_PER_SEC;
	return diffms;
} 

void value(Obj o){

int y = o.x;

}

void reference(Obj &o){

int y = o.x;

}

int main(){

int count = 10000000;

Obj *o = new Obj();

clock_t begin = clock();
for(int i = 0; i<count; i++){
reference(*o);
}
clock_t end = clock();

int elapsed = double(diffclock(end,begin));
cout << "Passed by reference " << count << " times in " << elapsed << "ms" << endl;

begin = clock();
for (int j = 0; j<count; j++){
value(*o);
}
end = clock();
elapsed =diffclock(end,begin);
cout << "Passed by value " << count << " times in " << elapsed << "ms" << endl;


}

