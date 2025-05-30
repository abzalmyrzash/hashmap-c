#include "hashmap.h"

void print_search_result(HashMap* mp, char* key) {
	void * value = HashMap_search(mp, key);
	if (value == NULL) printf("ERROR: key doesn't exist!\n");
    else printf("%s\n", value);
}

int main()
{

    // Initialize the value of mp
    HashMap* mp
        = (HashMap*)malloc(sizeof(HashMap));
    HashMap_init(mp, 256);

    HashMap_insert(mp, "Yogaholic", "Anjali");
    HashMap_insert(mp, "pluto14", "Vartika");
    HashMap_insert(mp, "elite_Programmer", "Manish");
    HashMap_insert(mp, "GFG", "GeeksforGeeks");
    HashMap_insert(mp, "decentBoy", "Mayank");

	print_search_result(mp, "elite_Programmer");
	print_search_result(mp, "Yogaholic");
	print_search_result(mp, "pluto14");
	print_search_result(mp, "decentBoy");
	print_search_result(mp, "GFG");

    // Key is not HashMap_inserted
	print_search_result(mp, "randomkey");

    printf("\nAfter deletion : \n");

    // Deletion of key
    HashMap_delete (mp, "decentBoy");
	print_search_result(mp, "decentBoy");

    return 0;
}
