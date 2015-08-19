//
//  main.cpp
//  刷题
//
//  Created by sky on 15/8/18.
//  Copyright (c) 2015年 sky. All rights reserved.
//

#include <iostream>
//#include <string>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int count=1;
    while(n)
    {
        int a;
        cin>>a;
        vector<int> ha(a+1);
        for(int i=1;i<a+1;i++)
        {
            cin>>ha[i];
        }
        int start=1;
        int end=1;
        int max=ha[1];
        int total=0;
        int start2=1;
        for(int i=1;i<a+1;i++)
        {
            total=ha[i]+total;
            if(total>max)
            {
                start=start2;
                max=total;
                end=i;
            }
            if(total<0)
            {
                start2=i+1;
                total=0;
            }
        }
        cout<<"Case "<<count++<<":"<<endl;
        cout<<max<<" "<<start<<" "<<end<<endl;
        if(n!=1)
        {
            cout<<endl;
        }
        n--;
    }
    return 0;
}
