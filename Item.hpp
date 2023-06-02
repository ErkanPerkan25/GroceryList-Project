#ifndef _ITEM_HPP_
#define _ITEM_HPP_

class Item {
private:
    // Name of the item (ex: Carrots)
    std::string _name;
public:
    // Default constructor
    Item() : _name("") {}

    //Accessors
    const std::string &getName() const {return _name;}

    //Modifiers
    std::string &getName() {return _name;}
};

#endif // !_ITEM_HPP_
