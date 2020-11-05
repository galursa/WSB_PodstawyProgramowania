#include <iostream>
#include <iomanip>

using namespace std;

struct item {
	string itemsName;
	int numberOfItems;
	float itemsPrice;
};

int main(int argc, char** argv) {
	struct item computerItems = {
		"Keyboard",
		3,
		49.99
	};
	cout << "Item: " << computerItems.itemsName << "\n";
	cout << "Price: " << computerItems.itemsPrice << "\n";
	cout << "Quantity: " << computerItems.numberOfItems << "\n";	
	cout << "\n";
	item foodItems = {
		"Bread",
		1,
		5.0
	};
	cout << "Item: " << foodItems.itemsName << "\n";
	cout << "Price: " << foodItems.itemsPrice << "\n";
	cout << "Quantity: " << foodItems.numberOfItems << "\n";	
	cout << "\n";
	item clothesItems;
	clothesItems.itemsName = "Trousers ";
	clothesItems.itemsPrice = 100.99;
	clothesItems.numberOfItems = 2;
	cout << "Item: " << clothesItems.itemsName << "\n";
	cout << "Price: " << clothesItems.itemsPrice << "\n";
	cout << "Quantity: " << clothesItems.numberOfItems << "\n";	
	cout << "\n";
	return 0;
}
