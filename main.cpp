// hw3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#include "DynIntStack.h"

using namespace std;

int main()
{
    string file1, file2;
    int operation;

    cout << "Please enter file names and operation respectively..: ";
    cin >> file1 >> file2 >> operation;

    ifstream infile(file1);
    ifstream infile2(file2);
    if (!infile) {
        cout << "File not found.";
        return 0;
    }
    else {

        cout << "TOKEN --> MINIMUM OCCURRENCE COUNT" << endl;
        cout << "----------" << endl;

        if (file1[0] == 'i') {
     
            DynStack<int> intStack1;
            DynStack<int> intStack2;
            int intInp1;
            int intInp2;
            if (operation == 2) {
                while (infile >> intInp1) {
                    intStack1.push(intInp1);
                }
                while (infile2 >> intInp2) {
                    int count = intStack1.findOccurrence(intStack1, intInp2);
                    if (count > 0) {
                        cout << intInp2 << "--->" << count << endl;
                    }
                }
            }
            else if (operation == 1) {
                while (infile2 >> intInp2) {
                    intStack2.push(intInp2);
                }
                while (infile >> intInp1) {
                    int count = intStack2.findOccurrence(intStack2, intInp1);
                    if (count > 0) {
                        cout << intInp1 << "--->" << count << endl;
                    }
                }
            }
            else
            {
                cout << "Invalid choice.";
                return 0;
            }

        }
        else if(file1[0] == 's') {
            DynStack<string> strStack1;
            DynStack<string> strStack2;
            string strInp1;
            string strInp2;
            if (operation == 2) {
                while (infile >> strInp1) {
                    strStack1.push(strInp1);
                }
                while (infile2 >> strInp2) {
                    int count = strStack1.findOccurrence(strStack1, strInp2);
                    if (count > 0) {
                        cout << strInp2 << "--->" << count << endl;
                    }
                }
            }
            else if (operation == 1) {
                while (infile2 >> strInp2) {
                    strStack2.push(strInp2);
                }
                while (infile >> strInp1) {
                    int count = strStack2.findOccurrence(strStack2, strInp1);
                    if (count > 0) {
                        cout << strInp1 << "--->" << count << endl;
                    }
                }
            }
            else
            {
                cout << "Invalid choice.";
                return 0;
            }
        }
        else if (file1[0] == 'c') {
            DynStack<string> chStack1;
            DynStack<string> chStack2;
            char chInp1;
            
            char chInp2;
            if (operation == 2) {
                while (infile >> chInp1) {
                    chStack1.push(chInp1);
                }
                while (infile2 >> chInp2) {
                    int count = chStack1.findOccurrence(chStack1, string(1,chInp2));
                    if (count > 0) {
                        cout << chInp2 << "--->" << count << endl;
                    }
                }
            }
            else if (operation == 1) {
                while (infile2 >> chInp2) {
                    chStack2.push(chInp2);
                }
                while (infile >> chInp1) {
                    int count = chStack2.findOccurrence(chStack2, string(1, chInp1));
                    if (count > 0) {
                        cout << chInp1 << "--->" << count << endl;
                    }
                }
            }
            else
            {
                cout << "Invalid choice.";
                return 0;
            }

        }
        else {
            cout << "File not found.";
            return 0;
        }
        

    }

    return 0;
    
}


