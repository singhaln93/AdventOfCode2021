# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
cd scripts
echo -e '\033[0;33m' "\n1>Build...(cmake -S ../ -B ../build/)" '\033[0m'
./build.sh
echo -e '\033[0;33m' "\n2>Make...(make -C ../build/)" '\033[0m'
./make.sh
#clear
echo -e '\033[0;33m' "\n3>Execute..(./../build/AoC)" '\033[0m'
./run.sh
echo -e "\nFile Exexuted!"
