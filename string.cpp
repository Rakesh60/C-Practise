#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()

{
    string firstname = "RAkesh";
    string lastname = "Gupta";
    string middlename = "kumar";
    string fullname = firstname.append(middlename).append(lastname);
    cout << fullname << endl;
    cout << "the length of full name is " << fullname.length();
    firstname[2] = 'j';
    cout << firstname;
    cout << "Enter Your First Name" << endl;
    getline(cin, firstname);
    cout << endl
         << firstname
                cout
         << max(5, 110);
    cout << sqrt(4) << endl;
    cout << round(5.6)
         << endl;
    cout << log(10);
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; // Outputs 1 (true)
    cout << isFishTasty;         // Outputs 0 (false)

    string cars[] = {"alto", "hyundai", "mahindra", "tata"};
    cout << cars[0];
    cout << cars[1];
    cout << cars[2];
    cars[0] = "Alto";
    cout << cars[0];
    for (int i = 0; i < 4; i++)

    {
        cout << i << " " + cars[i];
        cout << endl;
    }

    string name = "RAKESH";
    // string &fname = name;
    // cout << fname;
    cout << &name;
    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    cout << food << endl;  //what is inside food variable
    cout << &food << endl; //address of food
    cout << *ptr;
    *ptr = "Burger";
    cout << *ptr; //what is the value at address of food
    cout << food;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; /* code */
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    int n, m;
    cout << "Enter the value of n,m" << endl;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
    int a[5];
    cout << *(a + 1);
    int x = 5;
    int *ptr = &x;
    cout << x << endl;  //5
    cout << &x << endl; //add of x
    cout << *ptr;       //value at add ptr

    return 0;
}