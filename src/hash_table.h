/*
 * hash_table.h
 *
 *  Created on: Sep 29, 2020
 *      Author: derek
 */

#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

typedef struct{
	char* key;
	char* value;
}ht_item;

typedef struct{
	int size;
	int count;
	ht_item** items;
}ht_hash_table;


#endif /* HASH_TABLE_H_ */
