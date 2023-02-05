#include <iostream>
using namespace std;
int perimetr(int k1, int k2);
int ploshad(int k1, int k2);
int gipotenuza(int k1, int k2);
int main()
{
	//program to calculate perimetr,ploshad,gipotenuza
	int katet1, katet2;
	cout << "enter your values : \nkatet1- ";
	cin >> katet1;
	cout << "katet2- ";
	cin >> katet2;
	cout << "<<<<------->>>>\nGipotenuza = "<< gipotenuza(katet1,katet2)<< endl;
	cout << "Perimetr = " << perimetr(katet1, katet2) << endl;
	cout << "Ploshad = " << ploshad(katet1, katet2) << endl;
	return 0;
}
int perimetr(int k1, int k2) 
{
	return k1 + k2 + gipotenuza(k1,k2);
	
}
int ploshad(int k1, int k2)
{
	return (k1 * k2) / 2;
}
int gipotenuza(int k1, int k2)
{
	return sqrt(k1 * k1 + k2 * k2);
}