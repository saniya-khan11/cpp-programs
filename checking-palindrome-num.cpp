//Write a C++ program to check the given number is palindrome or not
#include<iostream>
using namespace std;
int length_of_num(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
bool isPalindrome(int n)
{
    int length=length_of_num(n);
    // cout<<length<<endl; -> This I created for checking the length
     int *arr = new int[length]; // Creating Dynamically Allocated Memory for array-- here arr is a pointer to the first element of the array.
    bool check= true;
    for (int i=0;i<length;i++)
    {
        arr[i]=n%10;
        n/=10;
    }
    for (int i=0,j=length-1;i<j;i++,j--)
    {
        if (arr[i] != arr[j])
        {
            check = false;
            break;
        }
    }

    delete[] arr; // Freeing the dynamically allocated memory

    return check;
}
int main()
{
  int num;
  cout<<"Enter your number : "<<endl;
  cin>>num;
  if(isPalindrome(num))
    cout<<"This is a Palindrome number.";
  else
    cout<<"This is not a Palindrome number.";
return 0;
}