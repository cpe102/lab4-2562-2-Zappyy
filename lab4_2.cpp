#include<iostream>
#include<cmath>

using namespace std;

double findDistance(float u,float a ,float t) 
{
	float s;
	s = (u*t)+(0.5)*a*(pow(t,2));
	return s;
	
}

int main(){
	cout << "s = " << findDistance(0,0.5,1) <<endl;
	cout << "s = " << findDistance(1.5,-1,2) <<endl;
  	cout << "s = " << findDistance(5,4,3);
  return 0;
}
