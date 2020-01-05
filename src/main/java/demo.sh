#!/bin/bash

declare -A core
personal=()
mode=$1

author() {
  echo "Mark Tagab"
}


if [ "$mode" = "author" ]; then
   author
else
   echo "Command not found"
fi
















