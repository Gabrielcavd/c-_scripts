#include <vector>
#include <stdio.h>
#include <iostream>


using namespace std;


int main()
{
	vector<int> vetor;
	for(int i = 0; i<5; i++){
		vetor.push_back(i);
	}
	
	for(auto i = vetor.begin(); i != vetor.end(); i++){
		
		cout << *i << " ";
		
		}
	
	return 0;
}
