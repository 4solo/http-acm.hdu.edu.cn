//
//  main.cpp
//  刷题
//
//  Created by sky on 15/8/18.
//  Copyright (c) 2015年 sky. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int count=1;
    while(n)
    {
        string a,b;
        cin>>a>>b;
        int sizea=(int)a.size();
        int sizeb=(int)b.size();
        int length;
        if (sizea>sizeb)
        {
            length=sizeb;
        }
        else
        {
            length=sizea;
        }
        string c;
        int carry=0;
        int first;
        int second;
        char result;
        for(int i=0;i<length;i++)
        {
            first=a[sizea-1]-'0';
            second= b[sizeb-1]-'0';
            if(first+second+carry>=10)
            {
                result=(first+second+carry)%10+'0';
                carry=(first+second+carry)/10;
            }
            else
            {
                result=first+second+carry+'0';
                carry=0;
            }
            sizea--;
            sizeb--;
            c.insert(c.begin(), result);
        }
        while(sizea!=0)
        {
            first=a[sizea-1]-'0';
            if(first+carry>=10)
            {
                result=(first+carry)%10+'0';
                carry=(first+carry)/10;
            }
            else
            {
                result=first+carry+'0';
                carry=0;
            }
            c.insert(c.begin(), result);
            sizea--;
        }
        while(sizeb!=0)
        {
            second=b[sizeb-1]-'0';
            if(second+carry>=10)
            {
                result=(second+carry)%10+'0';
                carry=(second+carry)/10;
            }
            else
            {
                result=second+carry+'0';
                carry=0;
            }
            c.insert(c.begin(), result);
            sizeb--;
        }
        cout<<"Case "<<count++<<":"<<endl;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
        if(n!=1)
        {
            cout<<endl;
        }
        n--;
    }
    return 0;
}
