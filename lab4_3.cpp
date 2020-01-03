
#include<iostream>
#include<cmath>

using namespace std;

int findDivisor(int x) 
{
	int n=2;
	while(x>1)
	{
		if(x%n==0)
		{
			return n;
		}
		n++;
	}
	
}

int main(){
	 cout << "Output = " << findDivisor(10) <<endl;
	 cout << "Output = " << findDivisor(97) <<endl;
	 cout << "Output = " << findDivisor(221);
  return 0;
}
