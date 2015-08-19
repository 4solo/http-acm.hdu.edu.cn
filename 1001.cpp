// 
//  main.cpp
//  刷题
//
//  Created by sky on 15/8/18.
//  Copyright (c) 2015年 sky. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
   while(cin>>a)
    {
        int total=0;
        for(int i=0;i<=a;i++)
        {
            total=i+total;
        }
        cout<<total<<endl;
        cout<<endl;
    }
    return 0;
}
