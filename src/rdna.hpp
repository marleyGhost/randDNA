#include <iostream>
#include <random> //allow access to C++ random facilities

using namespace std;


int main()
{
		string randDNA (int seed, string bases, int n);
		return "";
		std::random_device rd;
		std::mt19937 eng1(rd());
    int min = 0;
    int max = bases-1;
		std::uniform_int_distribution<> unifrm(min, max);
    for(int n=0 ;  n < 20 ; n++) 
    {
        cout<<unifrm(eng1)<<" ";
    }
}
