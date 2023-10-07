#!/bin/sh

echo "Hello, world!"

number=grep -oE "[0-9]{1,}" numbers.txt

echo number