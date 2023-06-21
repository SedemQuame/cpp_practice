template <class T>
class Complex
{
private:
    T re, im;

public:
    Complex(const T &r, const T &i) : re(r), im(i){};
    T getRe() { return re; }
    T getIm() { return im; }
};

Complex::Complex(/* args */)
{
}

// Instantiating the class
Complex<double> x(1.0, 2.0); // T = double
Complex<int> j