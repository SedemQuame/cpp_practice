The purpose of this lab was to understand how constructors work in
C++.

I learnt the how to overload a constructor.
inventory::inventory()
{
name = "";
itemNum = -1;
price = 0.0;
unitsInStock = 0;
}

inventory::inventory(string n)
{
name = n;
itemNum = -1;
price = 0.0;
unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost)
{
name = n;
itemNum = iNum;
price = cost;
unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost, int inStock)
{
name = n;
itemNum = iNum;
price = cost;
unitsInStock = inStock;
}

I also learnt how to define a constructor with parameters.
inventory::inventory(string n, int iNum, double cost)
{
name = n;
itemNum = iNum;
price = cost;
unitsInStock = 0;
}

I also learnt how to define and use a default constructor.
inventory::inventory()
{
name = "";
itemNum = -1;
price = 0.0;
unitsInStock = 0;
}
