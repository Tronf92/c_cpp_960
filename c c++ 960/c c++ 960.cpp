#include <iostream>

using namespace std;

class loc{
	int longitudine, latitudine;
	public:
		loc(){} //utilizat pt a construi temporare
		loc (int lg, int lt){
			longitudine = lg;
			latitudine = lt;
		}
		void arata(){
			cout << longitudine << " ";
			cout << latitudine << endl;
		}

		loc operator+(loc op2);
		loc operator()(int i, int j);
};

loc loc::operator()(int i, int j){
	longitudine = i;
	latitudine = j;
	return *this;
}

loc loc::operator+(loc op2){
	loc temp;
	temp.longitudine = op2.longitudine + longitudine;
	temp.latitudine = op2.latitudine + latitudine;
	return temp;
}

void main(){
	loc ob1(10,20), ob2(1,1);
	ob1.arata();
	ob1(7,8);
	ob1.arata();
	ob1 = ob2 + ob1(10,10);
	ob1.arata();
	system("pause");
}

