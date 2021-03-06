//
//  AddOneToLargeNumber.h
//  GooglePhoneBible
//
//  Created by Jerome on 6/11/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef AddOneToLargeNumber_h
#define AddOneToLargeNumber_h

#include "DataStructure.h"

using namespace std;

/*
 
 2. 一个整数一数组形势给出，给这个数作加1。
 链接: https://instant.1point3acres.com/thread/176414
 来源: 一亩三分地
 */

vector<int> AddOneToLargeInteger(vector<int> & largeNum) {
    int add = 0;
    for (int i = largeNum.size()-1; i>=0; i--) {
        if (i==largeNum.size()-1) {
            int sum = largeNum[i]+1;
            add = sum/10;
            largeNum[i]=sum%10;
        }
        else {
            int sum = largeNum[i]+add;
            add = sum/10;
            largeNum[i]=sum%10;
        }
    }
    if (add>0) largeNum.insert(largeNum.begin(), 1);
    return largeNum;
}

#endif /* AddOneToLargeNumber_h */
