#include <iostream>
using namespace std;

int itFact(int n){
	int fact = 1;
	for(int i=1; i<=n; i++)
    fact = fact * i;
    return fact;
}

int recFact(int n){
	if(n > 1)
        return n * recFact(n - 1);
    else
        return 1;
}

int main() {
   int n ;
   cout<<"Enter the number to find factorial: "<<endl;
   cin>>n;
   cout<<"Iterative Factorial of "<< n <<" is "<<itFact(n)<<endl;
   cout<<"Recursive Factorial of "<< n <<" is "<<recFact(n)<<endl;
   return 0;
}
