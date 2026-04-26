// #include<iostream>
// using namespace std;
// int main() {


// int age;
// cout <<"Enter that age:";
// cin >> age;
// cout << "your age is :"<< age <<endl;
// if(age>=18) {
//     cout<<"elligiable:";

// }
// else {
//     cout<<"not eligiable";
// }
// }


/*ternary oprateer*/
// #include<iostream>
// using namespace std;
// int main() {
//     int a;
//     cout << "enter the age";
//     cin >> a;
//     a>=18? cout<<"eligiable":cout<<"not eligibale";
// return 0;}



/*while loop*/
// #include<iostream>
// using namespace std;
// int main() {
//     int a=1,n;
//     cout<<"enter the number";
//     cin>>n;

// while(a<=n) {
//     cout<<a;
//     a++;

// }

// }

/*for loop*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         cout<<i<<endl;

//     }
// }

/*sum of all the number till n*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n,sum=0;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         sum = sum +i;
        
//     }
//     cout<<sum;
//     return 0;

// }

/*while loop example*/
// 

/*sum of all odd number*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n,i;
//     cout<<"enter the number";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         if(i%2!=0) {
//             cout<<i<<endl;
            
//         }
        
//     }
    
// }


/*do while loop*/

// #include<iostream>
// using namespace std;
// int main() {
//     int n,i=1;
//     cout<<"enter the number";
//     cin>>n;
//     do {
//         cout<<i<<endl;
//         i++;

//     } while(i<=n);
//     return 0;
// }

/*check wether the number is prime or not */
// #include<iostream>
// using namespace std;
// int main() {
//     int n,i=2;
//     cout<<"enter the number";
//     cin>>n;
//     for(i;i<=n-1;i++){
//         if(n%i!=0) {
//             cout<<"prime number";
//         break;
//         }
//         else {
//             cout<<"not prime";
//             break;
//         }
//         }  return 0;
//     }



/*pattern problem*/


// to print number in row and column
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter thr number";
//     cin>>n;

//     for(int i=0;i<=n;i++) {
//         for(int j = 0;j<=n;j++) 
//         { cout<<j;
//     }
//    cout<<endl; }
// }


/*to print ABC.... in pattern*/ 
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter thr number";
//     cin>>n;
//     for(int i=0;i<=n;i++) {
//         char ch = 'A';  ///////////////////ascii value of a is 65.
//         for(int j=0;j<=n;j++) {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }


/* to print continous alphabet*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enetr the number";
//     cin>>n;
//     char ch = 'A';
//     for(int i=0;i<=n;i++) {
//         for(int j=0;j<=n;j++) {
//             cout<<ch;
//             ch++;
//         }
// cout<<endl;
//     }
// }

/*to print number in pattern*/

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<=n;i++) {
//         for(int j=0;j<=n;j++) {
//             cout<<num;
//             num++;
            
//         }
//         cout<<endl;
//     }
// }


/*start patter problem */
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter thr number";
//     cin>>n;
//      char ch='*';
//     for(int i=0;i<=n-1;i++) {
       
//         for(int j=0;j<=i;j++){
//             cout<<ch;


//         }
//         cout<<endl;
//     }
// }

/*pattern problem mirror*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++) {
        
//         for(int j=1;j<=n-i;j++) {
//             cout<<" "; }
//             for(int k=1;k<=i;k++){
//                 cout<<"*";   
//             }
//             cout<<endl;
//         }
//     }
          
//    #include<iostream>
//    using namespace std;
//    int main() {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         for(int j=0;j<=n-i;j++) {
//             cout<<" ";
//         }
//         for(int k=1;k<=i*2-1;k++) {
//             cout<<"*";
//         }
//         cout<<endl;
//         }
//     }   


/**/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number";
// cin>>n;
// for(int i=1;i<=n;i++) {
//     for(int j=i;j>0;j--) {
//         cout<<j;
//     }
//     cout<<endl;
// }
// }


/**/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//      char ch ='A';
//     for(int i=0;i<=n-1;i++) {
       
//         for(int j=0;j<=i;j++) {
//             cout<<" ";
//         }
//         for(int k=0;k<=n-i-1;k++) {
    
//             cout<<ch;
            
//         }
//         ch++;
//         cout<<endl;
//     }

// }


/*functions*/

// #include<iostream>
// using namespace std;
// int sumDigit(int n) 
// {
//     int sum=0;
//     while(n>0) {
//         int lastdig = n%10;
//         sum+=lastdig;
//         n/=10;
//     }
//     return sum;
// }
// int main() {    
//     cout<<sumDigit(321);
// }

/*to calculate ncr binomial coefficient*/
// #include<iostream>
// using namespace std;
// float factN(float x) {
// float fact=1;

//     for(int i=x;i>=1;i--) {
//         fact = fact*i;
//     }
//     return fact;
// }

// int main() {
//     float n,r;
//     cout<<"enter the value of n and r";
//     cin>>n>>r;
//     float ncr = factN(n)/factN(r)*factN(n-r);
//     cout<<"ncr ="<<ncr;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a=5,b=5;
//     cout<<(a&b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int mark[5];
//     cout<<"enter the mark";
//     for(int i=0;i<5;i++) {
//         cin>>mark[i];
//     }

// }





/*gratest of number by array*/

// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int num[5];
//     int a= INT32_MIN;
//     for(int j=0;j<5;j++) {
//         cout<<"enter tha number";
//     cin>>num[j];
    
//     }
//     for(int j=0;j<5;j++) {
//         cout<<num[j]<<" ,";
//     }
    

//     for(int i=0;i<5;i++) {
//         if(num[i] > a) {
//             a=num[i];

//         }
       
//     }

//      cout<<"gratest is "<<a;
//      return 0;
// }


/*smallest of number by array*/

// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int a=INT32_MAX;
//     int num[5];
//     for(int i=0;i<5;i++) {
//         cout<<"enter the number";
//         cin>>num[i];
        
//         if(num[i] < a) {
//             a=num[i];
//         }
//     }
//     for(int i=0;i<5;i++) {
//         cout<<num[i]<<",";
//     }
//     cout<<endl<<"smallest is "<<a;
//     return 0;

// }

//    #include<iostream>
//    #include<vector>
//    using namespace std;
//    int main() {
//     vector<int> v;

//    }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n;


// cout<<"enter the size";
// cin>>n;
// vector<int> v;

// for(int i=0;i<=n-1;i++) {
//   cout<<"enter the element";
//   cin>>v[i];
// }
// for(int i=0;i<=n-1;i++) {
// cout<<v[i]; 
// }
// return 0; 
// }/





