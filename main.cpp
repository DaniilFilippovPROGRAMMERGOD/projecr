#include <set> // подключаем set
#include <string> // подключаем строки wstring
#include <iostream> // подключаем cout
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <windows.h>
#include <locale>
#include "lib.hpp"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    wcin.imbue(locale(".1251"));

    wcout << "Enter your last name ,name and Middle name: "<<flush;
    wstring str;
    getline(wcin, str);
    
    str = tranc(str);
    str = clear(str);

    wcout << "Enter your birthday, d.m.y., example - 19 05 1988: "<<flush;
    wstring strb;
    getline(wcin, strb);
    strb = clearnum(strb);

    wstring popular = L"qwerty password1 gfhjkm 1q2w3e4r5t6y hjccnz rossia cyfqgth putin01 habibufc russia2018 vputin medvedev soto4ka leningrad xuyxuy baltika9 laikos navalny eskander brigada fapfap 010101 030303 999999 555555 0987654321 123123123 050505 666666 101010 010101 1234567890 777777 123456 12345 123456789 password iloveyou princess 1234567 rockyou 12345678 abc123 nicole daniel babygirl monkey lovely jessica 654321 michael ashley";

    vector<wstring> popularpasswrods;
    popularpasswrods = movetolist(popular);

    vector<wstring> vecstr2; //вектор для чисел даты рождения
    vecstr2 = movetolist(strb);
    set<wstring> num3;
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


    vector<wstring> vecstr; //вектор для фио
    vecstr = movetolist(str);//вектор из фио на основе строки
    int vsize = vecstr.size();

    set<wstring> S; // инициализация set

    map<wstring, wstring> book = {{L"daniil",     L"danya"},
                                {L"ivan",       L"vanya"},
                                {L"alexandr",   L"sasha"},
                                {L"alexey",     L"lesha"},
                                {L"albert",     L"alik"},
                                {L"anatolij",   L"tolya"},
                                {L"arkadij",    L"arkasha"},
                                {L"arsenij",    L"senya"},
                                {L"artem",      L"tema"},
                                {L"boris",      L"borya"},
                                {L"vadim",      L"vadik"},
                                {L"valentin",   L"valya"},
                                {L"valerij",    L"valera"},
                                {L"vasilij",    L"vasya"},
                                {L"venianin",   L"venya"},
                                {L"victor",     L"vitya"},
                                {L"vitalij",    L"vitalik"},
                                {L"vladimir",   L"volodya"},
                                {L"vladislav",  L"vlad"},
                                {L"vsevolod",   L"seva"},
                                {L"vyacheslav", L"slava"},
                                {L"genadiy",    L"gena"},
                                {L"georgij",    L"gosha"},
                                {L"grigorij",   L"grisha"},
                                {L"dmitrij",    L"dima"},
                                {L"evgenij",    L"jenya"},
                                {L"konstantin", L"kostya"},
                                {L"leonid",     L"lenya"},
                                {L"mihail",     L"misha"},
                                {L"nikolay",    L"kolya"},
                                {L"pavel",      L"pasha"},
                                {L"rostislav",  L"slava"},
                                {L"svyatoslav", L"slava"},
                                {L"semen",      L"sema"},
                                {L"stanlislav", L"stas"},
                                {L"sergej",     L"sereja"},
                                {L"timofej",    L"tima"},
                                {L"fedor",      L"fedya"},
                                {L"filipp",     L"filya"},
                                {L"yaroslav",   L"slava"}};

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

    set <wstring> Spass; //главный массив с конечными паролями

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


    wcout<<"Please write your password :";
    wstring password;
    wcin>>password;
    wcout<<"Please write Finish or Show :";
    wstring pass;
    wcin>>pass;
    if(pass==L"Finish"){
        if (Spass.find(password) != Spass.end()){
            wcout<<"Your password is not safe , write new , please repeat registration";
        }else{
            wcout<<"You have successfully registered";
        }
    }else if(pass==L"Show"){
        cout<<"These are all insecure passwords : ";
        for(auto z:Spass){
            wcout<<z<<" ";
        }
    }

    return 0;

}