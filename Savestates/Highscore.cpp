#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int Score;
	cout << "Enter your high score" << endl;
	cin >> Score;
	int n;
	int scores[5];
	int scores2[5];
	int temp;
	ifstream read("Scores.txt");
	if (read.is_open()) {
		for (int i = 0; i < 5; i++) {
			read >> n;
			scores[i] = n;
		}
		read.close();

		for (int i = 0; i < 5; i++)
			if (scores[i] < Score) {
				temp = scores[i];
				scores2[i] = Score;
				Score = temp;
			}
			else
				scores2[i] = scores[i];

		cout << "scores are now:" << endl;
		for (int i = 0; i < 5; i++)
			cout << scores2[i] << endl;
	}
	else cout << "unable to open file";
	system("pause");
	return 0;
}
