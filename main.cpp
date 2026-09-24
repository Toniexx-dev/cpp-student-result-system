#include <iostream>    
using namespace std;  
  
int main(){  
    string name;  
    string department;  
    int age;  
    int score;  
    int choice;  
    string result;  
    string status;  
  
    cout <<"Enter your name: \n";  
    getline (cin, name); 
    cout <<"Select Department: \n";  
    cout <<"1. Computer Science\n";  
    cout <<"2. Mass Communication\n";  
    cout <<"3. Engineering\n";  
    cout <<"4. Accountancy\n";  
    cout <<"Select your choice: \n";  
    cin >> choice;  
  
    switch(choice){  
        case 1:  
        department = "Computer Science";  
        break;  
        case 2:  
        department = "Mass Communication";  
        break;  
        case 3:  
        department = "Engineering";  
        break;  
        case 4:  
        department = "Accountancy";  
        break;  
        default:  
        department = "Others";  
    }  
    cout <<"Enter your age: \n";  
    cin >> age;  
    cout <<"Enter your score: \n";  
    cin >> score;  
  
    if(score < 0 || score > 100){  
    	result = "Invalid";  
    }  
    else if(score >= 80 && score <= 100){  
        result = "Excellent!";  
    }  
    else if(score >=70 && score <80){  
        result = "Very Good!";  
    }  
    else if(score >=60 && score <70){  
        result = " Good!";  
    }  
    else if(score >=50 && score <60){  
        result = "Pass!";  
    }  
    else {  
        result = "Failed!";  
    }  
  
    if(age >= 18 && score >= 50){  
        status = "Eligible!";  
    }  
    else {  
        status = "Not Eligible!";  
    }  
  
    cout <<"======Student Result System======\n";  
    cout <<"Name: " << name << "\n";  
    cout <<"Age: "<< age << "\n";  
    cout <<"Department: " << department << "\n";  
    cout <<"Score: " << score << "\n";  
    cout <<"Result: "<< result << "\n";  
    cout <<"Eligibility: "<< status << "\n";  
}  
  
