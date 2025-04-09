#include <iostream>
using namespace std;
class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory(int n, int q, double c)
    {
        itemNumber = n;
        quantity = q;
        cost = c;
        setTotalCost();
    }

    void setItemNumber(int n)
    {
        itemNumber = n;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
    void setCost(int c)
    {
        cost = c;
    }
    void setTotalCost()
    {
        totalCost = quantity * cost;
    }

    int getItemNumber()
    {
        return itemNumber;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getCost()
    {
        return cost;
    }
    double getTotalCost()
    {
        return totalCost;
    }
};

int main()
{
    Inventory inventory(2344, 5, 82);
    cout << "Item number = " << inventory.getItemNumber() << endl;
    cout << "Quantity = " << inventory.getQuantity() << endl;
    cout << "Cost = " << inventory.getCost() << endl;
    cout << "Total cost = " << inventory.getTotalCost() << endl;

    return 0;
}