#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    // কোন সংখ্যাকে k ঘর left shift  করা বলতে বুঝায় ঐ সংখ্যাকে 2^k দ্বারা গুণ করা।
    // for(int i=0;i<5;i++)
    // {
    //   cout<<(5<<i)<<endl;
    // }
    
    
    // কোন সংখ্যাকে k ঘর right shift  করা বলতে বুঝায় ঐ সংখ্যাকে 2^k  দ্বারা ভাগ করা।
    // int x = 20;
    // int i=0;
    
    // while(x>=1)
    // {
    // 	cout<<(x >> i)<<endl;
    // 	 x = (x>>i);
    // 	 i++;
    // }
    
    // 2 এর পাওয়ার print করা
    // for(int i =0 ; i<5;i++)
    // {
    // 	cout<<(1<<i)<<endl;
    // }	
    
    
    //  check odd or even
    // int n = 2;
    // if(n&1) cout<<"Odd"<<endl;
    // else cout<<"Even"<<endl;
    
    //Check if a number is power of 2 or not 
    // int x = 128;
    // if( (x&(x-1)) == 0) cout<<"the number is Power of two"<<endl;
    // else cout<<"No"<<endl;
    
    //•	Check if ith bit is set or not
    // or To get bit at any position
    // int x = 10; // 1010
    // int i = 1;
    // if(x&(1<<i)) cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
    
    // •	To flip the ith bit
    // int x = 13; // 1101
    //  int i = 1; 
    //  cout<<(x ^ (1<<i));
    
    // we need to clear bit at position i
    // int clearBit(int n, int pos)
    // {
    //   return (n & (~(1<<pos)));
    // }
    
    //Task-1: যদি i তম বিট অফ থাকে তাহলে অন করতে হবে, আর যদি অন থাকলে অনই থাকবে।
    // int x =10; // 1010
    // int i = 2;
    // bool ok = x & (1<<i);
    // if(!ok)
    // {
    // 	cout<<(x ^ (1<<i))<<endl;
    // }
    // else cout<<x<<endl;
    
    // to set bit in any position
    // int setBit(int n, int pos)
    // {
    // 	return (n | (1<<pos));
    // }
    
    
    //•	Task 2 : যদি i তম বিট অন থাকে তাহলে অফ করতে হবে, আর যদি অফ থাকলে অফই থাকবে।
    // int x =10; // 1010
    // int i = 3;  
    // bool ok = x & (1<<i);
    // if(ok)
    // {
    // 	cout<<(x ^ (1<<i))<<endl;
    // }
    // else cout<<x<<endl;
    
    // To know how many set bits
    // cout<<__builtin_popcount(5);
    
    
    // Find out X % (2^k)
    // int x = 14;
    // int b = 8; // 2 ^ 3
    // int k = 3;
    // cout<<(x & ((1<<k) -1) );
    
    // Swap two numbers without using extra variables
    // int x =10;
    // int y =43;
    // x = x ^ y;
    // y = x ^ y;
    // x = x ^ y;
    // cout<<x<<" "<<y<<endl;
    
    
    /// Special property :
    // no. of set bits in A = x;
    // no. of set bits in B = y;
    // no. of set bits in (A ^ B) = z;
    
    // then 
    // z is even if (x + y) is even 
    // z is odd if (x + y) is odd
    
     // int a = 5; // 101
    // int b = 3; // 011
    
    // it's because xor operation always reduce two bits
    
    
    

    
    //Question: if x is 5 make it 10 or
      // if x is 10 make it 5
      	
      // 	if(x== 5) x =10;
      // if(x == 10) x =5;
      
      // int x = 10;  
      // cout<<(10 ^ 5 ^ x);
    
    
    //  (A + B) = (A ^ B) + 2*(A & B);
     //  (A + B) = (A | B) + (A & B);
    
    //Clear the right most set bit
    //  n         = 00110100
    // n-1       = 00110011
    // --------------------
    // n & (n-1) = 00110000
    
    
    // int xorInRange(int n){
    // // Check if n is
    // // congruent to 1 modulo 4
    // if(n%4 == 1){
    //     return 1; 
    // }
    // // Check if n is congruent
    // // to 2 modulo 4
    // else if(n%4 == 2){
    //     return n+1; 
    // }
    // // Check if n is
    // // congruent to 3 modulo 4
    // else if(n%4 == 3){
    //     return 0; 
    // }
    // // Return condition
    // // when n is a multiple
    // else{
    //     return n; 
    // }
    // }

    
    int CountsetBits(int n)
    {
    	int cnt = 0;
    	while(n)
    	{
    		cnt++;
    		n = n & (n-1);
    	}
    	return cnt;
    }
    
    
    
}