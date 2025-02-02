#include<iostream>
#include<string>
#include <map>
#include <vector>

using namespace std;
map<string, vector<pair<string, int>>> products;

void mapping (string product, int &amount, int price) {
    string add_to_cart;

    cout << "The price for " << amount << " " << product << " is P" << price * amount << "." << endl;
    cout << "Add to cart? (type 'yes' if yes, otherwise 'no'.)\n";
    cin >> add_to_cart;
    if (add_to_cart == "no") {
        amount = 0;
    }
}

void addProducts()
{
    products["Pen"].push_back(make_pair("Gel Pen", 21));
    products["Pen"].push_back(make_pair("HBW-2000", 15));
    products["Pen"].push_back(make_pair("Parker", 17));
    products["Pen"].push_back(make_pair("Panda", 13));
    products["Pencil"].push_back(make_pair("Mongol", 7));
    products["Pencil"].push_back(make_pair("Faber-Castell", 28));    
    products["Paper"].push_back(make_pair("Yellow Pad", 25));
    products["Paper"].push_back(make_pair("Whole", 35));
    products["Paper"].push_back(make_pair("1/2 Yellow Pad", 20));
    products["Paper"].push_back(make_pair("Index Card", 10));
    products["Notebook"].push_back(make_pair("Spiral Notebook", 45));
    products["Notebook"].push_back(make_pair("Leather Notebook", 60));
    products["Notebook"].push_back(make_pair("Math Notebook", 30));
    products["Notebook"].push_back(make_pair("Music Notebook", 32));
    products["Notebook"].push_back(make_pair("Art Notebook", 27));
    
}

int main() {
    string decision, add_to_cart, view_cart, product, checkout_option, productChosen;
    int chosen_category, sub_category, amount, _xa;

    int pen, pencil, yellow_pad, notebook, book;
    int shirt, shorts, pants, polo, hat, hoodie;
    float price, totprice;

    int paymentMethod;
    addProducts();

    map<string, pair<int, int>> cart;

    cout << "Welcome to Lazada!\n";

    cout << "If you wish to shop, type 'yes', otherwise 'no'.\n";
    cin >> decision;
    do {
        if (decision == "yes" || decision == "Yes") {
            vector<string> oms;
            vector<int> omsim;
            system("clear");
            cout << "Choose category\n";
            cout << "1. Pen\n";
            cout << "2. Pencil\n";
            cout << "3. Paper\n";
            cout << "4. Notebook\n";
            cout << "5. Book\n";
            cout << "0. Cancel\n";
            cin >> chosen_category;

            system("clear");
            switch (chosen_category) {
                case 1:
                    product = "Pen";
                    _xa = 1;
                    cout << "Choose a pen product:\n";
                    for (auto iter = products["Pen"].begin(); iter != products["Pen"].end(); iter++)
                    {
                        cout << _xa << ". " << iter->first << endl;
                        oms.push_back(iter->first);
                        omsim.push_back(iter->second);
                        _xa++;
                    }
                    cout << "0. Cancel\n";
                    cin >> sub_category;
                    
                    system("clear");
                    cout << "Category:\t" << product << endl;
                    cout << "Product:\t" << oms[sub_category - 1] << endl;
                    cout << "Price:\t\t" << omsim[sub_category - 1] << endl;

                    cout << "How many? (type '0' to cancel)\n";
                    cin >> amount;
                    if (amount >= 1) {
                        system("clear");
                        price = omsim[sub_category - 1];
                        mapping(product, amount, price);
                        if (amount < 1) {
                            break;
                        }
                        cart[oms[sub_category - 1]] = {amount, price};
                    }
                break;
                case 2:
                    cout << "Choose a pencil product:\n";
                    cout << "1. Shirt\n";
                    cout << "2. Short\n";
                    cout << "3. Pants\n";
                    cout << "4. Polo\n";
                    cout << "5. Hat\n";
                    cout << "6. Hoodie\n";
                    cout << "0. Cancel\n";
                    cin >> sub_category;

                    switch (sub_category) {
                        case 1:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Shirt";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        case 2:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Shorts";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        case 3:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Pants";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        case 4:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Polo";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        case 5:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Hat";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        case 6:
                            cout << "How many? (type '0' to cancel)\n";
                            cin >> amount;
                            if (amount >= 1) {
                                system("clear");
                                price = 15;
                                product = "Hoodie";
                                mapping(product, amount, price);
                                if (amount < 1) {
                                    break;
                                }
                                cart[product] = {amount, price};
                            }
                            break;
                        default:
                            break;
                    }
                break;
                
                //Josiah Case 3 update

                case 3:
                    product = "Paper";
                    _xa = 1;
                    cout << "Choose a paper product:\n";
                    for (auto iter = products[product].begin(); iter != products[product].end(); iter++)
                    {
                        cout << _xa << ". " << iter->first << endl;
                        oms.push_back(iter->first);
                        omsim.push_back(iter->second);
                        _xa++;
                    }
                    cout << "0. Cancel\n";
                    cin >> sub_category;

                    system("clear");
                    cout << "Category:\t" << product << endl;
                    cout << "Product:\t" << oms[sub_category - 1] << endl;
                    cout << "Price:\t\t" << omsim[sub_category - 1] << endl;

                    cout << "How many? (type '0' to cancel)\n";
                    cin >> amount;
                    if (amount >= 1) {
                        system("clear");
                        price = omsim[sub_category - 1];
                        mapping(product, amount, price);
                        if (amount < 1) {
                            break;
                        }
                        cart[oms[sub_category - 1]] = {amount, price};
                    }
                break;

                // Josiah - Case 4
                case 4:
                    cout << "Choose a Notebook product:\n";
                    product = "Notebook";
                    _xa = 1;
                    for (auto iter = products[product].begin(); iter != products[product].end(); iter++)
                    {
                        cout << _xa << ". " << iter->first << endl;
                        oms.push_back(iter->first);
                        omsim.push_back(iter->second);
                        _xa++;
                    }
                    cout << "0. Cancel\n";
                    cin >> sub_category;
                    
                    system("clear");
                    cout << "Category:\t" << product << endl;
                    cout << "Product:\t" << oms[sub_category - 1] << endl;
                    cout << "Price:\t\t" << omsim[sub_category - 1] << endl;

                    cout << "How many? (type '0' to cancel)\n";
                    cin >> amount;
                    if (amount >= 1) {
                        system("clear");
                        price = omsim[sub_category - 1];
                        mapping(product, amount, price);
                        if (amount < 1) {
                            break;
                        }
                        cart[oms[sub_category - 1]] = {amount, price};
                    }
                break; // No break;
                case 5:
                    cout << "Choose a Book\n";
                    break;
                default:
                    break;
            }
            cin.clear();
            system("clear");
            cout << "If you wish buy more, type 'yes', otherwise 'no'.\n";
            cin >> decision;
        }
    } while (decision == "yes");
    
    system("clear");
    cout << "View Cart? type 'yes', otherwise 'no'.\n";  // option 1
    cin >> view_cart;

    if (view_cart == "yes") {
        system("clear");
        map<string, pair<int, int>>::iterator iter;
        cout << "Item\t\tAmount\t\tPrice\t\tTotal\n";
        for (iter = cart.begin(); iter != cart.end(); iter++) 
        {
            if (iter->first == "Notebook" || iter->first == "Yellow Pad")
            {
                totprice = iter->second.first * iter->second.second;
                cout << iter->first << "\t" << iter->second.first << "\t\t" << iter->second.second << "\t\t" << totprice << endl;
            }
            else 
            {
                totprice = iter->second.first * iter->second.second;
                cout << iter->first << "\t\t" << iter->second.first << "\t\t" << iter->second.second << "\t\t" << totprice << endl;
            }
        }
        cout << "Proceed to checkout? (type 'yes', otherwise 'no'.)\n";
        cin >> checkout_option;

        if (checkout_option == "yes")
        {
            cout << "Checkout\n";
            cout << "What is your payment method?\n";
            cout << "1. Cash\n";
            cout << "2. Card\n";
            cin >> paymentMethod;
        }
        // Proceed to Checkout ---> Payment 
        // Payment ---> Payment confirmation

        
    

    }
}
