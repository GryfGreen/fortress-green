#!/bin/bash
arm-linux-gnueabihf-gcc main.c -o fortress -Wall -static
file fortress  # Проверка архитектуры
