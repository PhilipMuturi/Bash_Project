#!/bin/bash

# Set Git configurations for this script
git config user.name "PhilipMuturi"
git config user.email "ranktech@gmail.com"

# Loop through all subdirectories (assuming they are Git repositories)
for dir in */; do
  if [ -d "$dir/.git" ]; then
    # Navigate to the repository directory
    cd "$dir"
    
    # Get the current branch
    current_branch=$(git rev-parse --abbrev-ref HEAD)
    
    echo "Updating $dir to the latest of $current_branch..."
    
    # Fetch and pull the latest changes for the current branch
    git fetch origin "$current_branch"
    git pull origin "$current_branch"
    
    echo "Finished updating $dir."
    
    # Navigate back to the original directory
    cd ..
  fi
done

# Reset the Git configurations to their previous values
# git config --unset user.name
# git config --unset user.email

echo "All repositories updated to the latest of their respective branches."

