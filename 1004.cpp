//
//  main.cpp
//  刷题
//
//  Created by sky on 15/8/18.
//  Copyright (c) 2015年 sky. All rights reserved.
//

#include <iostream>
#include <string>
//#include <vector>
#include<map>
#include<algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    //int count=1;
    int maxnum=0;
    map<string,int> mymap;
    while(n)
    {
        string a;
        cin>>a;
        map<string, int> ::iterator it;
        it=mymap.find(a);
        if(it==mymap.end())
        {
            mymap.insert(pair<string, int>(a,1));
            //cout<<"inset"<<endl;
            maxnum=max(maxnum,1);
        }
        else
        {
            it->second++;
            //cout<<"nothing"<<endl;
            maxnum=max(maxnum,it->second);
        }
        n--;
        if(n==0)
        {
            for(it=mymap.begin();it!=mymap.end();++it)
            {
               if(it->second==maxnum)
                   break;
            }
            cout<<it->first<<endl;
            cin>>n;
            maxnum=0;
            mymap.clear();
        }
    }
    return 0;
}
