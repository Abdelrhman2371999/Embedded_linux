<h1 align="center">
  🔧 System Utilities Collection </h1>

<p align="center">
  <strong>A professional suite of Linux system utilities and automation scripts</strong>
  <br>
  Built for developers, sysadmins, and embedded engineers
</p>

<div align="center">

![Linux](https://img.shields.io/badge/Platform-Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Bash](https://img.shields.io/badge/Language-Bash-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Maintenance](https://img.shields.io/badge/Maintained-Yes-success?style=for-the-badge)

[![GitHub Stars](https://img.shields.io/github/stars/Abdelrhman2371999/system-utilities?style=social)](https://github.com/Abdelrhman2371999)
[![GitHub Forks](https://img.shields.io/github/forks/Abdelrhman2371999/system-utilities?style=social)](https://github.com/Abdelrhman2371999)
[![GitHub Issues](https://img.shields.io/github/issues/Abdelrhman2371999/system-utilities?color=blue&style=flat-square)](https://github.com/Abdelrhman2371999/system-utilities/issues)

</div>

---

## 🎯 Overview

Welcome to the **System Utilities Collection** – a curated set of professional-grade tools designed for Linux system management, automation, and development.
### **Why Choose This Collection?**

- ✅ **Production-Ready Code** – Clean, documented, and maintainable
- ✅ **Best Practices** – Follows industry standards and conventions
- ✅ **Comprehensive** – Covers various aspects of system programming
- ✅ **Educational** – Perfect for learning Linux internals

<br>

## ✨ **Features at a Glance**

<div align="center">
  
| Category | Tool | Description | Language |
|----------|------|-------------|----------|
| **🔍 Algorithms** | `binary_search` | Fast O(log n) search implementation | C |
| **👤 User Management** | `create_user` | Automated user/group creation | Bash |
| **💡 Hardware Control** | `capslock_control` | System LED manipulation | C |
| **ℹ️ System Info** | `welcome_message` | Environment information display | Bash |
| **⚙️ Environment** | `setup_environment` | Shell configuration automation | Bash |

</div>

<br>

## 🚀 **Quick Start**

### **Prerequisites**
```bash
# Ubuntu/Debian
sudo apt update && sudo apt install build-essential git

# Fedora/RHEL
sudo dnf groupinstall "Development Tools" && sudo dnf install git
```
## Clone & Setup

# Clone repository
git clone https://github.com/Abdelrhman2371999/system-utilities.git
cd system-utilities

# Build everything
make all

# Make scripts executable
chmod +x *.sh

# Quick verification
./welcome_message.sh

📦 Project Structure
text
system-utilities/
├── 📁 src/
│   ├── 📄 binary_search.c          # Binary search algorithm
│   ├── 📄 capslock_control.c       # Hardware LED control
│   └── 📄 capslock_toggle.c        # Interactive LED toggle
├── 📁 scripts/
│   ├── 📄 create_user.sh           # User management
│   ├── 📄 welcome_message.sh       # System information
│   └── 📄 setup_environment.sh     # Shell configuration
├── 📄 Makefile                     # Build automation
├── 📄 LICENSE                      # MIT License
└── 📄 README.md                    # This file

📚 Detailed Documentation
1. Binary Search Algorithm [C]
c
// binary_search.c - Efficient search in sorted arrays
// Time: O(log n), Space: O(1)
<details> <summary><b>🔍 View Details & Usage</b></summary>
Compilation:

bash
gcc -Wall -Wextra -O2 binary_search.c -o binary_search
Usage:

bash
./binary_search
# Enter: 10
# Output: Found at index 4
Key Features:

🛡️ Overflow-safe midpoint calculation

🎯 Input validation with error handling

📊 Clean, formatted output

🔄 Recursive/iterative ready structure

</details>
2. User Management Script [Bash]
bash
# create_user.sh - Automated user/group administration
# Requires: sudo privileges
<details> <summary><b>👤 View Details & Usage</b></summary>
Execution:

bash
# Run with administrative privileges
sudo ./create_user.sh
Features:

📝 Detailed logging to /var/log/user_management.log

🔄 Idempotent operations

🔒 Security best practices

✅ Comprehensive verification

Output Example:

bash
[2024-12-25 10:30:45] INFO: Creating group 'Developers'
[2024-12-25 10:30:45] SUCCESS: Group 'Developers' created
[2024-12-25 10:30:45] INFO: Creating user 'Abdi'
</details>
3. CapsLock LED Control [C]
c
// capslock_control.c - Hardware LED manipulation
// Path: /sys/class/leds/capslock/brightness
<details> <summary><b>💡 View Details & Usage</b></summary>
Build & Run:

bash
gcc capslock_control.c -o capslock_ctl
sudo ./capslock_ctl 0    # Turn OFF
sudo ./capslock_ctl 1    # Turn ON
Features:

🔧 Multiple path support for different kernels

🎮 Interactive & CLI modes

🛡️ Permission handling

🔍 State verification

Interactive Mode:

bash
$ sudo ./capslock_toggle
=== CapsLock Control ===
Current state: 1
Options:
  0 - Turn OFF
  1 - Turn ON
  9 - Exit
Choice: 0
✅ Success: CapsLock LED turned OFF
</details>
4. System Welcome Script [Bash]
bash
# welcome_message.sh - Colorful system information
<details> <summary><b>🖥️ View Details & Usage</b></summary>
Usage:

bash
./welcome_message.sh
Output Features:

text
========================================
   🚀 Welcome to Embedded Linux!
========================================

🔧 System Information:
  Host:   ubuntu-server
  User:   developer
  Kernel: 5.15.0-76-generic
  Arch:   x86_64
  Time:   2024-12-25 10:30:45

✅ System directories verified
Features:

🎨 Color-coded terminal output

📊 Comprehensive system data

✅ Directory validation

📱 Mobile-responsive design

</details>
5. Environment Setup [Bash]
bash
# setup_environment.sh - Shell configuration
<details> <summary><b>⚙️ View Details & Usage</b></summary>
Usage:

bash
./setup_environment.sh
Features:

💾 Automatic backups before changes

🔄 Duplicate prevention

✅ User confirmation prompts

🔄 Auto-reload instructions

Sample Run:

bash
$ ./setup_environment.sh
=== Environment Setup ===
Backup created: ~/.bashrc_backups/bashrc_20241225_103045
✅ Added: HELLO=$(hostname)
✅ Added: LOCAL=$(whoami)
✅ Added: EDITOR=nano
📝 Apply changes: source ~/.bashrc
</details>
🛠️ Installation Options
Option A: Quick Install (Recommended)
bash
# One-command setup
curl -sSL https://raw.githubusercontent.com/Abdelrhman2371999/system-utilities/main/install.sh | bash
Option B: Manual Install
bash
# Clone & compile
git clone https://github.com/Abdelrhman2371999/system-utilities
cd system-utilities

# Build C programs
make

# Optional: System-wide install
sudo make install
Option C: Docker
bash
# Run in isolated environment
docker build -t system-utilities .
docker run -it system-utilities

📖 Usage Examples
Example 1: Finding System Information
bash
# Display welcome message with system details
./welcome_message.sh

# Output includes:
# - Hostname and username
# - Kernel version and architecture
# - System time and directory status
Example 2: Managing Users
bash
# Create user with automated logging
sudo ./create_user.sh

# Monitor logs in real-time
tail -f /var/log/user_management.log
Example 3: LED Control
bash
# Quick LED toggle
sudo ./capslock_ctl 0  # Off
sudo ./capslock_ctl 1  # On

# Interactive control
sudo ./capslock_toggle

🤝 Contributing
We welcome contributions! Here's how to help:

Ways to Contribute
🐛 Report bugs via GitHub Issues

💡 Suggest features in Discussions

📚 Improve documentation

🔧 Submit pull requests

Development Setup
bash
# 1. Fork the repository
# 2. Clone your fork
git clone https://github.com/your-username/system-utilities.git

# 3. Create feature branch
git checkout -b feature/your-feature

# 4. Make changes and test
make test

# 5. Commit with clear message
git commit -m "feat: add your feature"

# 6. Push and create PR
git push origin feature/your-feature
Coding Standards
Follow existing code style

Add comments for complex logic

Include error handling

Update documentation

Test on multiple distributions


📞 Contact & Support
<div align="center">
Abdelrhman Hamed
Technical Consultant & Embedded Systems Engineer

https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white
https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white
https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white
https://img.shields.io/badge/Portfolio-4285F4?style=for-the-badge&logo=google-chrome&logoColor=white

</div>
Need Help?
📧 Email: abdelrhmanhamedmousaa@gmail.com

💼 LinkedIn: abdelrhman-hamed23

🐙 GitHub: Abdelrhman2371999


📜 License
This project is licensed under the MIT License - see the LICENSE file for details.

text
MIT License
Copyright (c) 2024 Abdelrhman Hamed

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

🌟 Support This Project
If you find this project useful, please consider:

<div align="center">
https://img.shields.io/badge/%E2%AD%90_Give_a_Star-FFD700?style=for-the-badge&logo=github&logoColor=black
https://img.shields.io/badge/%F0%9F%8D%B4_Fork_Project-181717?style=for-the-badge&logo=github&logoColor=white
https://img.shields.io/badge/%F0%9F%93%A2_Share_on_Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white

</div>
<div align="center">
Built with ❤️ for the Open Source Community
https://img.shields.io/badge/Updated-December%25202025-blue?style=flat-square
https://img.shields.io/github/languages/code-size/Abdelrhman2371999/system-utilities?color=blue&style=flat-square
https://img.shields.io/github/languages/count/Abdelrhman2371999/system-utilities?style=flat-square

"Quality is not an act, it is a habit." – Aristotle

</div>
<div align="center">
Found a bug? Have a suggestion?
Open an Issue •
Contact Me

</div> ```
🎨 Key Design Improvements:
Modern, Clean Layout – Better spacing and organization

Visual Hierarchy – Clear section separation with icons

Interactive Elements – Expandable sections for detailed info

Professional Contact Section – Well-integrated with your links

Better Color Scheme – More visually appealing badges

Responsive Design – Looks great on all devices

Action-Oriented – Clear calls to action

Comprehensive Documentation – Every tool has detailed usage

Multiple Installation Options – Flexibility for users

Visual Tables – Easy-to-scan feature comparison

🔗 Your Links Integrated:
LinkedIn: https://www.linkedin.com/in/abdelrhman-hamed23/

Email: abdelrhmanhamedmousaa@gmail.com

GitHub: https://github.com/Abdelrhman2371999
