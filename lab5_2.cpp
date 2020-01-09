#include<iostream>
using namespace std;

string mixText(string a,string b){
	int la = a.size();
	int lb = b.size();
	 if(la != lb){
		 return "E";
	 }

	 int i = 0;
	 int n = la ;
	 string e;
	 while(i<n){
		 e = e+a[i]+b[i];
		 i++;

	 }
	 return e;
	

}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
