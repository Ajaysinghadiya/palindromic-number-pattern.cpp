#include <iostream>//header
using namespace std;//standard

int main()//execution begins from here
{
    int raw;//declaring a vaariable named raww
    cout << "enter the number of raws" << endl;//printing a line
    cin >> raw;//taking input from user
    for (int i = 1; i <= raw; i++)//this is outer loop for printing the number of raws
    {
        for (int j = 1; j <= raw - i; j++)//1st inner loop to print all spaces
        {
            cout << " ";//printing space
        }
        for (int j = i; j >= 1; j--)//printing the reverse numbers
        {
            cout << j;//print
        }
        for (int j = 2; j <= i; j++)//third inner looop to print the right side numberrs
        {

            cout << j;//printing number
        }
        cout << endl;//moving to next line
    }
    return 0;
}
