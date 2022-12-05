/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 22:12:57
 * @version v1.0.0
 *****************************************************
 */

/*
 *
 * Observer design pattern main file
 *
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <memory>
#include "iListener.h"
#include "power_manager.h"
#include "iListener.cpp"
#include "power_manager.cpp"
using namespace std;

class Display : public IListener
{
private:
    bool display_state = true;

public:
    void update(const int &power_level)
    {
        if (power_level <= 30)
        {
            if (display_state)
            {
                std::cout << "DISPLAY::Display is turning off \n";
                display_state = false;
            }
        }
        else
        {
            if (!display_state)
            {
                std::cout << "DISPLAY::Display is turning on \n";
                display_state = false;
            }
        }
    }
};

class Alert : public IListener
{
public:
    void update(const int &power_level)
    {
        if (power_level <= 30)
        {
            std::cout << "Alert::Power level is " << power_level << "\n";
        }
    }
};

class Charger : public IListener
{
public:
    Charger(std::shared_ptr<PowerManager> charger_pwr_mngr) : IListener(charger_pwr_mngr){};
    void update(const int &power_level)
    {
        if (power_level <= 30)
        {
            std::cout << "CHARGER::Charged to 100% \n";
            this->pwr_mngr_->set_power_level(100);
        }
    }
};

int main()
{
    std::shared_ptr<PowerManager> pwr_mngr = std::make_shared<PowerManager>();
    std::shared_ptr<IListener> display = std::make_shared<Display>();
    std::shared_ptr<IListener> pop_up = std::make_shared<Alert>();
    std::shared_ptr<IListener> charger = std::make_shared<Charger>(pwr_mngr);
    pwr_mngr->register_listerner(display);
    pwr_mngr->register_listerner(pop_up);
    pwr_mngr->set_power_level(100);
    pwr_mngr->set_power_level(70);
    pwr_mngr->set_power_level(40);
    pwr_mngr->set_power_level(10);
    pwr_mngr->set_power_level(7);
    pwr_mngr->set_power_level(3);
    pwr_mngr->set_power_level(0);

    return 1;
}