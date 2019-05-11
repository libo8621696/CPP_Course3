#include<iostream>
using namespace std;
class CSample
{
public:
	CSample()  // 1st construction function
	{
		cout << "Constructor 1 Called" << endl;
	}
	CSample(int n)
	{
		cout << "Constructor 2 Called" << endl;
	}
};

int main()
{
	CSample array1[2];
	cout << "step1" << endl;
	CSample array2[2] = {4, 5};
	cout << "step2" << endl;
	CSample array3[2] = {3};
	cout << "step3" << endl;
	CSample *array4 = new CSample[2];
	delete[] array4;
	return 0;
}