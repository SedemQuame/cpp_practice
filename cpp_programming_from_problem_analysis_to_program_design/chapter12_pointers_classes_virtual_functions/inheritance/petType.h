using namespace std;

class petType
{
public:
    virtual void print() const;
    petType(string n = "");

private:
    string name;
};

class dogType : public petType
{
public:
    void print() const;
    dogType(string n = "", string b = "");

private:
    string breed;
};

void petType::print() const
{
    cout << "Name: " << name;
}

petType::petType(string n)
{
    name = n;
}

void dogType::print() const
{
    petType::print();
    cout << ", Breed: " << breed << endl;
}

dogType::dogType(string n, string b) : petType(n)
{
    breed = b;
}

void callPrint(petType &p)
{
    p.print();
}