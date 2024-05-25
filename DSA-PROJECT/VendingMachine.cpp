#include <iostream>
#include <string>
using namespace std;
int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10,c11,c12,c13;
//VENDING MACHINE PROJECT
int totalamount;
int change;
int extra_amount_added;
// CHIPS ROW
// 1) stack of lays
struct Lays {
    string layslabel;
    int laysprice;
    struct Lays* next;
};
struct Lays* top_lays = NULL;

void pushlays(string label, int price) {

    Lays* newnode = new Lays();
    newnode->layslabel = label;
    newnode->laysprice = price;
    newnode->next = top_lays;
    top_lays = newnode;
    c1++;

}
void poplays() {
    if (top_lays == NULL)
        cout << "Stack is empty" << endl;
    else {
        struct Lays* ptr=top_lays;
        top_lays = top_lays->next;
        delete(ptr);
        c1--;
    }
}
void displaylays() {
    struct Lays* ptr;
    if (top_lays == NULL)
        cout << "--- Lays Stack is empty ---" << endl;
    else {
        ptr = top_lays;
        cout << "---- Stack of LAYS ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->layslabel << "\t";
            cout << "stack price: " << ptr->laysprice << endl;
            ptr = ptr->next;
        }
        cout << endl;
    }
}
//2) stack of wavy
struct Wavy {
    string wavylabel;
    int wavyprice;
    struct Wavy* next;
};
struct Wavy* top_wavy = NULL;

void pushwavy(string label, int price) {
    Wavy* newnode = new Wavy();
    newnode->wavylabel = label;
    newnode->wavyprice = price;
    newnode->next = top_wavy;
    top_wavy = newnode;
    c2++;
}
void popwavy() {
    if (top_wavy == NULL)
        cout << " no chips in this stack" << endl;
    else {
        top_wavy = top_wavy->next;
    }
    c2--;
}
bool displaywavy() {
    struct Wavy* ptr;
    if (top_wavy == NULL) {
        cout << "--- Wavy Stack is empty ---" << endl;;
        return false;
    }
    else {
        ptr = top_wavy;
        cout << "---- Stack of WAVY ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->wavylabel << "\t";
            cout << "stack price: " << ptr->wavyprice <<endl;
            ptr = ptr->next;
        }
        cout << endl;
        return true;
    }
  
}
//3) stack of cheetos
struct Cheetos {
    string cheetoslabel;
    int cheetosprice;
    struct Cheetos* next;
};
struct Cheetos* top_cheetos = NULL;

void pushcheetos(string label, int price) {
    Cheetos* newnode = new Cheetos();
    newnode->cheetoslabel = label;
    newnode->cheetosprice = price;
    newnode->next = top_cheetos;
    top_cheetos = newnode;
    c3++;
}
void popcheetos() {
    if (top_cheetos == NULL)
        cout << "--- Cheetos stack is empty ----" << endl;
    else {
        top_cheetos->cheetoslabel;
        top_cheetos = top_cheetos->next;
        c3--;
        top_cheetos--;
    }
    
}
bool displaycheetos() {
    struct Cheetos* ptr;
    if (top_cheetos == NULL) {
        cout << "--- Cheetos Stack is empty ---" << endl;
        return false;
    }
    else {
        ptr = top_cheetos;
        cout << "---- Stack of CHEETOS ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->cheetoslabel << "\t";
            cout << "stack price: " << ptr->cheetosprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//4) stack of slanty
struct Slanty {
    string slantylabel;
    int slantyprice;
    struct Slanty* next;
};
struct Slanty* top_slanty = NULL;

void pushslanty(string label, int price) {
    Slanty* newnode = new Slanty();
    newnode->slantylabel = label;
    newnode->slantyprice = price;
    newnode->next = top_slanty;
    top_slanty = newnode;
    c4++;
}
void popslanty() {
    if (top_slanty == NULL)
        cout << " no chips in this stack" << endl;
    else {
        top_slanty = top_slanty->next;
    }
    c4--;
}
bool displayslanty() {
    struct Slanty* ptr;
    if (top_slanty == NULL) {
        cout << "--- Salnty Stack is empty ---"<<endl;
        return false;
    }
    else {
        ptr = top_slanty;
        cout << "---- Stack of SLANTY ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->slantylabel << "\t";
            cout << "stack price: " << ptr->slantyprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
// DRINKS ROW
// 1) stack of coke
struct Coke {
    string cokelabel;
    int cokeprice;
    struct Coke* next;
};
struct Coke* top_coke = NULL;

void pushcoke(string label, int price) {
    Coke* newnode = new Coke();
    newnode->cokelabel = label;
    newnode->cokeprice = price;
    newnode->next = top_coke;
    top_coke = newnode;
    c5++;
}
void popcoke() {
    if (top_coke == NULL)
        cout << " no drink in this stack" << endl;
    else {
        top_coke = top_coke->next;
    }
    c5--;
}

bool displaycoke() {
    struct Coke* ptr;
    if (top_coke == NULL) {
        cout << "--- Coke Stack is empty ---"<<endl;
        return false;
    }
    else {
        ptr = top_coke;
        cout << "---- Stack of COKE ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->cokelabel << "\t";
            cout << "stack price: " << ptr->cokeprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//2) stack of sprite
struct Sprite {
    string spritelabel;
    int spriteprice;
    struct Sprite* next;
};
struct Sprite* top_sprite = NULL;

void pushsprite(string label, int price) {
    Sprite* newnode = new Sprite();
    newnode->spritelabel = label;
    newnode->spriteprice = price;
    newnode->next = top_sprite;
    top_sprite = newnode;
    c6++;
}
void popsprite() {
    if (top_sprite == NULL)
        cout << " no drinks in this stack" << endl;
    else {
        top_sprite = top_sprite->next;
    }
    c6--;
}

bool displaysprite() {
    struct Sprite* ptr;
    if (top_sprite == NULL) {
        cout << "--- Sprite Stack is empty ---"<<endl;
        return false;
    }
    else {
        ptr = top_sprite;
        cout << "---- Stack of SPRITE ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->spritelabel << "\t";
            cout << "stack price: " << ptr->spriteprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
// 3) stack of mirinda
struct Mirinda {
    string mirindalabel;
    int mirindaprice;
    struct Mirinda* next;
};
struct Mirinda* top_mirinda = NULL;

void pushmirinda(string label, int price) {
    Mirinda* newnode = new Mirinda();
    newnode->mirindalabel = label;
    newnode->mirindaprice = price;
    newnode->next = top_mirinda;
    top_mirinda = newnode;
    c7++;
}
void popmirinda() {
    if (top_mirinda == NULL)
        cout << " no drinks in this stack" << endl;
    else {
        top_mirinda = top_mirinda->next;
    }
    c7--;
}

bool displaymirinda() {
    struct Mirinda* ptr;
    if (top_mirinda == NULL) {
        cout << "--- Mirinda Stack is empty ---" << endl;
        return false;
    }
    else {
        ptr = top_mirinda;
        cout << "---- Stack of MIRINDA ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->mirindalabel << "\t";
            cout << "stack price: " << ptr->mirindaprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
// 4) stack of sting
struct Sting {
    string stinglabel;
    int stingprice;
    struct Sting* next;
};
struct Sting* top_sting = NULL;

void pushsting(string label, int price) {
    Sting* newnode = new Sting();
    newnode->stinglabel = label;
    newnode->stingprice = price;
    newnode->next = top_sting;
    top_sting = newnode;
    c8++;
}
void popsting() {
    if (top_sting == NULL)
        cout << " no drinks in this stack" << endl;
    else {
        top_sting = top_sting->next;
    }
    c8--;
}

bool displaysting() {
    struct Sting* ptr;
    if (top_sting == NULL) {
        cout << "--- Sting Stack is empty ---" << endl;
        return false;
    }
    else {
        ptr = top_sting;
        cout << "---- Stack of STING ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->stinglabel << "\t";
            cout << "stack price: " << ptr->stingprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
// CHOCOLATES ROW
// 1) stack of kitkat
struct Kitkat {
    string kitkatlabel;
    int kitkatprice;
    struct Kitkat* next;
};
struct Kitkat* top_kitkat = NULL;

void pushkitkat(string label, int price) {
    Kitkat* newnode = new Kitkat();
    newnode->kitkatlabel = label;
    newnode->kitkatprice = price;
    newnode->next = top_kitkat;
    top_kitkat = newnode;
    c9++;
}
void popkitkat() {
    if (top_kitkat == NULL)
        cout << " no chocolate in this stack" << endl;
    else {
        top_kitkat = top_kitkat->next;
    }
    c9--;
}

bool displaykitkat() {
    struct Kitkat* ptr;
    if (top_kitkat == NULL) {
        cout << "--- KitKat Stack is empty ---";
        return false;
    }
    else {
        ptr = top_kitkat;
        cout << "---- Stack of KITKAT ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->kitkatlabel << "\t";
            cout << "stack price: " << ptr->kitkatprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//2) stack of dairy milk
struct Dairymilk {
    string dairymilklabel;
    int dairymilkprice;
    struct Dairymilk* next;
};
struct Dairymilk* top_dairymilk = NULL;

void pushdairymilk(string label, int price) {
    Dairymilk* newnode = new Dairymilk();
    newnode->dairymilklabel = label;
    newnode->dairymilkprice = price;
    newnode->next = top_dairymilk;
    top_dairymilk = newnode;
    c10++;
}
void popdairymilk() {
    if (top_dairymilk == NULL)
        cout << " no chocolate in this stack" << endl;
    else {
        top_dairymilk = top_dairymilk->next;
    }
    c10--;
}

bool displaydairymilk() {
    struct Dairymilk* ptr;
    if (top_dairymilk == NULL) {
        cout << "--- DairyMilk Stack is empty ---"<<endl;
        return false;
    }
    else {
        ptr = top_dairymilk;
        cout << "---- Stack of DAIRYMILK----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->dairymilklabel << "\t";
            cout << "stack price: " << ptr->dairymilkprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//3) stack of toblerone
struct Toblerone {
    string tobleronelabel;
    int tobleroneprice;
    struct Toblerone* next;
};
struct Toblerone* top_toblerone = NULL;

void pushtoblerone(string label, int price) {
    Toblerone* newnode = new Toblerone();
    newnode->tobleronelabel = label;
    newnode->tobleroneprice = price;
    newnode->next = top_toblerone;
    top_toblerone = newnode;
    c11++;
}
void poptoblerone() {
    if (top_toblerone == NULL)
        cout << " no chocolate in this stack" << endl;
    else {
        top_toblerone = top_toblerone->next;
    }
    c11--;
}

bool displaytoblerone() {
    struct Toblerone* ptr;
    if (top_toblerone == NULL) {
        cout << "--- Toblerone Stack is empty ---" << endl;
        return false;
    }
    else {
        ptr = top_toblerone;
        cout << "---- Stack of TOBLERONE ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->tobleronelabel << "\t";
            cout << "stack price: " << ptr->tobleroneprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//4) stack of snickers
struct Snickers {
    string snickerslabel;
    int snickersprice;
    struct Snickers* next;
};
struct Snickers* top_snickers = NULL;

void pushsnickers(string label, int price) {
    Snickers* newnode = new Snickers();
    newnode->snickerslabel = label;
    newnode->snickersprice = price;
    newnode->next = top_snickers;
    top_snickers = newnode;
    c12++;
}
void popsnickers() {
    if (top_snickers == NULL)
        cout << " no chocolate in this stack" << endl;
    else {
        top_snickers = top_snickers->next;
    }
    c12--;
}

bool displaysnickers() {
    struct Snickers* ptr;
    if (top_snickers == NULL) {
        cout << "--- Snickers Stack is empty ---"<<endl;
        return false;
    }
    else {
        ptr = top_snickers;
        cout << "---- Stack of SNICKERS ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->snickerslabel << "\t";
            cout << "stack price: " << ptr->snickersprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
//WATER ROW
// 1) stack of water
struct Water {
    string waterlabel;
    int waterprice;
    struct Water* next;
};
struct Water* top_water = NULL;

void pushwater(string label, int price) {
    Water* newnode = new Water();
    newnode->waterlabel = label;
    newnode->waterprice = price;
    newnode->next = top_water;
    top_water = newnode;
    c13++;
}
void popwater() {
    if (top_water == NULL)
        cout << " no water bottles in this stack" << endl;
    else {
        top_water = top_water->next;
    }
    c13--;
}

bool displaywater() {
    struct Water* ptr, * nextPtr = NULL;
    if (top_water == NULL) {
        cout << "--- Water Stack is empty ---" << endl;
        return false;
    }
    else {
        ptr = top_water;
        cout << "---- Stack of Nestle Water Bottles ----\n";
        while (ptr != NULL) {
            cout << "stack label: " << ptr->waterlabel << "\t";
            cout << "stack price: " << ptr->waterprice << endl;
            ptr = ptr->next;
        }
        return true;
    }
    cout << endl;
}
void Calculation(int amount_inserted, string label, int quantity) {
    if (label == "A1") {
        totalamount = top_lays->laysprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << endl << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << endl << "\t REMAINING CREDITS : " << change << endl;
        }
        poplays();
    }
    else if (label == "A2") {
        totalamount = top_wavy->wavyprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popwavy();
    }
    else if (label == "A3") {
        totalamount = top_cheetos->cheetosprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popcheetos();
    }
    else if (label == "A4") {
        totalamount = top_slanty->slantyprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popslanty();
    }
    else if (label == "B1") {
        totalamount = top_coke->cokeprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popcoke();
    }
    else if (label == "B2") {
        totalamount = top_sprite->spriteprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popsprite();
    }
    else if (label == "B3") {
        totalamount = top_mirinda->mirindaprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popmirinda();
    }
    else if (label == "B4") {
        totalamount = top_sting->stingprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popsting();
    }
    else if (label == "C1") {
        totalamount = top_kitkat->kitkatprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popkitkat();
    }
    else if (label == "C2") {
        totalamount = top_dairymilk->dairymilkprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popdairymilk();
    }
    else if (label == "C3") {
        totalamount = top_toblerone->tobleroneprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        poptoblerone();
    }
    else if (label == "C4") {
        totalamount = top_snickers->snickersprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popsnickers();
    }
    else if (label == "D1") {
        totalamount = top_water->waterprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popwater();
    }
    else if (label == "D2") {
        totalamount = top_water->waterprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popwater();
    }
    else if (label == "D3") {
        totalamount = top_water->waterprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popwater();
    }
    else if (label == "D4") {
        totalamount = top_water->waterprice * quantity;
        cout << endl << "\tLABEL\tQUANTITY\tAMOUNT" << endl;
        cout << "\t" << label << "\t" << quantity << "\t\t" << totalamount << endl << endl;
        if (totalamount > amount_inserted) {
            change = amount_inserted - totalamount;
            cout << "-- Insufficient Balance of " << change << endl;
            cout << ">> Add more credits: ";
            cin >> extra_amount_added;
            cout << endl;
            amount_inserted = amount_inserted + extra_amount_added;
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        else {
            change = amount_inserted - totalamount;
            cout << "\t REMAINING CREDITS : " << change << endl;
        }
        popwater();
    }
}

void main() {
    int ch, val, amount_inserted, quantity, option;
    char Q;
    string label, choice;
start:
    cout << "---------------------- WELCOME -------------------------\n\n";
    do {
        cout << "---------------------------------------------------\n";
        cout << " Are you a vendor or a customer? \n Press V (for Vendor) C (for Customer): ";
        cin >> Q;
        cout << "---------------------------------------------------\n";
        if (Q == 'V' || Q == 'v') {
            int pass;
            cout << " Enter Vendor's password: ";
            cin >> pass;
            if (pass == 1234) {
                cout << "---------------------------------------------------\n";
                cout << " Password Successful ! \n\n";
                cout << "---------------------------------------------------\n";
                cout << " Enter '1' to restock all items in the vending machine: " << endl;
                cout << " Enter '3' to restock a specific item in the vending machine: " << endl;
                cout << " Enter '4' to View Stacks" << endl;
                cout << "Enter Choice : ";
                cin >> ch;
                cout << "---------------------------------------------------\n";

            }
            else {
                cout << "---------------------------------------------------\n";
                cout << " Wrong password!\n";
                cout << "---------------------------------------------------\n";
            }

        }

        else if (Q == 'C' || Q == 'c') {
            system("CLS");
            bool cond_lays;
            cout << "||======================================================================||\n";
            cout << "||                            VENDING MACHINE                           ||\n";
            cout << "||======================================================================||\n";
            cout << "||======================================================================||" << endl;
            cout << "||PRODUCTS AVALIABLE  (LABEL/PRICE)                                     ||" << endl;
            cout << "||  Chips \t Drinks \t Chocolates \t Water                  ||" << endl;
            cout << "||                                                                      ||" << endl;
            cout << "||  A1.Lays: "<<50<<"\t  B1.Coke: "<<100<<"\t  C1.KitKat: "<<70<<"\t D1.Nestle Water: "<<70 << "\t||" << endl;
            cout << "||  A2.Wavy: " << 40 << "\t  B2.Sprite: " << 120 << "  C2.DairyMilk: " << 60 << "\t\t        ||" << endl;
            cout << "||  A3.Cheto: " << 60 << "  B3.Fanta: " << 150 << "\t  C3.Toblerone: " << 100 << "\t\t\t||" << endl;
            cout << "||  A4.Slnty: " << 80 << "  B4.Sting: " << 130 << "\t  C4.Snickers: " << 80 << "\t\t\t||" << endl;
            cout << "||======================================================================||\n";
            cout << "||PRODUCTS QUANTITY                                                     ||\n";
            cout << "||======================================================================||\n";
            cout << "|| \tA1: " << c1 << "\t\tA2: " << c2 << "\t\tA3: " << c3 << "\t\tA4: " << c4 << "    \t||" << endl;
            cout << "|| \tB1: " << c5 << "\t\tB2: " << c6 << "\t\tB3: " << c7 << "\t\tB4: " << c8 << "    \t||" << endl;
            cout << "|| \tC1: " << c9 << "\t\tC2: " << c10 << "\t\tC3: " << c11 << "\t\tC4: " << c12 << "    \t||" << endl;
            cout << "|| \tD1: " << c13<< "\t\t\t\t\t\t\t\t||" << endl;
            cout << "||======================================================================||\n";
            cout << "\nEnter 2 to select an item you would like to have: ";
            cin >> ch;
            cout << "\n----------------------------------------------------\n";

        }
        switch (ch) {
        case 1:
            char input1,input2;
            // ROW OF CHIPS
            for (int i = 0; i < 10; i++) {
                pushlays("A1", 50);
                pushwavy("A2", 40);
                pushcheetos("A3", 60);
                pushslanty("A4", 80);
            }
            //ROW OF DRINKS
            for (int j = 0; j < 10; j++) {
                pushcoke("B1", 100);
                pushsprite("B2", 120);
                pushmirinda("B3", 150);
                pushsting("B4", 130);
            }
            // ROW OF CHOCOLATES
            for (int k = 0; k < 10; k++) {
                pushkitkat("C1", 70);
                pushdairymilk("C2", 60);
                pushtoblerone("C3", 100);
                pushsnickers("C4", 80);
            }
            // ROW OF WATER 
       
                for (int w = 0; w < 10; w++) {
                    pushwater("D" + to_string(w), 70);
                }
            
            cout << " ITEMS STOCKED SUCCESSFULLY !!\n";
            cout << " Do you want Display Individual Stacks? (Y/N): ";
            cin >> input1;
            if (input1 == 'Y' || input1 == 'y') {
                cout << "Press 's' to Display the Stocked Stacks: ";
                cin >> input2;
                if (input2 == 's' || input2 == 'S') {
                    cout << "\n \t---- CHIPS ----\n\n";
                    displaylays();
                    cout << endl;
                    displaywavy();
                    cout << endl;
                    displaycheetos();
                    cout << endl;
                    displayslanty();
                    cout << "\n \t---- DRINKS ----\n\n";
                    displaycoke();
                    cout << endl;
                    displaysprite();
                    cout << endl;
                    displaymirinda();
                    cout << endl;
                    displaysting();
                    cout << "\n \t---- CHOCOLATES ----\n\n";
                    displaykitkat();
                    cout << endl;
                    displaydairymilk();
                    cout << endl;
                    displaytoblerone();
                    cout << endl;
                    displaysnickers();
                    cout << "\n \t---- WATER ----\n\n";
                    displaywater();
                }
                else {
                    cout << "Invalid Input" << endl;
                }
            }
            else {
                cout << "Going to Main Menu" << endl;
            }
            cout << "---------------------------------------------------\n\n";
            break;

        case 2:
        
            cout << endl;
            cout << "|------- Insert Credits, Label of the selected item & Quantity -----|" << endl;
            cout << ">> Enter Credits: ";
            cin >> amount_inserted;
            if (amount_inserted < 40) {
                cout << " Insufficient Balance, Enter atleast 40 Rs !! " << endl;
                cout << ">> Enter Credits: ";
                cin >> amount_inserted;
            }
            cout << ">> Enter Label: ";
            cin >> label;
            cout << ">> Enter Quantity: ";
            cin >> quantity;
            Calculation(amount_inserted, label, quantity);
            do {
                cout << endl << "~ Do you want more item ( Y / N ) ";
                cout << ">> ";
                cin >> choice;
                if (choice == "Y" || choice == "y") {
                    cout << ">> Enter Credits: ";
                    cin >> amount_inserted;
                    amount_inserted = amount_inserted + change;
                    if (amount_inserted < 40) {
                        cout << " Insufficient Balance, Enter atleast 40 Rs !! " << endl;
                        cout << ">> Enter Credits: ";
                        cin >> amount_inserted;
                    }
                    cout << ">> Enter Label: ";
                    cin >> label;
                    cout << ">> Enter Quantity: ";
                    cin >> quantity;
                    Calculation(amount_inserted, label, quantity);
                }
                else if (choice == "N" || choice == "n") {
                    cout << endl << "\t REMAINING CREDITS : " << change << endl;
                    cout << "\t|| GOOOD BYEE ||" << endl;
                    goto start;
                }
            } while (choice != "N" || choice != "n");
            break;
        case 3: {
            string label;
            cout << "Enter Label of Stack you want to ReStock: ";
            cin >> label;
            if (label == "A1") {
                for (int i = 0; i < 10; i++) {
                    pushlays("A1", 50);
                }
            }
            else if (label == "A2") {
                for (int i = 0; i < 10; i++) {
                    pushwavy("A2", 40);
                }
            }
            else if (label == "A3") {
                for (int i = 0; i < 10; i++) {
                    pushcheetos("A3", 60);
                }
            }
            else if (label == "A4") {
                for (int i = 0; i < 10; i++) {
                    pushslanty("A4", 80);
                }
            }
            else if (label == "B1") {
                for (int i = 0; i < 10; i++) {
                    pushcoke("B1", 100);
                }
            }
            else if (label == "B2") {
                for (int i = 0; i < 10; i++) {
                    pushsprite("B2", 120);
                }
            }
            else if (label == "B3") {
                for (int i = 0; i < 10; i++) {
                    pushmirinda("B3", 150);
                }
            }
            else if (label == "B4") {
                for (int i = 0; i < 10; i++) {
                    pushsting("B4", 130);
                }
            }
            else if (label == "C1") {
                for (int i = 0; i < 10; i++) {
                    pushkitkat("C1", 70);
                }
            }
            else if (label == "C2") {
                for (int i = 0; i < 10; i++) {
                    pushdairymilk("C2", 60);
                }
            }
            else if (label == "C3") {
                for (int j = 0; j < 10; j++) {
                    pushtoblerone("C3", 100);
                }
            }
            else if (label == "C4") {
                for (int k = 0; k < 10; k++) {
                    pushsnickers("C4", 80);
                }
            }
            else if (label == "D1") {
                for (int w = 0; w < 10; w++) {
                    pushwater("D" + to_string(w), 70);
                }
            }


        }
            break;
        case 4:
            cout << "\n \t---- CHIPS ----\n\n";
            displaylays();
            cout << endl;
            displaywavy();
            cout << endl;
            displaycheetos();
            cout << endl;
            displayslanty();
            cout << "\n \t---- DRINKS ----\n\n";
            displaycoke();
            cout << endl;
            displaysprite();
            cout << endl;
            displaymirinda();
            cout << endl;
            displaysting();
            cout << "\n \t---- CHOCOLATES ----\n\n";
            displaykitkat();
            cout << endl;
            displaydairymilk();
            cout << endl;
            displaytoblerone();
            cout << endl;
            displaysnickers();
            cout << "\n \t---- WATER ----\n\n";
            displaywater();
            break;
        default:
            cout << " Invalid Choice " << endl;
        }
    } while (Q != 'C' || Q != 'c' || Q != 'V' || Q != 'v');

    system("pause");
}