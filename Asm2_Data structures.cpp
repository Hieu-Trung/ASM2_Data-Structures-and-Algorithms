#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<conio.h>
#include<time.h>>

using namespace std;
char S1[250], S2[250];
int x = 0, y = 0, z = 0, l;

class Queues 
{
	char tmp[10];
	public:
	void Enqueue(int a) {
		x = 0;
		while (x != 10 && a != 0) 
		{
			tmp[x] = S1[y];
			x++;
			y++;
			a--;
		}
	}
	char Dequeue() {
		char tmp1;
		char result = tmp[0];
		for (int i = 1; i <= x; i++) 
		{
			tmp1 = tmp[i];
			tmp[i - 1] = tmp1;
		}
		return result;
	}
	void tranfer() {
		int a = 10;
		int i = 1;
		while (l > 0) {
			Enqueue(l);
			while (a > 0) {
				S2[z] = Dequeue();
				z++;
				a--;
				l--;
			}
			cout << "\n " << i << " Data S2 = " << S2;
			i++;
			if (l > 10) {
				a = 10;
			}
			else {
				a = l;
			}
		}
	}
};

int main() {
	Queues Q;
	cout << "Input data S1:\n";
	scanf("%[^\n]%*c", S1);
	l = strlen(S1);
		
	try {
		if (l > 0) {
			Q.tranfer();
		}
		else {
			cout << "The input data is empty!";
		}
	}
	catch (int b) {
	}	
	
	return 0;

}
