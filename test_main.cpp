#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "main.cpp"

#include "doctest/doctest.h"

TEST_CASE("Test check") {
    auto a = tranc("тест");
    CHECK(a == "test");
}

TEST_CASE("Test check") {
    auto a = tranc("корова");
    CHECK(a == "korova");
}

TEST_CASE("Test check") {
    auto a = tranc("ОгоРод");
    CHECK(a == "ogorod");
}

TEST_CASE("Test check") {
    auto a = clearnum("dasdsa1234");
    CHECK(a == "1234");
}

TEST_CASE("Test check") {
    auto a = clearnum("DFSFSD12SFDSFD3467");
    CHECK(a == "123467");
}

TEST_CASE("Test check") {
    auto a = clearnum("FFF2 DDD3 EE4 342");
    CHECK(a == "2 3 4 342");
}

TEST_CASE("Test check") {
    auto a = bigone("korova");
    CHECK(a == "Korova");
}

TEST_CASE("Test check") {
    auto a = bigone("Home");
    CHECK(a == "Home");
}

TEST_CASE("Test check") {
    auto a = bigone("plos");
    CHECK(a == "Plos");
}

TEST_CASE("Test check") {
    auto a = clear("32312abramov");
    CHECK(a == "abramov");
}

TEST_CASE("Test check") {
    auto a = clear("5435342%^%&^*&*(+_)(car");
    CHECK(a == "car");
}

TEST_CASE("Test check") {
    auto a = clear("232vector 312312%^&^&cinema");
    CHECK(a == "vector cinema");
}

TEST_CASE("Test check") {
    auto a = reverse("bob");
    CHECK(a == "bob");
}

TEST_CASE("Test check") {
    auto a = reverse("korova");
    CHECK(a == "avorok");
}
TEST_CASE("Test check") {
    auto a = reverse("1984");
    CHECK(a == "4891");
}

TEST_CASE("Test check") {
    auto a = movetolist("sobaka korova cat");
    CHECK(a.at(0) == "sobaka");
    CHECK(a.at(1) == "korova");
    CHECK(a.at(2) == "cat");
}

TEST_CASE("Test check") {
    auto a = movetolist("ddd zzz www");
    CHECK(a.at(0) == "ddd");
    CHECK(a.at(1) == "zzz");
    CHECK(a.at(2) == "www");
}

TEST_CASE("Test check") {
    auto a = movetolist("134 eee");
    CHECK(a.at(0) == "134");
    CHECK(a.at(1) == "eee");
}

