🚀 System Utilities Collection
<div align="center">
https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black
https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white
https://img.shields.io/badge/Bash-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white
https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white

A collection of professional system utilities and scripts for Linux environment management

https://img.shields.io/github/stars/yourusername/reponame?style=social
https://img.shields.io/badge/License-MIT-blue.svg
https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat

</div>
📁 Table of Contents
<details> <summary><b>Click to expand</b></summary>
✨ Features

📦 Project Structure

🚀 Quick Start

🔧 Installation

📚 Detailed Documentation

🎯 Usage Examples

🤝 Contributing

📜 License

👨‍💻 Author

🌟 Support

</details>
✨ Features
<div align="center">
Feature	Description
🔍 Binary Search	Fast O(log n) search algorithm
👥 User Management	Automated user/group creation
💡 LED Control	System LED manipulation
🖥️ System Info	Environment detection & display
⚙️ Shell Setup	Automated environment configuration
</div>
📦 Project Structure
text
📂 system-utilities/
├── 📄 **binary_search.c**        # Binary search algorithm
├── 📄 **create_user.sh**         # User management script
├── 📄 **capslock_control.c**     # CapsLock LED control
├── 📄 **welcome_message.sh**     # System welcome message
├── 📄 **capslock_toggle.c**      # Interactive LED toggle
├── 📄 **setup_environment.sh**   # Environment configuration
├── 📄 **Makefile**              # Build automation
├── 📄 **README.md**             # This file
└── 📄 **LICENSE**               # MIT License
🚀 Quick Start
Prerequisites
bash
# Required packages
sudo apt-get update
sudo apt-get install build-essential git
Clone & Build
bash
# Clone the repository
git clone https://github.com/yourusername/system-utilities.git
cd system-utilities

# Build all C programs
make all

# Make scripts executable
chmod +x *.sh
🔧 Installation
Option 1: Full Installation
bash
# Clone, build, and install scripts
./install.sh  # Create this script if needed
Option 2: Manual Installation
bash
# Build C programs
make

# Install to /usr/local/bin (optional)
sudo cp binary_search capslock_control capslock_toggle /usr/local/bin/
📚 Detailed Documentation
1. 📄 binary_search.c <span style="color: #4CAF50;">(C Program)</span>
c
// Efficient binary search implementation
// Time Complexity: O(log n)
// Space Complexity: O(1)
Usage:

bash
gcc binary_search.c -o binary_search
./binary_search
Features:

✅ Type-safe integer array handling

✅ Overflow-protected midpoint calculation

✅ Input validation with error handling

✅ Clean output formatting

2. 📄 create_user.sh <span style="color: #FF9800;">(Bash Script)</span>
bash
#!/bin/bash
# Automated user and group management
# Requires: sudo privileges
Usage:

bash
sudo ./create_user.sh
Features:

✅ Idempotent operations (safe to run multiple times)

✅ Logging to /var/log/user_management.log

✅ Password policy enforcement

✅ Verification steps

3. 📄 capslock_control.c <span style="color: #4CAF50;">(C Program)</span>
c
// System LED control utility
// Controls: /sys/class/leds/capslock/brightness
Usage:

bash
gcc capslock_control.c -o capslock_ctl
sudo ./capslock_ctl [0|1]
Features:

✅ Multiple path support for different systems

✅ Error handling for permissions and paths

✅ Interactive and CLI modes

✅ State verification

4. 📄 welcome_message.sh <span style="color: #FF9800;">(Bash Script)</span>
bash
#!/bin/bash
# Colorful system information display
Usage:

bash
./welcome_message.sh
Features:

✅ Color-coded output for better readability

✅ System information gathering

✅ Directory structure verification

✅ Clean, professional display

5. 📄 capslock_toggle.c <span style="color: #4CAF50;">(C Program)</span>
c
// Interactive CapsLock LED controller
Usage:

bash
gcc capslock_toggle.c -o capslock_toggle
sudo ./capslock_toggle
Features:

✅ Wildcard path support

✅ Menu-driven interface

✅ Current state display

✅ Comprehensive error messages

6. 📄 setup_environment.sh <span style="color: #FF9800;">(Bash Script)</span>
bash
#!/bin/bash
# Shell environment configuration
Usage:

bash
./setup_environment.sh
Features:

✅ Backup creation before modifications

✅ Duplicate prevention for variables

✅ User confirmation for actions

✅ Automatic reload suggestion

🎯 Usage Examples
Example 1: Binary Search
bash
# Compile and run
gcc binary_search.c -o bs
./bs

# Example output:
# Binary Search Demo
# Array: [2, 4, 6, 8, 10, 14, 16, 20]
# Enter target number to search: 10
# Number found at index: 4
Example 2: User Management
bash
# Run with sudo
sudo ./create_user.sh

# Check logs
tail -f /var/log/user_management.log
Example 3: CapsLock Control
bash
# Turn OFF CapsLock LED
sudo ./capslock_ctl 0

# Turn ON CapsLock LED
sudo ./capslock_ctl 1

# Interactive mode
sudo ./capslock_toggle
🤝 Contributing
We love contributions! Here's how you can help:

Ways to Contribute
🐛 Report Bugs – Create an Issue

💡 Suggest Features – Start a Discussion

🔧 Submit PRs – Follow the steps below

Development Workflow
bash
# 1. Fork the repository
# 2. Clone your fork
git clone https://github.com/yourusername/system-utilities.git

# 3. Create a feature branch
git checkout -b feature/amazing-feature

# 4. Make your changes
# 5. Test thoroughly
make test

# 6. Commit changes
git commit -m "Add amazing feature"

# 7. Push to branch
git push origin feature/amazing-feature

# 8. Open a Pull Request
Code Standards
✅ Follow existing code style

✅ Add comments for complex logic

✅ Update documentation

✅ Test on multiple Linux distributions

📜 License
This project is licensed under the MIT License - see the LICENSE file for details.

text
MIT License

Copyright (c) 2024 [Abdelrhman Hamed Musaa]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
👨‍💻 Author
<div align="center">
Abdelrhman Hamed
Tachnical Consultant 

https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white
https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white
https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white

</div>
🌟 Support
If you find this project useful, please consider:

<div align="center">
https://img.shields.io/badge/%E2%AD%90_Star_on_GitHub-FFD700?style=for-the-badge&logo=github&logoColor=black
https://img.shields.io/badge/%F0%9F%8D%B4_Fork_on_GitHub-181717?style=for-the-badge&logo=github&logoColor=white
https://img.shields.io/badge/%F0%9F%91%81%EF%B8%8F_Watch_on_GitHub-181717?style=for-the-badge&logo=github&logoColor=white

</div>
<div align="center">
Built with ❤️ for the Linux Community
https://img.shields.io/badge/Made%2520with-Bash-C92424?style=flat-square
https://img.shields.io/badge/Platform-Linux-FCC624?style=flat-square
https://img.shields.io/badge/Maintained%253F-yes-green?style=flat-square

Last updated: 25-12-2025

</div>
📊 Project Stats
<div align="center">
bash
# Repository statistics
Total Files: 6
Lines of Code: ~500
Languages: C, Bash
</div>
