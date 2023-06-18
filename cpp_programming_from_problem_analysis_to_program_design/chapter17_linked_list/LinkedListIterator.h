template <class Type>
class linkedListIterator
{
public:
    linkedListIterator();
    // default constructor
    // postcondition: current = nullptr

    linkedListIterator(nodeType<Type> *ptr);
    // constructor with a parameter.
    // postconditon: current = ptr

    Type operator*();
    // function to overload the dereferencing operator *.
    // postcondition: returns the info contained in the node.

    linkedListIterator<Type> operator++();
    // overload the pre-increment operator.
    // postcondition: the iterator is advanced to the next node.

    bool operator==(const linkedListIterator<Type> & right)
}