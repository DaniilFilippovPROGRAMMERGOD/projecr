#include <set> // подключаем set
#include <string> // подключаем строки wstring
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

wstring reverse(wstring str) {
    reverse(str.begin(), str.end());
    return str;
}

/**
 * преобразовывает строку слов , разделённых пробелом , в вектор
 * @param строка слов, разделённых пробелом
 * @return вектор , где элементы - слова
 */

vector<wstring> movetolist(wstring str) {
    vector<wstring> vecstr;
    wstring word2;
    wstringstream s2(str);

    while (s2 >> word2) vecstr.push_back(word2);

    return vecstr;
}

/**
 * отчистка строки от любых символов кроме цифр
 * @param любая строка
 * @return строка из цифр
 */

wstring clearnum(wstring str) {

    wstring strbclear;

    for (auto z:str) {
        if (z == ' ') { strbclear = strbclear + L" "; }
        else if (isdigit(z)) { strbclear = strbclear + z; }
        else { strbclear = strbclear + L""; }   //отчищаем строку ( оставляем только цифры)

    }
    return strbclear;
}

/**
 * возвращает строку , в которой первая буква - заглавная
 * @param любая строка
 * @return строка , в которой первая буква - заглавная
 */

wstring bigone(wstring str) {
    locale loc;
    wstring str2;
    int t = 0;
    for (wstring::size_type i = 0; i < str.length(); ++i) {
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

wstring clear(wstring str) {
    locale loc;
    wstring strclear;
    for (int i = 0; i < str.size(); i = i + 1) {
        if (str[i] == L' ') {
            strclear = strclear + L" ";
        } else if (std::isalpha(str[i],loc) != 0) {
            strclear = strclear + str[i];
        }   //оставляет только буквы
        else {
            strclear = strclear + L"";
        }
    }
    return strclear;
}

/**
 * транскрипция с русского на английский
 * @param строка из русских слов
 * @return та же строка в которой буквы кириллицы заменены английскими , похожими по звучанию
 */

wstring tranc(wstring text) {

    bool find = false;

    wstring ret;

    wstring rus[75] = {L"А", L"а", L"Б", L"б", L"В", L"в", L"Г", L"г", L"Ґ", L"ґ", L"Д", L"д", L"Е", L"е", L"Є", L"є", L"Ж", L"ж", L"З",
                      L"з", L"И", L"и", L"І", L"і", L"Ї", L"ї", L"Й", L"й", L"К", L"к",
                      L"Л", L"л", L"М", L"м", L"Н", L"н", L"О", L"о", L"П", L"п", L"Р", L"р", L"С", L"с", L"Т", L"т", L"У", L"у", L"Ф",
                      L"ф", L"Х", L"х", L"Ц", L"ц", L"Ч", L"ч", L"Ш", L"ш",
                      L"Щ", L"щ", L"Ь", L"ь", L"Ю", L"ю", L"Я", L"я", L"Ы", L"ы", L"Ъ", L"ъ", L"Ё", L"ё", L"Э", L"э", L" "};

    wstring eng[75] = {L"A", L"a", L"B", L"b", L"V", L"v", L"G", L"g", L"G", L"g", L"D", L"d", L"E", L"e", L"E", L"E", L"Zh", L"zh", L"Z",
                      L"z", L"I", L"i", L"I", L"I", L"Yi", L"yi", L"J", L"j", L"K", L"k",
                      L"L", L"l", L"M", L"m", L"N", L"n", L"O", L"o", L"P", L"p", L"R", L"r", L"S", L"s", L"T", L"t", L"U", L"u", L"F",
                      L"f", L"H", L"h", L"Ts", L"ts", L"ch", L"ch", L"Sh", L"sh",
                      L"Shh", L"shh", L"'", L"'", L"Yu", L"yu", L"Ya", L"ya", L"Y", L"y", L"", L"", L"Yo", L"yo", L"E", L"e", L" "};

    for (int i = 0; i <= text.length(); i++) {
        find = false;
        for (int j = 0; j < 75; j++) {
            auto bob = text.substr(i, 1);
            if (text.substr(i, 1)==(rus[j])) {
                ret += eng[j];
                find = true;
                break;
            }
        }
        if (!find) ret += text.substr(i, 1);
    }
    return ret;

}