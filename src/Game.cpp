//
// Created by Maikol Guzman on 8/17/20.
//

#include "Game.h"

template<typename T>
Game<T>::Game() {}

template<typename T>
Game<T>::Game(const std::string &name, double price, double tax) : name(name), price(price), tax(tax) {}

template<typename T>
Game<T>::~Game() {}

template<typename T>
const std::string &Game<T>::getName() const {
    return name;
}

template<typename T>
void Game<T>::setName(const std::string &name) {
    Game::name = name;
}

template<typename T>
double Game<T>::getPrice() const {
    return price;
}

template<typename T>
void Game<T>::setPrice(double price) {
    Game::price = price;
}

template<typename T>
double Game<T>::getTax() const {
    return tax;
}

template<typename T>
void Game<T>::setTax(double tax) {
    Game::tax = tax;
}

template<typename T>
double Game<T>::discount() { return getPrice(); }

template<typename T>
double Game<T>::calculatePriceWithTax(Currency var) { return getPrice() - (getPrice() * discount());}

template<typename T>
std::string Game<T>::toString() const{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice();
    return output.str();
}