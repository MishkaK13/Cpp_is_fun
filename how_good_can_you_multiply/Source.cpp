#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j, center = 5;
    for (i = 0; i < center*2; i++)
    {
        for (j = 0; j < center * 2; j++)
        {
            if (i <= center)
            {
              (j >= center - i && j <= center + i)?cout << "*":cout << " ";
            }
            else
            {
              (j >= center + i - center * 2 + 1 && j <= center - i + center * 2  - 1)?cout << "*":cout << " ";
            }
        }
        cout << "\n\n\n\n";
    }
    system("pause");
    return 0;
}
