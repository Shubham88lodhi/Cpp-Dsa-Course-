#include<iostream>
using namespace std;

// Use comments on other codes for easy output


 // If , else , else if  Loops
int main() {
    
    int a ;
    cout << " Enter value of a" << endl ;
    cin>>a ;
    int b ;
    cout << " Enter Value of b" << endl ;
    cin>>b ;

   

    if(a>0)
        { cout << " A is Positive" << endl ;}

    else 
        { cout << " A is Negative" << endl ; }   
    

    cout <<  " Value of a is :" << a << endl;
    cout <<  " Value of b is :" << b << endl;

    if(a>b) 
        { cout << " A is greater than B" << endl ;
    }
    else if ( a<b) {
        cout << " A is lesser than B" << endl ;
    }
    else {
        cout << " A is Equal to B" << endl ;
    }

    

    // While loops
    // sum from (1 to N)
    int n ;
    cout << " Enter value of n" << endl ;
    cin>>n;
    int i = 1 ;
    int sum = 0 ;
    while(i<=n) {
       sum = sum + i ;
        i = i+1 ;

    }

    cout << " Sum =" << sum << endl ;
    

    // Some problem in while loop
    
    /* 
    int k ;
    cout << " Enter value of k" << endl ;
    cin>>k ;
    int j = 2 ;
    while( j<k) {
        if (k%j !=0) {
            j = j+1 ;
             cout << " This is prime for" << j  << endl ;
        }

        if (k%j==0) { cout << " this is not a prime nunber for " 
            ;
        }
   
    }
    */

        // Pattern
    
    int r;
     cout << "Enter value of r" << endl ;
    cin>>r;
    int z =1;
    while(z<=r) {
        // coloumn (J) only  in inner loop not in outer loop
        int j =1 ;
        while ( j <=r) { 
            cout  << "* " ;
            j = j +1 ;

        }
        cout << endl ;
        z=z+1 ;
    
    }
    











  // Homework

  // 1- In char ch function , input a value from user and if the letter is in between ( a to z) then print this is smallcase OR in betwwen ( A to Z) Print This is uppercase and if in Between (0 to 9) Print This is numeric

  
    char ch ;
    cout << " enter value of ch" << endl;
    cin >>ch ;

    if (ch>='A' && ch <= 'Z' ) {
        cout << " This is Uppercase " << endl;
    }
  
    else if ( ch >= 'a' && ch <= 'z') {
        cout << " This is lowercase" << endl ;
    }

    else  { cout <<  "This is Numeric" << endl ;} 
    

    // 2- Find sum of all even numbers from ( 1 to N )
    
        int m ;
        cout << " Enter value of m" << endl ;
        cin>>m ;
        int x =2 ;
        int sumeven= 0 ;
        while(x<=m) {
            sumeven = sumeven + x ;
            x = x+2 ;
        }
        cout << "Sum of all even nunbers from 1 To N is =" << sumeven << endl ;
    
    // 3 - Make celcius and fahrenhiet Table 

    int p ; 
    cout << " Enter value of p" << endl ;
    cin>>p;
    int c = 0 ;
     cout << " F        C" << endl ;
    while (c<=p) {
       
        double f = (9*c)/5 + 32 ;
        cout << f << "       " <<c << endl ;



        c  = c +1 ;


    }

}

