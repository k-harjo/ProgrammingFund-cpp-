#include <iostream>
#include <string>

using namespace std;

class PersonData {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;

public:
    // Accessor functions
    string getLastName() const {
        return lastName;
    }

    string getFirstName() const {
        return firstName;
    }

    string getAddress() const {
        return address;
    }

    string getCity() const {
        return city;
    }

    string getState() const {
        return state;
    }

    string getZip() const {
        return zip;
    }

    // Mutator functions
    void setLastName(const string& lastName) {
        this->lastName = lastName;
    }

    void setFirstName(const string& firstName) {
        this->firstName = firstName;
    }

    void setAddress(const string& address) {
        this->address = address;
    }

    void setCity(const string& city) {
        this->city = city;
    }

    void setState(const string& state) {
        this->state = state;
    }

    void setZip(const string& zip) {
        this->zip = zip;
    }
};

class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;

public:
    // Accessor functions
    int getCustomerNumber() const {
        return customerNumber;
    }

    bool getMailingList() const {
        return mailingList;
    }

    // Mutator functions
    void setCustomerNumber(int customerNumber) {
        this->customerNumber = customerNumber;
    }

    void setMailingList(bool mailingList) {
        this->mailingList = mailingList;
    }
};

int main() {
    CustomerData customer;
    /*
    // Set customer data using mutator functions
    customer.setLastName("Harjo");
    customer.setFirstName("KariAnn");
    customer.setAddress("123 Main St");
    customer.setCity("Paris");
    customer.setState("TX");
    customer.setZip("55555");
    customer.setCustomerNumber(1);
    customer.setMailingList(true);
    */

    // Set customer data using mutator functions
    customer.setLastName("Bet");
    customer.setFirstName("Alpha");
    customer.setAddress("123 Main St");
    customer.setCity("Worthington");
    customer.setState("TX");
    customer.setZip("44444");
    customer.setCustomerNumber(1);
    customer.setMailingList(false);


    // Display customer data using accessor functions
    cout << "Customer Data:" << endl;
    cout << "Last Name: " << customer.getLastName() << endl;
    cout << "First Name: " << customer.getFirstName() << endl;
    cout << "Address: " << customer.getAddress() << endl;
    cout << "City: " << customer.getCity() << endl;
    cout << "State: " << customer.getState() << endl;
    cout << "ZIP: " << customer.getZip() << endl;
    cout << "Customer Number: " << customer.getCustomerNumber() << endl;
    cout << "Mailing List: " << (customer.getMailingList() ? "Yes" : "No") << endl;

    return 0;
}
