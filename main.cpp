#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13); // prints out pink texts
    bool validOption = false;
    string yesOrNo;

    while (!validOption)
    {
        cout << "D-do you want to be my g-girlfriend? >///<" << endl;
        cout << endl;
        cout << "Yes (Y/y) or No (N/n)" << endl;
        cin >> yesOrNo;
        cout << endl;

        // best ending
        if (yesOrNo == "y" || yesOrNo == "Y")
        {
            cout << "AWWW TYSM!!! >w<" << endl;
            cout << endl;
            validOption = true;
        }
        // worst ending
        else if (yesOrNo == "n" || yesOrNo == "N")
        {
            SetConsoleTextAttribute(h, 4); // prints out red texts
            for (int i = 0; i <= 100; i++)
            {
                cout << "Deleting: C:\\Windows\\System32" << endl;
                cout << "========== " << i << " % COMPLETE ==========" << endl;
                cout << endl;
                this_thread::sleep_for(chrono::milliseconds(100));
            }
            validOption = true;
        }
        else
        {
            cout << "C'mon just t-try it again >~<" << endl;
            cout << endl;
        }
    }
    return 0;
}