#!/bin/bash
if [ -f "$HOME/.bashrc" ]; then
echo "export HELLO=\$(hostname)" >> "$HOME/.bashrc"
echo "export Local=\$(whoami)" >> "$HOME/.bashrc"

echo "New environment variables added to .bashrc"
gnome-terminal &
else
echo ".bashrc file does not exist in your home directory."
fi
