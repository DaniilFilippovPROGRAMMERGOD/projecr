#pragma once
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

extern wstring reverse(wstring str);

extern vector<wstring> movetolist(wstring str);

extern wstring clearnum(wstring str);

extern wstring bigone(wstring str);

extern wstring clear(wstring str);

extern wstring tranc(wstring text);