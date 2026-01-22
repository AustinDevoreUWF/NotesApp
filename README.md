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
   git clone
   cd cnote
