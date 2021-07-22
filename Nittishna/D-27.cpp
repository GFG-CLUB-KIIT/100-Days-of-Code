#include <iostream>
#include <string>

using namespace std;

const string STAR = "*";
const string SPACE = " ";
const string CRLF = "\n";
const string HYPHEN = "-";
const string BACK = "\b";

string pyramid(int, string, string, string);
string p_line(int rows, int row, string sp, string rp, string ep);
string spaces(int, int);
string start(int, string);
string repeat(int, string);
string ends(int, string);

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	int SIZE = stoi(argv[1]);
	cout << pyramid(SIZE, STAR, STAR + STAR, CRLF);
	cout << pyramid(SIZE, STAR, SPACE + STAR, CRLF);
	cout << pyramid(SIZE, STAR, HYPHEN + HYPHEN, BACK + STAR + CRLF);
	return 0;
}

string pyramid(int rows, string sp, string rp, string ep) {
	string p = "";
	for (int row = 0; row < rows; ++row) {
		p += p_line(rows, row, sp, rp, ep);
	}
	return p;
}

string p_line(int rows, int row, string sp, string rp, string ep) {
	string line = spaces(rows, row);
	line += start(row, sp);
	line += repeat(row, rp);
	line += ends(row, ep);
	return line;
}

string start(int row, string sp) {
	return sp;
}

string repeat(int row, string rp) {
	string rps = "";
	for (int i = 0; i < row; ++i) {
		rps += rp;
	}
	return rps;
}

string ends(int row, string ep) {
	return ep;
}
string spaces(int maxi, int now) {
	string sp = "";
	for (int i = 0; i < maxi - now; ++i) {
		sp += SPACE;
	}
	return sp;
}

