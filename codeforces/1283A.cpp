#include <iostream>
using namespace std;

int main() {
	
	int n = 0;
	
	cin >> n;
	
	int x = 0, y = 0;
	
	for (int i; i < n; i++){
		cin >> x >> y;	
		if (y!=0){
			cout << (24-x-1) * 60 + 60-y<<"\n" ;
		}
		if (y==0){
			cout << (24-x) * 60 <<"\n";
		}
	} 
	

	return 0;
	
	
}
