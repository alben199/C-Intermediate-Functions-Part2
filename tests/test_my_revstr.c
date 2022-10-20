/*
** EPITECH PROJECT, 2022
** Unit-tests
** File description:
** EPITECH Day 06 Unit-test project
*/

#include <string.h>
#include <criterion/criterion.h>

char *my_revstr(char *str);

Test (my_revstr, normal) {
    char *str = my_revstr(strdup("HelloWorld"));
    cr_assert_str_eq(str, "dlroWolleH");
}
