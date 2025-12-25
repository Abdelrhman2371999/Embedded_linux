#!/bin/bash
#
# Welcome Message Script for Embedded Linux
# Displays a greeting message with system information

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Get system information
HOSTNAME=$(hostname)
USER=$(whoami)
KERNEL=$(uname -r)
ARCH=$(uname -m)
TIME=$(date '+%Y-%m-%d %H:%M:%S')

# Display welcome message
echo -e "${GREEN}========================================${NC}"
echo -e "${BLUE}   Welcome to Embedded Linux!${NC}"
echo -e "${GREEN}========================================${NC}"
echo -e "You are in: ${YELLOW}Xpand Environment${NC}"
echo -e ""
echo -e "${BLUE}System Information:${NC}"
echo -e "  Hostname: ${GREEN}$HOSTNAME${NC}"
echo -e "  User: ${GREEN}$USER${NC}"
echo -e "  Kernel: ${GREEN}$KERNEL${NC}"
echo -e "  Architecture: ${GREEN}$ARCH${NC}"
echo -e "  Current Time: ${GREEN}$TIME${NC}"
echo -e "${GREEN}========================================${NC}"

# Optional: Check for important directories
echo -e "\n${BLUE}Checking important directories:${NC}"
[ -d "/sys" ] && echo -e "  /sys: ${GREEN}Exists${NC}" || echo -e "  /sys: ${RED}Missing${NC}"
[ -d "/proc" ] && echo -e "  /proc: ${GREEN}Exists${NC}" || echo -e "  /proc: ${RED}Missing${NC}"
[ -d "/dev" ] && echo -e "  /dev: ${GREEN}Exists${NC}" || echo -e "  /dev: ${RED}Missing${NC}"

exit 0
