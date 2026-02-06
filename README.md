# Coding-Domain-Task
This Repo include Content related to : 
1. Basic Of Linux
2. Git and GitHub
3. Arduino for Blinking of LED
# Basic Of Linux : 
1.Interface : 
 - CLI → Terminal
 - GUI → Graphical interface

2. Commands :
   ``` bash
   - ls                   # list files/directories
   - ls -a                # include hidden files
   - ls -lart             # long format, all, time, reverse
   - pwd                  # current directory
   - cd dir/              # change directory
   - cd ..                # parent directory
   - mkdir                # create directory
   - touch                # create file
   - mv                   # move file
   - cp                   # copy file
   - history              # command history
   - echo "x" printf "x"  # print output
   ```
3. Users :
  - Regular → Limited ccess
  - Root → Full Access
  ``` bash
  - sudo command
  - sudo apt update
  - sudo apt upgrade
  - sudo apt install 
  - top
  - ps
  - kill 
  ```
4. Path :
 - Absolute → /path
 - Relative → path/

# Git and GitHub :

## About

This section covers the basics of Git and GitHub. The objective of this task was to understand how version control works and how code can be managed, tracked, and shared using Git and GitHub.

## What I Learned

1. Git is a Version-Control software used to Track Changes made to Code.
2. GitHub is a Web-Based platform used to host Git Repo online.
3. Changes in code are saved in the form of Commits, which store When and What and When changes were made.

## Commands Practiced
``` bash
 1. git clone
 2. git status
 3. git add
 4. git commit
 5. git push
 6. git pull
 7. git branch
 8. git log
 9. git reset  
```
## Conclusion

1. This task helped me understand how developers manage code versions and collaborate using Git and GitHub.
2. Working in the terminal using Git commands was a new and valuable learning experience.

#  Arduino for Blinking of LED
## About
This project demonstrates LED blinking using Arduino, where a push button toggles the LED blinking ON and OFF.

## Components Used
1. Arduino Board
2. Arduino IDE
3. LED
4. Push Button

## Concept
1. Digital input and output
2. Toggle logic using push button
3. INPUT_PULLUP for stable input
4. Delay for blinking speed

## Working Principle
1. Button press toggles the LED blinking state.
2. Once ON, the LED keeps blinking without holding the button.
3. A small delay is used for debouncing to avoid false triggers.

```bash
if (button == LOW && lastButton == HIGH) {
    ledOn = !ledOn;
    delay(100);
}
lastButton = button;
```
