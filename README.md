# Codeforces Solutions Repository

This repository contains solutions to problems from [Codeforces](https://codeforces.com/), implemented in C++ and Java. The repository is designed with portability, automation, and efficiency in mind, utilizing Docker for a consistent development environment and Visual Studio Code (VSCode) integration for seamless coding.

---

## Features

- **Multi-Language Support**: 
  - Solutions implemented in C++ (`cf_cpp/`) and Java (`cf_java/`).
  - Support for competitive programming workflows in both languages.
  
- **Docker Integration**: 
  - Portable environment for C++ solutions using Docker. Ensures compatibility and eliminates dependency issues.
  
- **VSCode Snippets and Tasks**:
  - C++ snippets: Triggered using `cfcpp`.
  - Java snippets: Triggered using `cpj`.
  - Tasks to automate input/output file generation and testing.

- **Automated Workflow**:
  - Input/output file creation using `build.sh`.
  - Dynamic testing of solutions by modifying `choice` in `main.cpp`.

- **Organized Directory Structure**:
  - Separate directories for solutions (`probs`), input/output files, and configurations.

---

## Repository Structure

```plaintext
.
├── cf_cpp/                               # C++ solutions and setup
│   ├── build.sh                          # Script to compile and run C++ solutions
│   ├── create_files.py                   # Script to generate input/output files
│   ├── Dockerfile                        # Docker setup for portable environment
│   ├── includes.h                        # Common header file for C++ solutions
│   ├── main.cpp                          # Entry point for testing solutions
│   ├── problem_map.h                     # Map linking problem IDs to filenames
│   ├── input/                            # Directory for input test cases
|   |   └── prob_{problemID}_in.txt       # C++ referance input file (e.g., prob_118A_in.txt)
│   ├── output/                           # Directory for output test cases
|   |   └── prob_{problemID}_out.txt      # C++ referance output file (e.g., prob_118A_out.txt)
│   ├──probs/                             # Directory for problem solutions in C++
|   |   └── prob_{problemID}.cpp          # C++ solutions (e.g., prob_118A.cpp)
│   └── .vscode/                          # VSCode configurations for C++
│       ├── cf_cpp.code-snippets          # C++ snippets for competitive programming
│       ├── settings.json                 # VSCode settings
│       └── tasks.json                    # Tasks for automated workflows
│
└── cf_java/                              # Java solutions and setup
    ├── prob_{problemID}.java             # Java solutions (e.g., prob_118A.java)
    └── .vscode/                          # VSCode snippets for Java
        └── cpjava.code-snippets          # Java snippets for competitive programming

```

---

## Setup and Usage

### **C++ Solutions (`cf_cpp/`)**

#### **Using Docker (Portable Setup)**
1. Build the Docker image:
   ```bash
   docker build -t cf_cpp .
   ```
2. Run the container:
   ```bash
   docker run -it --rm -v $(pwd):/workspace cf_cpp
   ```

#### **Without Docker (Local Setup)**
- Prerequisites: Install **GCC** and **Bash**.
- Run the solutions:
  ```bash
  ./build.sh
  ```

#### **VSCode Integration**
- Open the repository in **Visual Studio Code**.
- Use `cfcpp` as a snippet prefix for C++ templates.
- Press `Ctrl + Shift + B` to:
  - Generate input/output files in `input/` and `output/`.
  - Run the configured task for **Create Input Outpu Files**. (python 3 needed)

#### **Solution Testing**
1. Add the problem's input and output to:
   - `cf_cpp/input/prob_{problemID}_in.txt`
   - `cf_cpp/output/prob_{problemID}_out.txt`
2. Modify the `choice` variable in `main.cpp` to the respective `{problemID}`.
3. Run `./build.sh` to test the solution.

---

### **Java Solutions (`cf_java/`)**

#### **Local Setup**
- Prerequisites: Install **Java JDK**.
- Compile and run a Java solution:
  ```bash
  javac prob_{problemID}.java
  java prob_{problemID}
  ```

#### **VSCode Integration**
- Use `cpj` as a snippet prefix for Java templates.
- Java snippets are defined in `cpjava.code-snippets` for competitive programming needs.

---

## Naming Conventions

- **Solution Files**:
  - C++: `cf_cpp/probs/prob_{problemID}.cpp`
  - Java: `cf_java/prob_{problemID}.java`
- **Input Files**:
  - `cf_cpp/input/prob_{problemID}_in.txt`
- **Output Files**:
  - `cf_cpp/output/prob_{problemID}_out.txt`

---

## Contribution Guidelines

Contributions are welcome! Follow these steps to contribute:
1. Fork the repository.
2. Add or improve solutions/scripts.
3. Submit a pull request with a clear description of changes.

---

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Contact

For any questions or feedback, please open an issue in this repository.
Also email **[Raiyan_Ibrahim](mailto:miharbinayiar@gmail.com)**
---

*Note: This repository is a personal project and is not affiliated with Codeforces.*
