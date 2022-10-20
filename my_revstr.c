/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** EPITECH Day 06 Task03 project
*/

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0'){
        a = a + 1;
    }
    return (a);
}

char *my_revstr (char *str)
{
    char temp;
    int start = 0;
    int end = my_strlen(str) - 1;
    int size = end;

    while (start < size / 2 + 1) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start += 1;
        end -= 1;
    }
    return (str);
}
