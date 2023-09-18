#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    //class fields.
    string name;
    int password;
public:
    //Initializations
    User() {};
    User(string name, int password)
    {
        this->name = name;
        this->password = password;
    }
    //Sets
    void setName(string name)
    {
        this->name = name;
    }
    void setPassword(int password)
    {
        this->password = password;
    }
    //Gets
    string getName()
    {
        return this->name;
    }
    int getPassword()
    {
        return this->password;
    }
};

int main()
{
    User user;
    string user_n = "Andrii";       //data in the system.
    int user_p = 1234;
    string temp_name;       //temp variable for name.
    int temp_pass;          //temp variable for password.
    try
    {
        cout << "Enter you name: \n";
        cin >> temp_name;
        user.setName(temp_name);
        cout << "Enter you password: \n";
        cin >> temp_pass;
        user.setPassword(temp_pass);
        if (user.getName() != user_n || user.getPassword() != user_p)
        {
            throw invalid_argument("AuthenticationException ");
        }
        cout << "Welcome!\n";     //if the data matches.  
    }
    catch (const std::exception& ex)
    {
        cout << ex.what() << endl;
    }
}
