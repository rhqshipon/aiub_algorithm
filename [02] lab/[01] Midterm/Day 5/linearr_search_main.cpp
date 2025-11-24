#include <iostream>
using namespace std;

int main()  {
    int sizee;
    cout << "Enter array size: ";
    cin >> sizee;
    int arri[sizee];
    for (int i = 0; i < sizee; i++) {
        cin >> arri[i];
    }

    int p, q, count_p = 0, count_q = 0, count_paq = 0, count_psqm2 = 0, target, target_index = -1;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;
    cout << "Enter target: ";
    cin >> target;


    for(int i = 0; i < sizee; i++)  {
        if(arri[i] == p) count_p++;
        if(arri[i] == q) count_q++;
        if(arri[i] == (p+q)) count_paq++;
        if(arri[i] == ((p-q)*2)) count_psqm2++;
    }

    for(int i = 0; i < sizee; i++)  {
        if(arri[i] == target) {
            target_index=i;
            break;
        }
    }
    cout << "Found target at index: " << target_index << endl;

    cout << "p: " << count_p << endl;
    cout << "q: " << count_q << endl;
    cout << "(p+q): " << count_paq << endl;
    cout << "(p-q)*2: " << count_psqm2 << endl;

    return 0;
}

