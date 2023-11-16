nasm -f elf64 your_file_name.asm -o your_file_name.o
gcc -no-pie your_file_name.o -o your_executable_name
