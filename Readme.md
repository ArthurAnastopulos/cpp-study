<h1 align='center'> C++ Study - From Fundamentals to Advanced </h1>
<p align="center">🚀 Personal Repository for All C++ Learning 📚</p>

Table of contents
=================
<!--ts-->
   * [Table of contents](#table-of-contents)
   * [Setup Environment](#setup-environment)
        * [From Terminal](#from-terminal)
        * [Configure VS Code for GCC](/configure_gcc)
        * [Configure VS Code for Clang](/configure_clang)
        * [Configure VS Code for all Compilers](/configure_all_compilers)
   * [First Steps](/first_steps)    
<!--te-->

Setup Environment
=================

## From Terminal

For g++/GNU compiler(See [this](/configure_gcc) folder for VS Code configurations):

```bash
# Install build-essentials package for lastest g++/GNU compiler
sudo apt-get install build-essential

# Verify g++/GNU compiler verison
g++ --version

# Exemple of expected return:
g++ (Debian 8.3.0-6) 8.3.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

#To search for newer version of gcc
sudo apt-cache search gcc | less

#Install an specific gcc version, for exemple, to install version 10:
sudo apt-get install gcc-10 g++-10
```

For Clang compiler(See [this](/configure_clang) folder for VS Code configurations)::

```bash
#To search for available clang compilers
sudo apt-cache search clang | less

#Install an specific clang version, for exemple, to install version 11:
sudo apt-get install clang-11

# Verify Clang compiler verison
clang++-11 --version

# Exemple of expected return:
Debian clang version 11.0.1-2~deb10u1
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```