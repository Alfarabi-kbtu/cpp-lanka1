Task 1:
#include <iostream>
using namespace std;
int main(){
    string name;
    cin >> name;
    cout << "Hello, " << name;
    return 0;
}
Task 2:
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << "The sum is " << a+b;
    return 0;
}
Task 3:
#include <iostream>
using namespace std;
int main(){
    float a;
    cin >> a;
    float pi= 3.14;
    cout << "The area is " << pi*a*a;
    return 0;
}
Task 4:
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << "You are " << a*12 << " months old";
    return 0;
}
Task 5:
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << "Temperature in Fahrenheit " << (a*(9/5))+32;
    return 0;
}
Task 6:
#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    int square = number * number;
    cout << "Square equals to: " << square << endl;
    return 0;
}
Task 7:
#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    double princip;
    cin >> princip;
    double rate;
    cin >> rate;
    double time;
    cin >> time;
    double simpleInterest = (princip * rate * time) / 100.0;
    cout << fixed << setprecision(2);
    cout << "Simple Interest is: " << simpleInterest << endl;
    return 0;
}
Task 8:
#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    double weight_kg;
    cin >> weight_kg;
    double height_m;
    cin >> height_m;
    double bmi = weight_kg / (height_m * height_m);
    cout << fixed << setprecision(2);
    cout << "Your BMI is: " << bmi << endl;
    return 0;
}
Task 9:
#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    double num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    double average = (num1 + num2 + num3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average is: " << average << endl;
    return 0;
}
Task 10:
#include <iostream>
using namespace std; 
int main() {
    int number;
    cout << "Введите целое число: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "number " << number << " even " << endl;
    } else {
        cout << " number " << number << " odd " << endl;
    }
    return 0;
}