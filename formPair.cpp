#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int test;
    cin >> test;
    while (test--)
    {
        string input;
        cin >> input;
        int dance = 0;
        for (size_t i = 0; i < input.length() - 1; i++)
        {
            if ((input[i] == 'x' && input[i + 1] == 'y') || (input[i] == 'y' && input[i + 1] == 'x'))
            {
                dance++;
                i++;
            }
        }
        cout << dance << endl;
    }

    return 0;
}
