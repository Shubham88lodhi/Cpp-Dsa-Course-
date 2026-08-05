#include <iostream>
using namespace std;

int main() {
    // pattern

    
    /*    int a ;
    cout<< "enter the value of a :" <<endl;
    cin>> a ;
    int i =1 ;
    int j = 1; // j is born here
    while(i<=a) {
        j=1;  // resetting value of j for every row
        while(j<=a) {
            
            cout<< "* "  ;
            
            j=j+1;       
        }
        cout << endl;
        i = i+1 ;
    }

    * * * * 
    * * * * 
    * * * * 
    * * * *

    */



    

    /*
    
    int b ;
    cout<< "enter the value of b :" <<endl;
    cin>> b ;
    int i =1 ;
    int j = 1; // j is born here
    int count = 1 ;
    while(i<=b) {
        j=1;  // resetting value of j for every row
        
        while(j<=b) {
            
            cout<< count  << " ";
            count = count + 1 ;
            j=j+1;       
        }
        cout << endl;
        i = i+1 ;
    }
    

    1 2 3 4 
    5 6 7 8 
    9 10 11 12 
    13 14 15 16 
    */


    
    /*

    int c ;
    cout<< "enter the value of c :" <<endl;
    cin>> c ;
    int i =1 ;
    int j = 1; 
    while(i<=c) {
        j=1;  
        
        while(j<=i) {
            
            cout<< "*" << " ";
            
            j=j+1;       
        }
        cout << endl;
        i = i+1 ;
    }
    * 
    * * 
    * * * 
    * * * * 
    */



    /*
    int d ; 
    cout << "Enter the value of d :" << endl;
    cin>>d;

    int i = 1 ;
    int count =1 ;
    while (i<=d) {
        int j =1;
        while (j<=i){

            cout<< count << " ";
            count = count + 1 ;
            j = j + 1 ;

        }

        cout << endl ;
        i = i + 1 ;


    }
    
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    */

    /*
    int e ;
    cout << "enter the value of e:" << endl ;
    cin>>e ;
    int i = 1;
    while(i<=e){
        int j =1 ;
        int count = i +j-1 ;
        while (j<=i) {
            cout << count <<" " ;
            count = count  + 1;
            j = j +1 ;

        }

        cout << endl ;
        i = i + 1;
    }
    

    1 
    2 3 
    3 4 5 
    4 5 6 7 

    */





/*
    int f ;
    cout << "Enter the value of f :" << endl ;
    cin>>f;

    int row = 1 ;
    char value = 65 ;
    
    while(row<=f) {
        int col = 1 ;
        while(col<=f) {
            cout << value << " " ;
            col = col +1 ;

        }
        value = value + 1 ;
        cout << endl ;
        row = row+1 ;


    }
    A A A A
    B B B B
    C C C C
    D D D D 
    */



    
    /*
    int g ;
    cout << "Enter the value of g :" << endl ;
    cin>>g;

    int row = 1 ;
    
    
    while(row<=g) {
        int col = 1 ;
        char value = 'A' + row - 1  ;

        while(col<=g) {
        
            cout << value << " " ;
            col = col +1 ;
            value = value + 1 ;

        }
        
        cout << endl ;
        row = row+1 ;
    }

    A B C D 
    B C D E 
    C D E F 
    D E F G 
    */
    



/*
    
     int g ;
    cout << "Enter the value of g :" << endl ;
    cin>>g;

    int row = 1 ;
    
    
    while(row<=g) {
        int col = 1 ;
        char value = 'A' + g - row  ;

        while(col<=row) {
        
            cout << value << " " ;
            col = col +1 ;
            value = value + 1 ;

        }
        
        cout << endl ;
        row = row+1 ;
    }

    D 
    C D 
    B C D 
    A B C D 
    */


    
    /*
    int h ;
    cout << "Enter the value of h :" << endl ;
    cin>>h;

    int i = 1 ;

    while (i<=h){
        int j=1;

        while(j<=h-i){
            cout<< "- " ;
            j = j+1 ;

        }
        j = 1;
        while(j<=i) {

            cout << "* " ;
            j = j +1 ;
        }

        cout << endl ;

        i = i +1 ;

    }

    - - - * 
    - - * * 
    - * * * 
    * * * * 
    */



    
    /*

    int k ;
    cout << " Enter the value of k:" << endl ;
    cin>>k;

    int i = 1;


    while (i<=k) { 
        int j =1 ;
        while ( j <=k+1-i) {
            cout<<"# " ;
            j = j+1 ;


        } 

        i = i +1 ;
        cout << endl ;


    }

    # # # # 
    # # # 
    # # 
    # 
    */



    /*

    int l ;
    cout << " Enter the value of L:" << endl;
    cin>>l;

    int i =1 ;
    int count =1 ;
    while (i<=l){ 
        int j =1 ;
        while(j<=i-1){
            cout <<"  " ;
            j=j+1;


        }

        j=1 ;


        while(j<=l+1-i) {
            cout << count <<" " ;
            j =j+1 ;
            

        }
        i=i+1;
        count=count+1;
        cout<<endl;



    }
    
    1 1 1 1 
      2 2 2 
        3 3 
          4 
    */



    /*
    int m ;
    cout << " Enter the value of M :"  << endl;
    cin>>m;

    int i = 1 ;


    while(i<=m) { 
        int count =1 ;
        int j=1 ;
        while(j<=m-i) {
            cout << "  " ;
            j = j+1 ;

        }    
        j =1 ;

        while  (j<=i) {
            cout << count << " " ;
            j = j+1 ;
            count = count +1;

        }
        count = count -2 ;
        j =1;
        while(j<=i-1) {

            cout<< count << " " ;
            count = count- 1;
            j = j+1 ;
        }

        j =1;
        while(j<=m-i) {
            cout << "  " ;
            j = j+1 ;

        }
        i = i+1;
        cout << endl ;
    }
           1       
         1 2 1     
       1 2 3 2 1   
     1 2 3 4 3 2 1 

   */

    /*
    int n ;
    cout << "Enter the value of n :" << endl; 
    cin>>n;

    int i =1 ;

    while(i<=n) {
        int j =1;
        while(j<=n+1-i){
            cout<< j <<" ";
            j=j+1;


        }
        j=1;
        while(j<=i-1) {
            cout <<"# " ;
            j =j+1;

        }
        j=1;
        while(j<=i-1) {
            cout <<"# " ;
            j =j+1;

        }
        j=1;
        int count=n+1-i;
        while(j<=n+1-i){
            cout<< count <<" " ;
            count=count-1;
            j=j+1;

        }


        cout<< endl;
        i=i+1;



    }

    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 # # 4 3 2 1 
    1 2 3 # # # # 3 2 1 
    1 2 # # # # # # 2 1 
    1 # # # # # # # # 1 

    */




    



































}    



    
