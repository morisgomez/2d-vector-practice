#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<vector<string>> table(4); // table = {[], [], [], []} creates a 2d vector but its 4 elements are empty.
    for (int i = 0; i < 4; i++) //how we access each inner element.
    {

        for (int j = 0; j <
                        6; j++) //bc of condition will create 5 int values inside each nested vector: so 3 rows with 5 columns each.
        {
            basic_string<char> value; //not sure why cLION IDE does not let me initialize empty int value; ??
            cout << "enter value: ";
            cin >> value;
            table[i].push_back(value);  //pushes back each all values.
        }
    }
 /*
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
*/
//BELOW PRINTS TABLE. 
    for (int i = 0; i < table.size(); i++)
    {
        for(int j = 0; j < table[i].size(); j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
