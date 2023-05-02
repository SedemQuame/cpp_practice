# include <iostream>
using namespace std;

int main(){
    return 0;
}

int seqSearch(const int list[], int listLength, int searchItem){
    int loc;
    bool found = false;
    loc = 0;

    while (loc < listLength && !found)
    {
        if (list[loc] == searchItem)
        {
            found = true;
        }else{
            loc++;
        }
    }

    if (found)
    {
        /* code */
        return loc;
    }else{
        return -1;
    }
    
    
}