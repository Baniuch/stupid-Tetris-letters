#include <iostream>

using namespace std;

	const int d1 = 5;
	const int d2 = 3;
	
void print (char tab[d1][d2])
{
	for (int i = 0; i < d1; ++i)
	{
		for (int j = 0; j < d2; ++j)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void rotprint (char tab[d2][d1])
{
	for (int i = 0; i < d2; ++i)
	{
		for (int j = 0; j < d1; ++j)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	const char f = (char)219;
	const char e = ' ';
	
	
	char t1[d1][d2] = 
	{
			{f, f, f},
			{e, f, e},
			{e, f, e},
			{e, f, e},
			{e, f, e},
	};
	char t2[d2][d1] = 
	{
			{e, e, e, e, f},
			{f, f, f, f, f},
			{e, e, e, e, f}
	};
	char t3[d1][d2] =
	{
			{e, f, e},
			{e, f, e},
			{e, f, e},
			{e, f, e},
			{f, f, f},
	};
	char t4[d2][d1] = 
	{
			{f, e, e, e, e},
			{f, f, f, f, f},
			{f, e, e, e, e}
	};
	
	
	char l1[d1][d2] = 
	{
			{f, e, e},
			{f, e, e},
			{f, e, e},
			{f, e, e},
			{f, f, f},
	};
	char l2[d2][d1] = 
	{
			{f, f, f, f, f},
			{f, e, e, e, e},
			{f, e, e, e, e}
	};
	char l3[d1][d2] = 
	{
			{e, e, f},
			{e, e, f},
			{e, e, f},
			{e, e, f},
			{f, f, f},
	};
	char l4[d2][d1] = 
	{
			{f, e, e, e, e},
			{f, e, e, e, e},
			{f, f, f, f, f}
	};
	
	
	char u1[d1][d2] = 
	{
			{f, e, f},
			{f, e, f},
			{f, e, f},
			{f, e, f},
			{f, f, f},
	};
	char u2[d2][d1] = 
	{
			{f, f, f, f, f},
			{f, e, e, e, e},
			{f, f, f, f, f}
	};
	char u3[d1][d2] = 
	{
			{f, f, f},
			{f, e, f},
			{f, e, f},
			{f, e, f},
			{f, e, f},
	};
	char u4[d2][d1] = 
	{
			{f, f, f, f, f},
			{e, e, e, e, f},
			{f, f, f, f, f}
	};

print(t1);
rotprint(t2);
print(t3);
rotprint(t4);

print(l1);
rotprint(l2);
print(l3);
rotprint(l4);

print(u1);
rotprint(u2);
print(u3);
rotprint(u4);
	
	return 0;
}
