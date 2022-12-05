#pragma once
/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 23:20:53
 * @version v1.0.0
 *****************************************************
 */

/*
*
* IListener
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<memory>
#include "power_manager.h"
using namespace std;


class IListener
{
protected:
    std::shared_ptr<PowerManager> pwr_mngr_;

public:
    IListener();
    IListener(std::shared_ptr<PowerManager> pwr_mngr);
    virtual void update(const int &power_level) = 0;
};
