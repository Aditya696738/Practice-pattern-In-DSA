#include <iostream>
using namespace std;


// check the int is prime or not

 bool Is_int_Prime(int n){
    
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    if (Is_int_Prime(n)) cout << "numer is prime " << endl;
    else cout << "number is not prime " << endl;
    return 0;
} 

// pattern 1

 int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    while(i <= n){

        int j = 1;
        while( j <= n){

            cout << " * ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
} 

// pattern 2

 int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    while(i <= n){

        int j = 1;
        while( j <= n){
            cout <<  i  << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
} 

// pattern 3

 int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){

            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
} 

// pattern 4
 int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << "*" << " ";
            j+= 1;
        }
        cout << endl;
        i+= 1;
    }
    
    return 0;
} 

// pattern 5

  int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << i << " ";
            j+= 1;
        }
        cout << endl;
        i+= 1;
    }
    
    return 0;
}  


// pattern 6

 int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    int count = 1;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count << " ";
            count ++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
} 

// pattern 7

int main(){
    int n ;
    cout << "n - " ;
    cin >> n;

    int i = 1;
    int count = 1;

    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << count << " ";
            count ++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
} 