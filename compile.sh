#!/usr/bin/env bash

function node0(){
    gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
}

node0