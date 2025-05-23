#!/bin/bash

FOLDER="test_framework"

if [ -d "$FOLDER" ]; then
    echo "[!] '$FOLDER' already exists. Delete it if you want to reinstall."
    exit 1
fi

echo "[+] Cloning test framework..."
git clone --depth 1 https://github.com/tanamaroby/cplusplus_testing_framework.git temp_test_framework

echo "[+] Moving files..."
mkdir "$FOLDER"
mv temp_test_framework/test_framework/TestFramework.* "$FOLDER"/

echo "[+] Cleaning up..."
rm -rf temp_test_framework

echo "[✓] Installed to './$FOLDER'"
