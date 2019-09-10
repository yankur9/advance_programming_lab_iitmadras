/*****************
File Name : CS18M063_HW12.cpp
Assignment:  APL-Assignment Lab 12
Author: Ankur Yadav(CS18M063)
Date: 03 Nov 2018
Description: File is using linear searching.
*****************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t, cost=0;
    cin>>t; // no of test case
    while(t--)
    {
        cost=0;
        int val;
        cin>>val;  // input value
        while(val>0)
              {
                  if(val%2==0 && (val-(val/2))>1) // if value is even and fter division their difference is more than one
                   {
                       cost+=4;
                       val/=2;
                   }
                    else          // if value is odd
                    {
                        cost+=2;
                        val-=1;
                    }
              }
        cout<<cost<<endl;
    }
    return 0;
}
