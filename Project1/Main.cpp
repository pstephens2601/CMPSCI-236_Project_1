#include <iostream>
#include "Date.h"
using namespace std;

int main() {

	Date today(13, "mar", 2014);

	cout << today.toString();

	cin.ignore(2);

}