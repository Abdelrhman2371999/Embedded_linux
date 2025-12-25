# 🔧 System Utilities Collection

<p align="center">
  <strong>A professional suite of Linux system utilities and automation scripts</strong><br>
  Built for developers, sysadmins, and embedded engineers
</p>

<p align="center">

![Linux](https://img.shields.io/badge/Platform-Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Bash](https://img.shields.io/badge/Language-Bash-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Maintenance](https://img.shields.io/badge/Maintained-Yes-success?style=for-the-badge)

</p>

---

## 🎯 Overview

**System Utilities Collection** is a curated set of professional-grade Linux tools designed for:
- System programming
- Automation & scripting
- Embedded & server environments

### Why Choose This Collection?
- ✅ Production-ready, clean code  
- ✅ Linux best practices  
- ✅ Educational & practical  
- ✅ Real-world use cases  

---

## ✨ Features at a Glance

| Category | Tool | Description | Language |
|-------|------|------------|----------|
| Algorithms | `binary_search` | O(log n) binary search | C |
| User Management | `create_user` | Automated user creation | Bash |
| Hardware Control | `capslock_control` | CapsLock LED control | C |
| System Info | `welcome_message` | System information display | Bash |
| Environment | `setup_environment` | Shell environment setup | Bash |

---

## 🚀 Quick Start

### Prerequisites
```bash
# Ubuntu / Debian
sudo apt update && sudo apt install build-essential git

# Fedora / RHEL
sudo dnf groupinstall "Development Tools" && sudo dnf install git
```

### Clone & Build
```bash
git clone https://github.com/Abdelrhman2371999/system-utilities.git
cd system-utilities
make all
chmod +x scripts/*.sh
./scripts/welcome_message.sh
```

---

## 📦 Project Structure
```text
system-utilities/
├── src/
│   ├── binary_search.c
│   ├── capslock_control.c
│   └── capslock_toggle.c
├── scripts/
│   ├── create_user.sh
│   ├── welcome_message.sh
│   └── setup_environment.sh
├── Makefile
├── LICENSE
└── README.md
```

---

## 📚 Tool Documentation

### 1️⃣ Binary Search (C)
```bash
gcc -Wall -Wextra -O2 binary_search.c -o binary_search
./binary_search
```

**Highlights**
- Overflow-safe midpoint
- Input validation
- Efficient O(log n)

---

### 2️⃣ User Management Script
```bash
sudo ./scripts/create_user.sh
```
- Logging: `/var/log/user_management.log`
- Secure & idempotent

---

### 3️⃣ CapsLock LED Control
```bash
gcc capslock_control.c -o capslock_ctl
sudo ./capslock_ctl 1   # ON
sudo ./capslock_ctl 0   # OFF
```

---

### 4️⃣ Welcome Message
```bash
./scripts/welcome_message.sh
```
Displays hostname, user, kernel, architecture, and time.

---

### 5️⃣ Environment Setup
```bash
./scripts/setup_environment.sh
```
- Automatic backups
- Duplicate-safe
- User confirmation

---

## 🛠 Installation Options

### Quick Install
```bash
curl -sSL https://raw.githubusercontent.com/Abdelrhman2371999/system-utilities/main/install.sh | bash
```

### Docker
```bash
docker build -t system-utilities .
docker run -it system-utilities
```

---

## 🤝 Contributing
1. Fork the repo  
2. Create a feature branch  
3. Commit clearly  
4. Open a Pull Request  

---

## 📞 Contact

**Abdelrhman Hamed**  
Cybersecurity & Embedded Systems Engineer  

- 🔗 LinkedIn: https://www.linkedin.com/in/abdelrhman-hamed23/  
- 🐙 GitHub: https://github.com/Abdelrhman2371999  
- 📧 Email: abdelrhmanhamedmousaa@gmail.com  

---

## 📜 License

MIT License © 2024 Abdelrhman Hamed

---

## 🌟 Support

If this project helped you:
- ⭐ Star the repository
- 🍴 Fork it
- 📢 Share it

> *"Quality is not an act, it is a habit."* — Aristotle
