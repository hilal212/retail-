# include <iostream>
# include <string>
using namespace std;

class RetailItem
{
public:
	// constructor with all parameters
	RetailItem(const string& _description, int _units, double _price)
		: description(_description)
		, units(_units)
		, price(_price)
	{}

	// all setters
	void SetDescription(const string& _description)
	{
		description = _description;
	}

	void SetUnits(int _units)
	{
		units = _units;
	}

	void SetPrice(double _price)
	{
		price = _price;
	}

	// all getters
	string GeDescription() const
	{
		return description;
	}

	int GetUnits() const
	{
		return units;
	}

	double GetPrice() const
	{
		return price;
	}

	void Print() const
	{
		cout << "Retailitem info: \n";
		cout << "Description: " << description << "\n";
		cout << "Units On: " << units << "\n";
		cout << "Hand price: " << price << "\n\n";
	}

private:
	string description;
	int units;
	double price;
};

int main()
{
	// create 3 items
	RetailItem item1("Jacket", 12, 59.95);
	RetailItem item2("Designer Jeans", 40, 34.95);
	RetailItem item3("Shirt ", 20, 24.95);

	/// print items info
	item1.Print();
	item2.Print();
	item3.Print();
}
	
