#include <stdio.h>
#include <stdbool.h>
#include <getopt.h>
#include <stdlib.h>

#include "kv.h"
#include "common.h"
#include "file.h"
#include "parse.h"

void print_usage(char *argv[]) {
}

int main(int argc, char *argv[]) { 
	kv_t *table = kv_init(3); 
    printf("%p\n", table); 
    printf("%ld\n", table->capacity);
}
