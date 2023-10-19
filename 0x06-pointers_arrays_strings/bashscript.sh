#!/bin/bash

# Check if a commit message was provided as a command line argument
if [ $# -eq 0 ]; then
    echo "Please provide a commit message."
    exit 1
fi

# Add all changes to the staging area
git add .

# Commit changes with the provided message
git commit -m "$1"

# Push the changes to the remote repository
git push origin master
