// PATTERNS BASED PROBLEM IN CPP  
// Author :  Bipul Mishra 

// Pattern-1: Rectangular Star Pat
                // * * * * * *
                // * * * * * *
                // * * * * * *
                // * * * * * *
                // * * * * * *

// #include <iostream>
// using namespace std ;

// void pattern1(int N){
//     for(int i =0 ; i<N ; i++){
//         for(int j=0 ; j<N ; j++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
// } 
// int main(){
//     int N =5;
//     pattern1(N);
//     return 0 ;
// }        

// Pattern-2: Right-Angled Triangle Pattern
                // * 
                // * * 
                // * * *
                // * * * *
                // * * * * *


// #include <iostream>
// using namespace std ;

// void pattern2(int N){
//     for(int i =0 ; i<N ; i++){
//         for(int j=0 ; j<=i ; j++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
// } 
// int main(){
//     int N =5;
//     pattern2(N);
//     return 0 ;
// }

// Pattern - 3: Right-Angled Number Pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//  #include <iostream>
//  using namespace std ;

//  void pattern3(int N){
//      for(int i =1 ; i<=N ; i++){
//          for(int j=1 ; j<=i ; j++){
//              cout << j << " ";
//          }
//          cout << endl ;
//      }
//  } 
//  int main(){
//      int N =5;
//      pattern3(N);
//      return 0 ;
//  }

// Pattern - 4: Right-Angled Number Pyramid - II
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

//   #include <iostream>
//   using namespace std ;

//   void pattern4(int N){
//       for(int i =1 ; i<=N ; i++){
//           for(int j=1 ; j<=i ; j++){
//               cout << i << " ";
//           }
//           cout << endl ;
//       }
//   } 
//   int main(){
//       int N =5;
//       pattern4(N);
//       return 0 ;
//   }

// Pattern-5: Inverted Right Pyramid

// * * * * * 
// * * * * 
// * * * 
// * * 
// *
//    #include <iostream>
//    using namespace std ;

//    void pattern5(int N){
//        for(int i =1 ; i<=N ; i++){
//            for(int j=N ; j>=i ; j--){
//                cout << "* ";
//            }
//            cout << endl ;
//        }
//    } 
//    int main(){
//        int N =5;
//        pattern5(N);
//        return 0 ;
//    }

// Pattern - 6: Inverted Numbered Right Pyramid

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

    // #include <iostream>
    // using namespace std ;

    // void pattern6(int N){
    //     for(int i =1 ; i<=N ; i++){
    //         for(int j=N ; j>=i ; j--){
    //             cout << N-j+1 << " ";
    //         }
    //         cout << endl ;
    //     }
    // } 
    // int main(){
    //     int N =5;
    //     pattern6(N);
    //     return 0 ;
    // }

// Pattern - 7: Star Pyramid
                //      *     
                //     ***    
                //    *****   
                //   *******  
                //  *********

// #include <iostream>
// using namespace std ;

// void pattern7(int N ){
//     for(int i=0 ; i <N ; i++){
//         for(int j=0 ; j< N-i-1 ; j++){
//             cout << " " ;
//         }
//         for(int j=0 ; j< 2*i+1 ; j++){
//             cout << "*" ;
//         }
//         for(int j=0 ; j< N-i-1 ; j++){
//             cout << " " ;
//         }
//         cout << endl ;

//     }
// }
// int main(){
//     int N=5;
//     pattern7(N);
//     return 0;
// }

// Pattern - 8: Inverted Star Pyramid

//  *********
//   *******
//    ***** 
//     ***    
//      *

//  #include <iostream>
//  using namespace std ;

//  void pattern8(int N ){
//      for(int i=0 ; i <N ; i++){
//          for(int j=0 ; j< i ; j++){
//              cout << " " ;
//          }
//          for(int j=0 ; j< 2*N - (2*i +1) ; j++){
//              cout << "*" ;
//          }
//          for(int j=0 ; j< i ; j++){
//              cout << " " ;
//          }
//          cout << endl ;

//      }
//  }
//  int main(){
//      int N=5;
//      pattern8(N);
//      return 0;
//  }

// Pattern - 9: Diamond Star Pattern

//  #include <iostream>
//  using namespace std ;

//  void pattern9(int N ){
//      for(int i=0 ; i <N ; i++){
//          for(int j=0 ; j< N-i-1 ; j++){
//              cout << " " ;
//          }
//          for(int j=0 ; j< 2*i+1 ; j++){
//              cout << "*" ;
//          }
//          for(int j=0 ; j< N-i-1 ; j++){
//              cout << " " ;
//          }
//          cout << endl ;
//      }
//      for(int i=0 ; i <N ; i++){
//          for(int j=0 ; j< i ; j++){
//              cout << " " ;
//          }
//          for(int j=0 ; j< 2*N - (2*i +1) ; j++){
//              cout << "*" ;
//          }
//          for(int j=0 ; j< i ; j++){
//              cout << " " ;
//          }
//          cout << endl ;

//      }

//  }
//  int main(){
//      int N=5;
//      pattern9(N);
//      return 0;
//  }

// Pattern - 10: Half Diamond Star Pattern
    //  *
    //  **
    //  *** 
    //  ****
    //  *****
    //  ******  
    //  *****
    //  ****
    //  ***    
    //  **
    //  *

//  #include <iostream>
//  using namespace std ;
//  void patterns10(int N){
//     for(int i=1 ; i<=2*N-1 ;i++){
//         int stars =i;
//         if(i>N) stars =2*N-i ;
//         for(int j=1 ;j<=stars;j++ ){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
//  }
// int main(){
//     int N =5;
//     patterns10(N);
//     return 0;

// }

// Pattern - 11: Binary Number Triangle Pattern
// 1
// 01
// 101
// 0101
// 10101

// #include <iostream>
// using namespace std ;
// void patterns11(int N){
//     int start =1 ;
//     for(int i =0 ; i< N ; i++){
//         if(i%2 ==0) start=1;
//         else start =0 ;
//         for(int j=0 ; j<=i ; j++){
//             cout << start;
//             start = 1-start;

//         }
//         cout << endl ;
//     }
// }
// int main(){
//     int N =5 ;
//     patterns11(N);
//     return 0;
// }

// Pattern - 12: Number Crown Pattern
// 1          1
// 12        21
// 12       321
// 1234    4321

// #include <iostream>
// using namespace std ;
// void Patterns12(int N) {
//     int space = 2*(N-1);
//     for(int i=1 ;i<=N ;i++){
//         // Numbers 
//         for(int j=1 ; j<=i; j++){
//             cout << j;
//         }

//         // space 
//         for(int j=1 ; j<=space ; j++){
//             cout << " ";
//         }
//         // numbers 
//         for (int j=i ; j>=1 ; j--){
//             cout << j ;
//         }
//         cout << endl ;
//         space-=2;

//     }

// }
// int main(){
//     int N =4 ;
//     Patterns12(N);
//     return 0;
// }

// Pattern - 13: Increasing Number Triangle Pattern
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11  12  13  14  15

// #include <iostream>
// using namespace std ;
// void Patterns13(int N){
//     int num=1 ;
//     for(int i=1 ; i<=N ;i++){
//        for(int j=1 ;j<=i ; j++){
//           cout << num << " " ;
//           num=num+1 ;
//        }
//        cout << endl ;
//     }
// }
// int main(){
//     int N =5 ;
//     Patterns13(N);
//     return 0 ;
// }

// Pattern-14: Increasing Letter Triangle Pattern
// A
// A B
// A B C
// A B C D
// A B C D E

// #include <iostream>
// using namespace std ;
// void Patterns14(int N){
//     for(int i=0 ; i< N ; i++){
//         for(char ch='A' ; ch<= 'A'+i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl ;
//     }

// }
// int main(){
//     int N =5 ;
//     Patterns14(N);
//     return 0 ;
// }


// Pattern-15: Reverse Letter Triangle Pattern
// A B C D E 
// A B C D
// A B C
// A B
// A

// #include <iostream>
// using namespace std ;
// void Patterns15(int N){
//     for(int i=0 ; i< N ; i++){
//         for(char ch='A' ; ch<= 'A'+(N-i-1); ch++){
//             cout << ch << " ";
//         }
//         cout << endl ;
//     }

// }
// int main(){
//     int N =5 ;
//     Patterns15(N);
//     return 0 ;
// }

//  Pattern - 16: Alpha-Ramp Pattern

// A 
// B B
// C C C
// D D D D
// E E E E E

// #include <iostream>
// using namespace std ;
// void Patterns16(int N){
//     for(int i=0 ; i< N ; i++){
//         char ch ='A' + i ;
//         for(int j=0 ; j<i ; j++){
//             cout << ch << " ";
//         }
//         cout << endl ;
//     }

// }
// int main(){
//     int N =5 ;
//     Patterns16(N);
//     return 0 ;
// }


// Pattern - 17: Alpha-Hill Pattern
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 

// #include <iostream>
// using namespace std ;
// void Patterns17(int N){
//     for(int i=0 ; i<N ; i++){
//         for(int j=0 ; j< N-i-1 ; j++){
//             cout << " ";
//         }
//         char ch = 'A' ;
//         int breakpoint =(2*i+1)/2 ;
//         for(int j=0 ; j<2*i+1 ;j++){
//             cout << ch ;
//             if(j<=breakpoint) ch++ ;
//             else ch-- ;
//         }
//         for(int j=0 ;j<N-i-1 ; j++){
//             cout << " " ;
//         }
//         cout << endl ;

//     }
    

// }
// int main(){
//     int N =5 ;
//     Patterns17(N);
//     return 0 ;
// }


// Pattern-18: Alpha-Triangle Pattern
// Input Format: N = 6
// Result:   
// F
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F

// #include <iostream>
// using namespace std ;
// void Patterns18(int N){
//      for(int i=0 ; i<N ; i++ ){
//         for (char ch=('A'+N-1)-i ; ch <=('A'+N-1); ch++){
//             cout << ch << " ";
//         }
//         cout << endl ;
//      }
    

// }
// int main(){
//     int N =5 ;
//     Patterns18(N);
//     return 0 ;
// }


// Pattern-19: Symmetric-Void Pattern

// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

// #include <iostream>
// using namespace std ;
// void Patterns19(int N){
//       int inis = 0 ;
//       for(int i = 0 ; i<N ; i++){
//         for(int j=1 ; j <= N-i ; j++){
//             cout << "*" ;
//         }
//         for(int j= 0 ; j<inis ; j++){
//             cout << " " ;
//         }
//         for(int j=1 ; j<=N-i ; j++){
//             cout << "*" ;
//         }
//         inis+=2;
//         cout<<endl;

         
//       }
//       inis = 2*N -2 ;
//       for(int i=1 ; i<=N ; i++){
//         for(int j=1 ; j<=i ; j++){
//             cout << "*";
//         }
//         for(int j=0 ; j<inis ; j++){
//             cout << " ";
//         }
//         for(int j=1 ; j<=i ; j++){
//             cout << "*";
//         }
//         inis -=2 ;
//         cout << endl ;
//       }
    

// }
// int main(){
//     int N =5 ;
//     Patterns19(N);
//     return 0 ;
// }

// Pattern - 20: Symmetric-Butterfly Pattern
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

// #include <iostream>
// using namespace std ;
// void Patterns20(int N){
//       int spaces = 2*N-2 ;
//       for(int i=1 ; i<=2*N-1 ; i++){
//         int stars = i ;
//         if(i>N) stars = 2*N-i ;
//         for(int j= 1 ; i<= stars ; j++){
//             cout << "*" ;
//         }
//         for(int j=1 ; j<=spaces ; j++){
//             cout << " " ;
//         }
//         for(int j=1 ; j<= stars ; j++){
//             cout << "*" ;
//         }
//         cout << endl ;
//         if(i<N) spaces -=2 ;
//         else spaces +=2 ;
//       }

// }
// int main(){
//     int N =5 ;
//     Patterns20(N);
//     return 0 ;
// }

// Pattern - 21: Hollow Rectangle Pattern

// ******
// *    *
// *    *
// *    *
// *    *
// ******

// #include <iostream>
// using namespace std ;
// void Patterns21(int N){
//        for(int i=0 ; i<N ; i++){
//         for(int j=0 ; j<N ; j++){
//             if(i==0 || j==0 || i==N-1 || j==N-1)
//             cout << "*";
//             else cout << " ";
//         }
//         cout << endl ;
//        }
// }
// int main(){
//     int N =5 ;
//     Patterns21(N);
//     return 0 ;
// }


// Pattern - 22: The Number Pattern
// 6 6 6 6 6 6 6 6 6 6 6 
// 6 5 5 5 5 5 5 5 5 5 6 
// 6 5 4 4 4 4 4 4 4 5 6 
// 6 5 4 3 3 3 3 3 4 5 6 
// 6 5 4 3 2 2 2 3 4 5 6 
// 6 5 4 3 2 1 2 3 4 5 6 
// 6 5 4 3 2 2 2 3 4 5 6 
// 6 5 4 3 3 3 3 3 4 5 6 
// 6 5 4 4 4 4 4 4 4 5 6 
// 6 5 5 5 5 5 5 5 5 5 6 
// 6 6 6 6 6 6 6 6 6 6 6

// #include <iostream>
// using namespace std ;
// void Patterns22(int N){
//         for(int i=0 ; i<2*N-1 ; i++){
//             for(int j=0 ; j<2*N-1 ; j++){
//                 int top = i ;
//                 int bottom = j ;
//                 int right = (2*N-2)-j ;
//                 int left = (2*N-2) - i ;
//                 cout << (N-min(min(top , bottom) , min(left,right))) << " ";
                
//             }
//             cout << endl ;
//         }
// }
// int main(){
//     int N =5 ;
//     Patterns22(N);
//     return 0 ;
// }
