#include <bits/stdc++.h>
#include<string>
using namespace std;


int main(){   
    int A , B;
    string operator;

    cin >> A >> B;
    cin >> operator;

    if (operator == "+"){
        cout << A + B << endl;
    }else if(operator == "-"){
        cout << A - B << endl;
    }else if(operator == "*"){
        cout << A*B << endl;
    }else if(operator == "/"){
        cout << A/B << endl;
    }else{
        cout << "error" << endl;
    }




    //std::cout << "Hello World!" << std::endl;
    //return 0;
    
}
