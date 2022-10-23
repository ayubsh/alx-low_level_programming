#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");

    hash_table_set(ht, "hetairas", "smt"); hash_table_set(ht, "mentioner", "smt");
    hash_table_set(ht, "heliotropes", "smt"); hash_table_set(ht, "neurospora", "smt");
    hash_table_set(ht, "depravement", "smt"); hash_table_set(ht, "serafins", "smt");
    hash_table_set(ht, "stylist", "smt"); hash_table_set(ht, "subgenera", "smt");
    hash_table_set(ht, "joyful", "smt"); hash_table_set(ht, "synaphea", "smt");
    hash_table_set(ht, "redescribed", "smt"); hash_table_set(ht, "urites", "smt");
    hash_table_set(ht, "dram", "smt"); hash_table_set(ht, "vivency", "smt");

    return (EXIT_SUCCESS);
}
