/**********************************************************************
 * Author: Eric Hansson
 * File: main.cpp
 * Date: 31 may - _ june 2023
 * Purpose: 
 *
***********************************************************************/
#include<iostream>
#include <fstream>
#include "Item.hpp"

using namespace std;

int main(int argc, char *argv[]){
    cout << "|The Groccery list program|" << endl;
    cout << "Enter in groccery items here: " << endl;

    Item grocceryItem;
    ofstream file("grocceryList.txt"); 

    while(cin){
        string input;
        cin >> input;
        if(input == "exit"){
            break;
        }
        grocceryItem.getName() = input;
        file << grocceryItem.getName() << endl;
       
    }

    file.close();

    return 0;
}
