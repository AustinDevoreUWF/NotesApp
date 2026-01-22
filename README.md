# C-Note CLI Utility

A high-performance, lightweight Command Line Interface (CLI) tool written in C for rapid file creation and organized note-taking. 

## 🚀 Overview
C-Note was developed to solve the "friction" of initializing files and organizing developer logs directly from the terminal. It automates the directory management and adds professional-grade logging features like automated timestamping.

## ✨ Key Features
* **Global Execution:** Integrated with the Windows PATH for access from any directory.
* **Dual-Mode Input:** Supports both direct command-line arguments (`cnote note.txt`) and interactive prompts.
* **Environment Aware:** Dynamically resolves user paths using `getenv` for cross-system portability.
* **Automated Logging:** Utilizes `time.h` to append ISO-standard timestamps to every entry.
* **Memory Safe:** Implemented with strict buffer limits and string sanitization to prevent overflows.

## 🛠️ Technical Stack
* **Language:** C (C11)
* **Build System:** CMake
* **OS APIs:** Windows API (`direct.h`, `process.h`)

## 📦 Installation & Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/AustinDevoreUWF/cnote.git
   cd cnote
2. **Build**
   ```
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```
3. **Global Access (Windows):**
   
   Copy the generated CnoteMaker.exe to a permanent folder (e.g., C:\DeveloperTools).
   
   Rename the executable to cnote.exe.
   
   Add that folder to your System Environment Variables (PATH).
   
   You can now run the tool by simply typing cnote in any terminal.

## 🖥️ Usage

### Quick Entry (Argument Mode)
Skip the prompts by passing the filename directly as an argument:
```bash
cnote ideas.txt
```
If no argument is provided, the utility will guide you through the setup:
```
cnote
# Output: 
# Filename: my_notes.md
```
**EXIT:** To close simply type QUIT on its own line and hit enter.

**Storage:** All files are automatically routed to %USERPROFILE%/CnoteMaker/
