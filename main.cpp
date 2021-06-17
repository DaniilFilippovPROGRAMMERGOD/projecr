#include <set> // подключаем set
#include <string> // подключаем строки string
#include <iostream> // подключаем cout
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <windows.h>
#include <locale>

using namespace std;

/**
 * разворачивает слово задом наперёд
 * @param любая строка
 * @return строка в обратном порядке
 */

string reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

/**
 * преобразовывает строку слов , разделённых пробелом , в вектор
 * @param строка слов, разделённых пробелом
 * @return вектор , где элементы - слова
 */

vector<string> movetolist(string str) {
    vector<string> vecstr;
    string word2;
    stringstream s2(str);

    while (s2 >> word2) vecstr.push_back(word2);

    return vecstr;
}

/**
 * отчистка строки от любых символов кроме цифр
 * @param любая строка
 * @return строка из цифр
 */

string clearnum(string str) {

    string strbclear;

    for (auto z:str) {
        if (z == ' ') { strbclear = strbclear + " "; }
        else if (isdigit(z) == 1) { strbclear = strbclear + z; }
        else { strbclear = strbclear + ""; }   //отчищаем строку ( оставляем только цифры)

    }
    return strbclear;
}

/**
 * возвращает строку , в которой первая буква - заглавная
 * @param любая строка
 * @return строка , в которой первая буква - заглавная
 */

string bigone(string str) {
    locale loc;
    string str2;
    int t = 0;
    for (string::size_type i = 0; i < str.length(); ++i) {
        if (t < 1) {
            str2 = str2 + toupper(str[i], loc);
            t = t + 1;
        } else {
            str2 = str2 + str[i];
        }
    }
    return str2;
}

/**
 * отчистка строки от любых символов кроме букв
 * @param строка
 * @return строка в которой находятся только буквы
 */

string clear(string str) {
    string strclear;
    for (int i = 0; i < str.size(); i = i + 1) {
        if (str[i] == ' ') {
            strclear = strclear + " ";
        } else if (isalpha(str[i]) != 0) {
            strclear = strclear + str[i];
        }   //оставляет только буквы
        else {
            strclear = strclear + "";
        }
    }
    return strclear;
}

/**
 * транскрипция с русского на английский
 * @param строка из русских слов
 * @return та же строка в которой буквы кириллицы заменены английскими , похожими по звучанию
 */

string tranc(string text) {

    bool find = false;

    string ret;

    string rus[75] = {"А", "а", "Б", "б", "В", "в", "Г", "г", "Ґ", "ґ", "Д", "д", "Е", "е", "Є", "є", "Ж", "ж", "З",
                      "з", "И", "и", "І", "і", "Ї", "ї", "Й", "й", "К", "к",
                      "Л", "л", "М", "м", "Н", "н", "О", "о", "П", "п", "Р", "р", "С", "с", "Т", "т", "У", "у", "Ф",
                      "ф", "Х", "х", "Ц", "ц", "Ч", "ч", "Ш", "ш",
                      "Щ", "щ", "Ь", "ь", "Ю", "ю", "Я", "я", "Ы", "ы", "Ъ", "ъ", "Ё", "ё", "Э", "э", " "};

    string eng[75] = {"A", "a", "B", "b", "V", "v", "G", "g", "G", "g", "D", "d", "E", "e", "E", "E", "Zh", "zh", "Z",
                      "z", "I", "i", "I", "I", "Yi", "yi", "J", "j", "K", "k",
                      "L", "l", "M", "m", "N", "n", "O", "o", "P", "p", "R", "r", "S", "s", "T", "t", "U", "u", "F",
                      "f", "H", "h", "Ts", "ts", "ch", "ch", "Sh", "sh",
                      "Shh", "shh", "'", "'", "Yu", "yu", "Ya", "ya", "Y", "y", "", "", "Yo", "yo", "E", "e", " "};

    for (int i = 0; i <= text.length(); i++) {
        find = false;
        for (int j = 0; j < 75; j++) {
            if (text.substr(i, 2).compare(rus[j]) == 0) {
                ret += eng[j];
                find = true;
                i++;
                break;
            }
        }
        if (!find) ret += text.substr(i, 1);
    }
    return ret;

}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    cout << "Enter your last name ,name and Middle name: ";
    string str;
    getline(cin, str);
    str = tranc(str);
    str = clear(str);

    cout << "Enter your birthday, d.m.y., example - 19 05 1988: ";
    string strb;
    getline(cin, strb);
    strb = clearnum(strb);

    string popular = "password1 gfhjkm 1q2w3e4r5t6y hjccnz rossia cyfqgth putin01 habibufc russia2018 vputin medvedev soto4ka leningrad xuyxuy baltika9 laikos navalny eskander brigada fapfap 010101 030303 999999 555555 0987654321 123123123 050505 666666 101010 010101 1234567890 777777 123456 12345 123456789 password iloveyou princess 1234567 rockyou 12345678 abc123 nicole daniel babygirl monkey lovely jessica 654321 michael ashley";

    vector<string> popularpasswrods;
    popularpasswrods = movetolist(popular);

    vector<string> vecstr2; //вектор для чисел даты рождения
    vecstr2 = movetolist(strb);
    set<string> num3;
    for (auto z:vecstr2) {
        num3.insert(reverse(z));
        num3.insert(z);
    }
    num3.insert(reverse(vecstr2[0]) + reverse(vecstr2[1]));
    num3.insert(reverse(vecstr2[1]) + reverse(vecstr2[2]));
    num3.insert(reverse(vecstr2[0]) + reverse(vecstr2[2]));
    num3.insert(reverse(vecstr2[0]) + reverse(vecstr2[1]) + reverse(vecstr2[2]));
    num3.insert(vecstr2[0] + vecstr2[1]);
    num3.insert(vecstr2[1] + vecstr2[2]);
    num3.insert(vecstr2[0] + vecstr2[2]);
    num3.insert(vecstr2[0] + vecstr2[1] + vecstr2[2]);


    vector<string> vecstr; //вектор для фио
    vecstr = movetolist(str);//вектор из фио на основе строки
    int vsize = vecstr.size();

    set<string> S; // инициализация set

    map<string, string> book = {{"daniil",     "danya"},
                                {"ivan",       "vanya"},
                                {"alexandr",   "sasha"},
                                {"alexey",     "lesha"},
                                {"albert",     "alik"},
                                {"anatolij",   "tolya"},
                                {"arkadij",    "arkasha"},
                                {"arsenij",    "senya"},
                                {"artem",      "tema"},
                                {"boris",      "borya"},
                                {"vadim",      "vadik"},
                                {"valentin",   "valya"},
                                {"valerij",    "valera"},
                                {"vasilij",    "vasya"},
                                {"venianin",   "venya"},
                                {"victor",     "vitya"},
                                {"vitalij",    "vitalik"},
                                {"vladimir",   "volodya"},
                                {"vladislav",  "vlad"},
                                {"vsevolod",   "seva"},
                                {"vyacheslav", "slava"},
                                {"genadiy",    "gena"},
                                {"georgij",    "gosha"},
                                {"grigorij",   "grisha"},
                                {"dmitrij",    "dima"},
                                {"evgenij",    "jenya"},
                                {"konstantin", "kostya"},
                                {"leonid",     "lenya"},
                                {"mihail",     "misha"},
                                {"nikolay",    "kolya"},
                                {"pavel",      "pasha"},
                                {"rostislav",  "slava"},
                                {"svyatoslav", "slava"},
                                {"semen",      "sema"},
                                {"stanlislav", "stas"},
                                {"sergej",     "sereja"},
                                {"timofej",    "tima"},
                                {"fedor",      "fedya"},
                                {"filipp",     "filya"},
                                {"yaroslav",   "slava"}};

    S.insert(vecstr[0]);
    if(vsize==3){
        S.insert(vecstr[0]+vecstr[1][0]+vecstr[2][0]);
        S.insert(vecstr[0]+vecstr[1]);
    }else{
        S.insert(vecstr[0]+vecstr[1]);
    }

    for (auto it = book.begin(); it != book.end(); ++it) {
        if (vecstr[1] == it->first) {
            S.insert(it->first);
            S.insert(it->second);
        } else {
            S.insert(vecstr[1]);
        }
    }

    set <string> Spass; //главный массив с конечными паролями

    for (auto z:S){
        for(auto w:num3){
            Spass.insert(bigone(z)+w);
        }
    }

    for (auto z:popularpasswrods){
        Spass.insert(z);
    }

    for (auto z:S){
        Spass.insert(bigone(z));
    }

    for (auto z:num3){
        Spass.insert(z);
    }


    cout<<"Please write your password :";
    string password;
    cin>>password;
    cout<<"Please write Finish or Show :";
    string pass;
    cin>>pass;
    if(pass=="Finish"){
        if (Spass.find(password) != Spass.end()){
            cout<<"Your password is not safe , write new , please repeat registration";
        }else{
            cout<<"You have successfully registered";
        }
    }else if(pass=="Show"){
        cout<<"These are all insecure passwords : ";
        for(auto z:Spass){
            cout<<z<<" ";
        }
    }

    return 0;

}