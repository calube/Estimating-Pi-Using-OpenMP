#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

	double pi = 0.0, denominator = 1.0;
	int limit = 0;
	const int n = atoi(argv[1]);

	cout << "n = " << n << ".." <<endl;

	for (int i =0; i < n; i++){
		pi += 4/denominator;
		denominator += 2;
		pi -= 4/denominator;
		denominator += 2;

		i++;
	}

	cout << "estimated pi = " << pi << endl;
	return 0;
}
