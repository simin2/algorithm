#include <iostream>

using namespace std;

int main(void) {

	int n = 0;

reload:

	cin >> n;

	switch (n) {

		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			cout << n << '\n';
			goto reload;

		case 0:
			break;
	
	}

	return 0;

}
