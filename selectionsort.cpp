#include <iostream>

using namespace std;

void Display(int Arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int Arr[], int len)
{
    int i = 0, j = 0, selected = 0, temp = 0;

    selected = Arr[i];
    for (i = 0; i < (len - 1); i++)
    {
        for (j = i+1; j < len; j++)
        {

            if (Arr[j] < selected)
            {
                temp = Arr[j];
                Arr[j] = selected;
                selected = temp;
            }

        }
    }
}

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int Arr[n];

    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    SelectionSort(Arr, n);

    cout << "Array after sorting is : " << endl;
    Display(Arr, n);

    return 0;
}