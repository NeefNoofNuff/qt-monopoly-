#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/Monopoly.h"

class SelectiveField : public Field {
public:

    SelectiveField(int id)
        : Field(id) {};

    SelectiveField() : Field() {};

    void setGroup(std::string g);
    void setCost(int cost);
    void setTax(int tax);
    void setAmount(int amount);

    std::string getGroup();
    int getCost();
    int getTax();
    int getAmount();

    void info() override{
      std::cout << "it's SelectiveField\n";
    }

    std::unique_ptr<AbstractPlayer> buy(std::unique_ptr<AbstractPlayer> player);
    std::unique_ptr<AbstractPlayer> sell(std::unique_ptr<AbstractPlayer> player);
    void pay(std::unique_ptr<AbstractPlayer> player);

    std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player) override;
    void deserialize(const json& data) override;
    void sendSignalToInfo(int ) override;
    void changeColor(int pl_id) override;
    std::unique_ptr<AbstractPlayer> pressToButton(std::unique_ptr<AbstractPlayer> player, std::string action) override;
    void setCostsValues();


protected:
    std::string name = "Name";
    std::string group;
    int level = 0;
    int cost;
    int costSell;
    int tax;
    int tax2;
    int tax3;
    int currentTax;
    int amount;

//signals:
//    void signal(std::string, std::string, int, int, int, int, int, int, int, int, int, int);
};
