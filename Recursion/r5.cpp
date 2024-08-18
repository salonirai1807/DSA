#include<iostream>

using namespace std;

// Reverse Strings

void reverse(string& s, int i, int j) {
    // Base Condition
    if(i>j) {
        return ;
    }

    // Recursive Statement
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);
}


// Check Pallindrome

bool pallindrome(string str, int i, int j) {
    // Base Condition
    if(i>j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }

    else {
        i++;
        j--;
        pallindrome(str, i, j);
    }
}


// Finding Power

int pow(int a, int b) {
    // Base Condition
    if(b==0) {
        return 1;
    }

    if(b==1) {
        return a;
    }

    int ans = pow(a, b/2);

    if(b%2 == 0) {
        return ans*ans;
    }
    else {
        return a*ans*ans;
    }
}


int main() {
    string s;
    cout << "Enter a String : ";
    cin>>s;

    reverse(s, 0, s.length()-1);

    cout << s << endl <<endl;


    string str;
    cout << "Enter a String : ";
    cin>>str;

    bool ans = pallindrome(str, 0, str.length()-1);

    if(ans) {
        cout << "PALLINDROME! :)";
    }
    else {
        cout << "NOT PALLINDROME! :(";
    }

    int a, b;
    cout << endl << endl << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    cout << "a raised to the power b is : " << pow(a, b);
    
    return 0;
}