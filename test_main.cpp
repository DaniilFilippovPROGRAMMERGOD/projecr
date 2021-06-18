#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"

#include "lib.hpp"



TEST_CASE("Test check") {
    auto a = tranc(L"тест");
    CHECK(a == L"test");
}

TEST_CASE("Test check1") {
    auto a = tranc(L"корова собака");
    CHECK(a == L"korova sobaka");
}

TEST_CASE("Test check2") {
    auto a = tranc(L"ОгоРод");
    CHECK(a == L"OgoRod");
}

TEST_CASE("Test check3") {
    auto a = clearnum(L"dasdsa1234");
    CHECK(a == L"1234");
}

TEST_CASE("Test check4") {
    auto a = clearnum(L"DFSFSD12SFDSFD3467");
    CHECK(a == L"123467");
}

TEST_CASE("Test check5") {
    auto a = clearnum(L"FFF2 DDD3 EE4 342");
    CHECK(a == L"2 3 4 342");
}

TEST_CASE("Test check6") {
    auto a = bigone(L"korova");
    CHECK(a == L"Korova");
}

TEST_CASE("Test check7") {
    auto a = bigone(L"Home");
    CHECK(a == L"Home");
}

TEST_CASE("Test check78") {
    auto a = bigone(L"plos");
    CHECK(a == L"Plos");
}

TEST_CASE("Test check8") {
    auto a = clear(L"32312abramov");
    CHECK(a == L"abramov");
}

TEST_CASE("Test check88") {
    auto a = clear(L"5435342%^%&^*&*(+_)(car");
    CHECK(a == L"car");
}

TEST_CASE("Test check8888") {
    auto a = clear(L"232vector 312312%^&^&cinema");
    CHECK(a == L"vector cinema");
}

TEST_CASE("Test check888888888") {
    auto a = reverse(L"bob");
    CHECK(a == L"bob");
}

TEST_CASE("Test check444") {
    auto a = reverse(L"korova");
    CHECK(a == L"avorok");
}
TEST_CASE("Test check444") {
    auto a = reverse(L"1984");
    CHECK(a == L"4891");
}

TEST_CASE("Test check44353") {
    auto a = movetolist(L"sobaka korova cat");
    CHECK(a.at(0) == L"sobaka");
    CHECK(a.at(1) == L"korova");
    CHECK(a.at(2) == L"cat");
}

TEST_CASE("Test check345") {
    auto a = movetolist(L"ddd zzz www");
    CHECK(a.at(0) == L"ddd");
    CHECK(a.at(1) == L"zzz");
    CHECK(a.at(2) == L"www");
}

TEST_CASE("Test check534534") {
    auto a = movetolist(L"134 eee");
    CHECK(a.at(0) == L"134");
    CHECK(a.at(1) == L"eee");
}

