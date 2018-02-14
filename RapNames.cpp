#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char input = 'y';

string adj[] = {"Fresh ", "Funky ", "Lil ", "Big ", "Chrome ", "Dj ", "Crunchy ", "Icy ", "Young ", "Juicy ", "Retro ", "Old ", "Krusty ", "Orange ", "Round "};
string noun[] = {"Chesse", "monkey", "the senate", "palpatine", "fluff", "Greivous", "Maul", "Bucket","Dog", "Beverage"};

int main() {
	srand(time(NULL));
	cout << "Do you want to know your Rap name?" << endl;
	while(input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
			cout << noun[nouns]<<endl;

	}
}
