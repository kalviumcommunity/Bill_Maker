#include <iostream>
#include <fstream>                              //For file handling

using namespace std;

//class
class shopping {

private:
    int productCode;
    float price;
    float discount;
    string productName;

    // Static member variable to keep track of the number of products added
    static int totalProducts;

public:

    // Constructor
    shopping() {
        this->productCode = productCode;        //this pointer
        this->price = price;                    //this pointer
        this->discount = discount;              //this pointer
        this->productName = productName;        //this pointer
    }

    // Destructor
    ~shopping() {

    }

    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void remove();
    void list();
    void receipt();

    // Static member function to display the total number of products added
    static void displayTotalProducts() {
        cout << "Total number of products added: " << totalProducts << endl;
    }
};

// Initialize the static member variable
int shopping::totalProducts = 0;

void shopping::menu() {

    int choice;
    string email;
    string password;
}

void shopping::administrator() {

    int choice;
}

void shopping::buyer() {

    int choice;
}

void shopping::add() {

    fstream data;
    int code;
    int token = 0;
    float product;
    float disCount;
    string name;

    totalProducts++;
}

void shopping::edit() {

    fstream data, data1;
    int productKey;
    int token = 0;
    int code;
    float price;
    float disCount;
    string name;
}

void shopping::remove() {

    fstream data, data1;
    int productKey;
    int token = 0;
}

void shopping::list() {

    fstream data;
}

void shopping::receipt() {

    fstream data;
    int arrCode[100];
    int arrQuantity[100];
    char choice;
    int count = 0;
    float amount = 0;
    float discount = 0;
    float total = 0;
}

int main() {

    // Array of objects
    const int maxObjects = 5;
    shopping sArray[maxObjects];

    for (int i = 0; i < maxObjects; i++) {
        sArray[i].menu();
    }


    //Displaying total number product(s)
    shopping::displayTotalProducts();


    // shopping s;
    // s.menu();  //Object

    return 0;
}
