#pragma once
/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 21:07:06
 * @version v1.0.0
 *****************************************************
 */

/*
*
* Operator Class
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;


class Operator{
    public:
    virtual bool prepare_op() = 0;
    virtual bool execute_op() = 0;
};