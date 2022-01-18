#include <iostream>
#include <algorithm>
using namespace std;

void sort(int d[],int N){
    int i, key, j; 
    for (i = 1; i < (N/2); i++)
    { 
        key = d[i]; 
        j = i - 1; 

        while (j >= 0 && d[j] > key)
        { 
            d[j + 1] = d[j]; 
            j = j - 1; 
        } 
        d[j + 1] = key; 
    }
	for (i = N/2; i < N; i++)
    { 
        key = d[i]; 
        j = i - 1; 

        while (j >= (N/2) && d[j] > key)
        { 
            d[j + 1] = d[j]; 
            j = j - 1; 
        } 
        d[j + 1] = key; 
    }
}




int main(){
	int data[] = {7,8,2,1,2,4,6,9,0,1};
	int N=sizeof(data)/sizeof(data[0]);
	cout << "Before: ";
	for(int i = 0; i<N; i++) cout << data[i] << " ";
	sort(data,N);
	cout << "\nAfter: ";
	for(int i = 0; i<N; i++) cout << data[i] << " ";
	return 0;
}
