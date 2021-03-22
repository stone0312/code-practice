//convert stone to bounds//
//-----2020.08.08--------//
//---------sy------------//

#include<iostream>
int convert_stone_to_pounds(int);

int main()
{
	using namespace std;
	int stone;
	cout <<"enter the weight in stone"<<endl;
	cin >> stone ;
	int pounds;
	pounds = convert_stone_to_pounds(stone);
	cout << stone 
		 <<" stone = ";
	cout << pounds 
		 <<" pounds"<<endl;

	return 0;
}

int convert_stone_to_pounds(int stone)
{
	return 14*stone;
}
