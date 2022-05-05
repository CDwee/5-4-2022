// Started at 5:51 5-4-2022

// Section 9
// Challenge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
        vector<int> numbers {};
        char selection {};
        
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if (selection == 'p' || selection == 'P') {
            if (numbers.size() == 0) 
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'm' || selection == 'M') {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                double total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is: " << total/numbers.size() << endl;
            }
        } else if (selection == 's' || selection == 'S') {
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest_num = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest_num)
                        smallest_num = num;
                cout << "The smallest number is: " << smallest_num << endl;;
            }
        } else if (selection == 'l' || selection == 'L') {
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
        else {
                int largest_num = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest_num)
                        largest_num = num;
                    cout << "The largest number is: " << largest_num << endl;;
            }
        } else if (selection == 'q' || selection == 'Q'){
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}

#include <iostream>
#include <cstring>  // for c-style string functions
#include <cctype>   // for character-based functions

using namespace std;

int main() {
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
//    cout << first_name;  // Bound to display garbage
    
//    cout << "Please enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------" << endl;
//
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "And your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//    
//    strcpy(full_name, first_name);           // copy first_name to full_name
//    strcat(full_name, " ");                  // concatenate full_name and a space
//    strcat(full_name, last_name);            // concatenate last_name to full_name
//    cout << "You full name is " << full_name << endl;
//    
//    cout << "-------------------------------" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;
//    
//    cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    
    cout << "-------------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else 
        cout << temp << " and " << full_name << " are different" << endl;
        
    cout << "-------------------------------" << endl;
    
    
    for(size_t i{ 0 }; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
    
    
    cout << "-------------------------------" << endl;
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else 
        cout << temp << " and " << full_name << " are different" << endl;
        
    cout << "-------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    
    
    
    cout << endl;
    return 0;
}

// Ended at 7:55 5-4-2022
