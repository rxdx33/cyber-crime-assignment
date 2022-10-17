# VULNERABLE LOGIN

## BEFORE COMPILATION, FIRST CONFIGURE GDB:
```
sudo apt update
sudo apt install build-essential gdb
sudo sysctl -w kernel.randomize_va_space=0
sudo sh -c "echo 0 > /proc/sys/kernel/randomize_va_space"
echo "set disassembly-flavor intel" > ~/.gdbinit
```

## TO COMPILE THE PROGRAM:
```
gcc login.c -fno-stack-protector -z execstack -o login
```

## TO RUN THE PROGRAM:
```
./login [password]
```

## REFERENCES
Part of this program comprises externally-obtained code.
Obtained from Curtin University,
(ISEC3004) Cyber Crime and Security Enhancement Programming - Module 7, Task 1
https://drive.google.com/file/d/1QgH2EHfI0y63Ra0jTCogJ0kZfSvBZdCn/view?usp=sharing
(Accessed on 10 Oct 2022)
