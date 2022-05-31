
#include <iostream>
using namespace std;

int main(){
	int suma = 0;
	int n;
	int *p;
cout << "Introduzca el numero de elementos: ";
cin >> n;
p = new int [n];
for(int i = 0; i < n; i++){
	
	cout << "Introduzca elemento" <<i+1<<": ";
	cin >> p[i];
	suma += p[i];
}
	cout << "Elementos introducidos: ";
	for(int i=0;i<n; i++)
		cout<<p[i]<< ",";
		cout<<"total:"<<suma<<endl;
		cout<<"media:"<<(double)suma / n << endl;
		delete[]p;
		return 0;
	
	
	
	
}
