<h1 align="center">C Vector👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-1.1.1.0-blue.svg?cacheSeconds=2592000" />
  <a href="https://github.com/Kushal-Chandar/C-Vector/blob/main/LICENSE.txt" target="_blank">
    <img alt="License: GPLv3" src="https://img.shields.io/badge/License-GPLv3-yellow.svg" />
  </a>
</p>

> This is a C implementation (a bit hacky) that provides an useful interface to create, delete and modify the internal dynamically allocated c array to use it like a C++ Vector

### 🏠 [Homepage](https://github.com/Kushal-Chandar/C-Vector)

## Table of Contents

- [Table of Contents](#table-of-contents)
- [Direct Download](#direct-download)
- [Build From Source 🔨](#build-from-source-)
  - [Clone this Repository](#clone-this-repository)
  - [Run Cmake configuration](#run-cmake-configuration)
  - [Build from build directory](#build-from-build-directory)
  - [Setup](#setup)
- [Usage](#usage)
  - [📖 Check examples and [Reference](https://kushal-chandar.github.io/C-Vector/html/c__vector__docs_8h.html)](#-check-examples-and-reference)
- [Author](#author)
- [🤝 Contributing](#-contributing)
- [📝 License](#-license)

## Direct Download

_build from source it is fun_

[Download](https://github.com/Kushal-Chandar/C-Vector/releases)

**OR**

## Build From Source 🔨

### Clone this Repository

```sh
git clone https://github.com/Kushal-Chandar/C-Vector.git
```

### Run Cmake configuration

```sh
mkdir build
cd build
cmake -S .. -B .
```

### Build from build directory

> make sure your are in build directory, if you are getting errors

```sh
ninja
```

### Setup

Requires Cmake and Ninja added to path

**Run install.sh in the project root folder** <br>

> If you don't have git bash or have errors while running the install.sh. <br> Run the following commands in windows powershell.

```ps
mkdir c_vector
mkdir c_vector/lib
cp build/libc_vector.a c_vector/lib/
cp -r include c_vector
```

## Usage

Copy the contents in c_vector/include and c_vector/lib to a folder where your compiler searches for includes and directories. <br>
Example: <br>

- copy contents of **c_vector/include** to **path/to/mingw64/include**

- copy contents of **c_vector/lib** to **path/to/mingw64/lib**
  <br>

and Compile with

```sh
gcc file.c -lc_vector
```

OR

Compile with

```sh
gcc file.c -I"path to c_vector/include/c_implementations without quotes" -L"path to c_vector/lib/libc_vector.a without quotes" -lc_vector
```

lookup how to specify include directories for your compiler

### 📖 Check [examples](https://github.com/Kushal-Chandar/C-Vector/blob/main/examples/c_vector_int_example.c) and [Reference](https://kushal-chandar.github.io/C-Vector/html/c__vector__docs_8h.html)

## Author

👤 **Kushal Chandar**

> I have implemented basic and most common data-types

- Github: [@Kushal-Chandar](https://github.com/Kushal-Chandar)
- LinkedIn: [@Kushal Chandar](https://linkedin.com/in/kushal-chandar)

## 🤝 Contributing

Contributions, issues and feature requests are welcome!<br />Feel free to check [issues page](https://github.com/Kushal-Chandar/C-Vector/issues).

## 📝 License

Copyright © 2022 [Kushal Chandar](https://github.com/Kushal-Chandar).<br />
This project is [GPLv3](https://github.com/Kushal-Chandar/C-Vector/blob/main/LICENSE.txt) licensed.
