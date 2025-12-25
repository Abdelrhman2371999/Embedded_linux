#!/bin/bash
#
# User Management Script
# Creates user and group if they don't exist
# Usage: sudo ./create_user.sh

set -e  # Exit on error

# Configuration
USERNAME="Abdi"
GROUPNAME="Hamed"
LOG_FILE="/var/log/user_management.log"

# Logging function
log_message() {
    echo "[$(date '+%Y-%m-%d %H:%M:%S')] $1" | tee -a "$LOG_FILE"
}

# Check if running as root
if [[ $EUID -ne 0 ]]; then
    log_message "ERROR: This script must be run as root"
    exit 1
fi

log_message "Starting user management script"

# Create group if it doesn't exist
if getent group "$GROUPNAME" > /dev/null; then
    log_message "INFO: Group '$GROUPNAME' already exists"
else
    log_message "INFO: Creating group '$GROUPNAME'"
    groupadd "$GROUPNAME" && log_message "SUCCESS: Group '$GROUPNAME' created"
fi

# Create user if it doesn't exist
if id "$USERNAME" &>/dev/null; then
    log_message "INFO: User '$USERNAME' already exists"
else
    log_message "INFO: Creating user '$USERNAME'"
    useradd -m -g "$GROUPNAME" -s /bin/bash "$USERNAME" && \
    log_message "SUCCESS: User '$USERNAME' created and added to group '$GROUPNAME'"
    
    # Set initial password (user should change on first login)
    echo "$USERNAME:${USERNAME}123" | chpasswd
    chage -d 0 "$USERNAME"  # Force password change on first login
fi

# Display verification
echo "=== Verification ==="
echo "User Information:"
id "$USERNAME"
echo -e "\nGroup Information:"
getent group "$GROUPNAME"
echo -e "\nHome Directory Contents:"
ls -la "/home/$USERNAME/"

log_message "User management completed successfully"
exit 0
