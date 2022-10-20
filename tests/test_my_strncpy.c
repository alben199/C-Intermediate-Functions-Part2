/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** EPITECH Day 06 unit test
*/
char *my_strncpy(char *src, char *dest, int n);
#include <criterion/criterion.h>

Test (my_strncpy, copy_five_characters_in_empty_array){
    char dest [6] = {0};
    my_strncpy (dest, "HelloWorld", 5);
    cr_assert_str_eq (dest , "Hello");
    }
