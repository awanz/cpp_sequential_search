#include <iostream>

using namespace std;

int sequentialSearch(int data[100], int n, int x){
    int i = 0;
    while(i < n){
        if(data[i] == x){
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    int data[5] = {1,4,3,2,7};
    int x;

    cout << "Angka yang dicari: ";
    cin >> x;

    cout <<  sequentialSearch(data, 5, x) << endl;
}
