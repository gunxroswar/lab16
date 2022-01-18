#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	int N=sizeof(a)/sizeof(a[0]);
	int M=sizeof(b)/sizeof(b[0]);
	
	cout << "Address of the highest value in array A is " << max_element(a,a+N) << "\n";
	cout << "The highest value in array A is "<< *max_element(a,a+N) << "\n";
	
	cout << "Address of the highest value in array B is " << max_element(b,b+M) << "\n";
	cout << "The highest value in array B is "<< *max_element(b,b+M) << "\n";

	return 0;
}
