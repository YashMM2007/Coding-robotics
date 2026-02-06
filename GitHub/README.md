# Git and GitHub
1. Git and GitHub are Interrelated Software-Systems that are used for version control. Git is a Software that assists in tracking changes that have been made to code, whereas GitHub is a Web-Based service that is used to host and manage Git Repositories online.
2. The primary use of Git is to record changes that have been made to code at a particular Time and Place. These changes are stored in the form of "Commits". GitHub assists in sharing code, storing it as a backup online, and collaborating with others using the same Git version control system.
3. Our PC is called "Local" and GitHub Account is called "Remote".
## Some IMP Commands
1. Clone : Used to put Repo on our Local PC
    ``` cpp
    git clone {link} 
    ```
2. Status : Get the status of the code
   ``` cpp
    git status
    ```
   File States
   1. Untracked : New file that Git does not know.
   2. Modified  : Subject inside the already present file is changed.
   3. Staged    : Ready to commit.
   ``` cpp
   Change / New File  { Modified }
        ↓
      Add  { Staged }
        ↓
     Commit

3. Add  :  Add new or changed files in your working directory.
    ``` cpp
    git add {file_name}
    ```
    ``` cpp
    git add .
    ```
4.  Commit : It is a record that change is made.
     ``` cpp
     git commit -m {<message}
    ```
5.  Push : Push the changes made on local to GitHub.
    ``` cpp
    git push origin main
    ```
    ``` cpp
    git push -u origin main
    git push
    ```
6.  Init : Used to add new repository from local.
    ``` cpp
    git init
    ```
    ``` cpp
    git remote add origin {link name>}
    ```
7.  Branch : 
    ``` cpp
    git branch => To Check Branch
    ```
    ``` cpp
    git branch -M {branch-name} => Rename Branch
    ```
    ``` cpp
    git checkout -b {branch-name} => Create New Branch
    ```
    ``` cpp
    git checkout {brnach-name} => Navigate Between Branch
    ```
    ``` cpp
    git branch -d {branch-name} => Delete Branch
    ```
    ``` cpp
    git diff {branch-main} => To Find Difference Between {branch-name} And Current-Branch
    ```
8. Pull : Pull is used to fetch and merge changes from a remote repository to the current local branch.
    ``` cpp
    git pull {branch-name}
    ```
9. Log : When we want to see all the Chnages.
    ``` cpp
    git log
    ```
10. Reset :
    1. Staged : Like when add command is done using.
    ``` cpp
    git reset {file-name}
    git reset
    ```
    2. Commit : Changes are Committed.
    ``` cpp
    git reset HEAD~1 => To Uncommit the last Commit
    ```
12. Fork :
    1. Fork is used to copy the repository from another GitHub account to our GitHub account.
    2. This is done by clicking on the Fork button on GitHub and does not require a Git command.
    
    




















