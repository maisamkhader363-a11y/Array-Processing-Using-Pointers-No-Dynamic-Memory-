#include<iostream>
using namespace std;
int main()
{
	int n, evencount = 0, oddcount = 0;
	static int A[50];
	int* p = A;
	int max = *p;
	cout << "Plz rnter the elements (max is 50):";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
		for (int i = 0; i < n; i++)
		{
			cout << *(p + i) << " ";
			if (*(p + i) % 2 == 0)
			{
				evencount++;
			}
			if (*(p + i) % 2 != 0)
			{
				oddcount++;
			}
			if (*(p + i) > max)
			{
				max = *(p + i);
			}
			
		}
		int max2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (*(p + i) > max2 && *(p + i) < max)
			{
				max2 = *(p + i);
				
			}
			else if (max == max2)
			{
				cout << "there is no secound largest number" << endl;
			}
		}

		cout << "even number count is:" << evencount << endl;
		cout << "odd number count is:" << oddcount << endl;
		cout << "max number id :" << max << endl;
		cout << "secound largest number id :" << max2 << endl;
	

}
