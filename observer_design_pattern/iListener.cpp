
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

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include "iListener.h"
#include <list>
#include <memory>
using namespace std;

IListener::IListener(std::shared_ptr<PowerManager> pwr_mngr)
{
    pwr_mngr_ = pwr_mngr;
    std::shared_ptr<IListener> this_class(this);
    std::cout << "Self registering listener\n";
    pwr_mngr_->register_listerner(this_class);
}
