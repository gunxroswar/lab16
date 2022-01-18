#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
	int i =rand()%4;
	int tem1,tem2;
	if(i==0){
		tem1=*w;
		tem2=*y;
		*w=*x;
		*x=tem1;
		*y=*z;
		*z=tem2;
	}else if(i==1){
		tem1=*w;
		tem2=*x;
		*w=*y;
		*y=tem1;
		*x=*z;
		*z=tem2;
	}else if(i==2){
		tem1=*w;
		tem2=*x;
		*w=*z;
		*z=tem1;
		*x=*y;
		*y=tem2;
	}else if(i==3){
		tem1=*w;
		tem2=*x;
		*w=*z;
		*z=tem1;
		*x=*z;
		*z=tem2;
	}

}
