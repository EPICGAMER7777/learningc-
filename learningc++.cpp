#include <iostream>
#include <cmath>
#include <ctime>

namespace dog{
    int dogs = 70;
}

void printStr(std::string message){
    std::cout << message << '\n';
}
void printInt(int integer){
    std::cout << integer << '\n';
}

double FindCircumfrence(double radius){
    return radius * 2 * 3.14159265;
}

void cookFood(){
    printStr("I will cook you food.");
}

void cookFood(std::string food){
    std::cout << "I will cook you " << food << '\n';
}

void switchVars(std::string &var1,std::string &var2){
    std::string temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main(){
    // 1. C++ tutorial for beginners
    printStr("Hello, World!");

    // 2. Variables and basic data types
    {
        int age = 20;
        double gpa = 3.5;
        char grade = 'A';
        bool isSmart = true;
        string name = "Bro";
        printStr(name);
        printInt(age);
    }

    // 3. const
    {
        const double PI = 3.14159265;
        printStr("PI constant defined");
    }

    // 4. Namespaces
    {
        printInt(dog::dogs);
    }

    // 5. Typedef and type aliases
    {
        typedef string text;
        using number = int;
        text msg = "Hello typedef";
        number n = 42;
        printStr(msg);
        printInt(n);
    }

    // 6. Arithmetic operators
    {
        int x = 10, y = 3;
        printInt(x + y);
        printInt(x - y);
        printInt(x * y);
        printInt(x / y);
        printInt(x % y);
    }

    // 7. Type conversion
    {
        double value = 5.7;
        int converted = (int)value;
        printInt(converted);
    }

    // 8. User input (simulated)
    {
        string username = "SimulatedUser";
        printStr(username);
    }

    // 9. Useful math functions
    {
        printInt(sqrt(25));
        printInt(pow(2, 5));
    }

    // 11. If statements
    {
        int num = 10;
        if(num > 5) printStr("Greater than 5");
    }

    // 12. Switches
    {
        int day = 2;
        switch(day){
            case 1: printStr("Monday"); break;
            case 2: printStr("Tuesday"); break;
            default: printStr("Other day");
        }
    }

    // 14. Ternary operator
    {
        int age = 18;
        string result = (age >= 18) ? "Adult" : "Minor";
        printStr(result);
    }

    // 15. Logical operators
    {
        bool a = true, b = false;
        if(a && !b) printStr("Logic works");
    }

    // 17. Useful string methods
    {
        string s = "Bro Code";
        printInt(s.length());
    }

    // 18. While loops
    {
        int i = 0;
        while(i < 3){
            printInt(i);
            i++;
        }
    }

    // 19. Do while loops
    {
        int i = 0;
        do{
            printInt(i);
            i++;
        } while(i < 3);
    }

    // 20. For loops
    {
        for(int i = 0; i < 3; i++){
            printInt(i);
        }
    }

    // 21. Break & continue
    {
        for(int i = 0; i < 5; i++){
            if(i == 2) continue;
            if(i == 4) break;
            printInt(i);
        }
    }

    // 22. Nested loops
    {
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                printInt(i*10 + j);
            }
        }
    }

    // 23. Random number generator
    {
        srand(time(NULL));
        printInt(rand() % 10);
    }

    // 24. Random event generator
    {
        int r = rand() % 3;
        if(r == 0) printStr("Event A");
        else if(r == 1) printStr("Event B");
        else printStr("Event C");
    }

    // 26. User defined functions
    {
        cookFood();
    }

    // 27. Return keyword
    {
        double c = FindCircumfrence(5);
        printInt(c);
    }

    // 28. Overloaded functions
    {
        cookFood("pizza");
    }

    // 29. Variable scope
    {
        int x = 10;
        {
            int x = 20;
            printInt(x);
        }
        printInt(x);
    }

    // 32. Arrays
    {
        int arr[3] = {1,2,3};
        printInt(arr[0]);
    }

    // 33. sizeof()
    {
        int arr[5];
        printInt(sizeof(arr));
    }

    // 34. Iterate over array
    {
        int arr[3] = {1,2,3};
        for(int i = 0; i < 3; i++) printInt(arr[i]);
    }

    // 35. Foreach loop
    {
        int arr[3] = {1,2,3};
        for(int x : arr) printInt(x);
    }

    // 36. Pass array to function
    {
        int arr[5] = {5,4,3,2,1};
        binarySearch(arr, 5);
        printInt(arr[0]);
    }

    // 37. Search array for element
    {
        int arr[5] = {1,2,3,4,5};
        printInt(Search(arr, 5, 3));
    }

    // 38. Sort an array
    {
        int arr[5] = {5,4,3,2,1};
        binarySearch(arr, 5);
        printInt(arr[0]);
    }

    // 39. fill()
    {
        int arr[5];
        for(int i = 0; i < 5; i++) arr[i] = 7;
        printInt(arr[0]);
    }

    // 40. Fill array with user input (simulated)
    {
        int arr[3] = {10,20,30};
        printInt(arr[1]);
    }

    // 41. Multidimensional arrays
    {
        int grid[2][2] = {{1,2},{3,4}};
        printInt(grid[1][1]);
    }

    // 43. Memory addresses
    {
        int x = 10;
        cout << &x << '\n';
    }

    // 44. Pass by VALUE vs pass by REFERENCE
    {
        string a = "Hello";
        string b = "World";
        switchVars(a, b);
        printStr(a);
        printStr(b);
    }

    return 0;
}

int Search(int array[], int size, int element){


    for (int i = 0; i < size; i++){
        if(array[i] == element){ 
            return i; // When it does work sends this
        }
    }
    return -1; // If it doesnt work
}

void binarySearch(int array[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for ( int in = 0; in < size - i; in++)
        {
            if (array[in] > array[in+1]) // Compares the Numbers
            {
                temp = array[in]; // Puts in Temp
                array[in] = array[in+1]; // Sorts
                array[in+1] = temp; // Puts back in array
            }
            
        }
        
    }
}

