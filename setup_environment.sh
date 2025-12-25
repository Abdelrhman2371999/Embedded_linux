#!/bin/bash
#
# Environment Setup Script
# Configures shell environment with custom variables
# Usage: ./setup_environment.sh

set -e  # Exit on error

# Configuration
BASHRC_FILE="$HOME/.bashrc"
BACKUP_DIR="$HOME/.bashrc_backups"
TIMESTAMP=$(date '+%Y%m%d_%H%M%S')

# Create backup directory
mkdir -p "$BACKUP_DIR"

# Function to add variable if it doesn't exist
add_env_variable() {
    local var_name="$1"
    local var_value="$2"
    
    if grep -q "export $var_name=" "$BASHRC_FILE"; then
        echo "Variable $var_name already exists in $BASHRC_FILE"
        return 1
    else
        echo "export $var_name=\"$var_value\"" >> "$BASHRC_FILE"
        echo "Added $var_name to $BASHRC_FILE"
        return 0
    fi
}

# Function to create backup
create_backup() {
    cp "$BASHRC_FILE" "$BACKUP_DIR/bashrc_backup_$TIMESTAMP"
    echo "Backup created: $BACKUP_DIR/bashrc_backup_$TIMESTAMP"
}

# Main execution
echo "=== Environment Setup Script ==="

# Check if .bashrc exists
if [ ! -f "$BASHRC_FILE" ]; then
    echo "ERROR: $BASHRC_FILE not found!"
    echo "Creating new .bashrc file..."
    touch "$BASHRC_FILE"
    echo "# Created by setup_environment.sh on $(date)" > "$BASHRC_FILE"
fi

# Create backup before making changes
create_backup

# Add environment variables
echo -e "\nAdding environment variables:"

# Add HELLO variable with hostname
if add_env_variable "HELLO" "$(hostname)"; then
    echo "  ✓ HELLO=\$(hostname)"
fi

# Add LOCAL variable with username
if add_env_variable "LOCAL" "$(whoami)"; then
    echo "  ✓ LOCAL=\$(whoami)"
fi

# Add additional useful variables
add_env_variable "EDITOR" "nano"
add_env_variable "VISUAL" "vim"
add_env_variable "PAGER" "less"

# Add timestamp of modification
echo "" >> "$BASHRC_FILE"
echo "# Modified by setup_environment.sh on $(date '+%Y-%m-%d %H:%M:%S')" >> "$BASHRC_FILE"

echo -e "\n=== Setup Complete ==="
echo "Changes have been saved to $BASHRC_FILE"
echo "Backup available in $BACKUP_DIR/"
echo -e "\nTo apply changes immediately, run:"
echo "  source $BASHRC_FILE"
echo -e "\nTo open a new terminal with the changes:"
echo "  gnome-terminal &"

# Ask user if they want to open new terminal
read -p "Open new terminal now? (y/n): " -n 1 -r
echo
if [[ $REPLY =~ ^[Yy]$ ]]; then
    echo "Opening new terminal..."
    gnome-terminal &
fi

exit 0
