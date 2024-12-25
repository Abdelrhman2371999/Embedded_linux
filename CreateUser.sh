#!/bin/bash

# Variables
USERNAME="Abdi"
GROUPNAME="Hamed"

# Check if group exists
if grep -q "^${GROUPNAME}:" /etc/group; then
    echo "Group '${GROUPNAME}' already exists."
else
    echo "Group '${GROUPNAME}' does not exist. Creating it now..."
    sudo groupadd "$GROUPNAME"
    echo "Group '${GROUPNAME}' created successfully."
fi

# Check if user exists
if id -u "$USERNAME" &>/dev/null; then
    echo "User '${USERNAME}' already exists."
else
    echo "User '${USERNAME}' does not exist. Creating it now..."
    sudo useradd -m -g "$GROUPNAME" "$USERNAME"
    echo "User '${USERNAME}' created and added to group '${GROUPNAME}'."
fi

# Display user information
echo "User Information:"
id "$USERNAME"

# Display group information
echo "Group Information:"
getent group "$GROUPNAME"




