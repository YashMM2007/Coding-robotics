# Basic Commands Of Linux

## Interface :
- Point of Interaction between User and System
- There are two types of Inteface : 
    1. Command Line Interface [CLI] => Terminal
    2. Graphical User Inteface [GUI]
## Basic Commands : 
1. ls : "list" => This Command help us the Display all the Directories present inside the Current-Directory.
    ``` bash
    ls
    ```
    ``` bash
    ls -R => Displays all the Directory and Files inside the Current-Directory.
    ```
    ``` bash
    ls -a => Displays all the Directory and Files which are Hidden inside the Current-Directory.
    ```
    ``` bash
    ls -lart => Displays all Files in Long-Format, sorted by modification Time in Reverse-Order.
    ```
    
2. pwd : "print working directory" => To know in what Directory we are Currently present. 
    ``` bash
    pwd
    ```
3. cd : "change directory" => Help us to go inside the Sub-Directory of Current-Directory.
    ``` bash
    cd {Sub-Directory-Name}/
    ```
4. cd .. : Takes us back to the Main-Directory of the Current-Directory.
    ``` bash
    cd ..
    ```
5. mkdir : "make directory" => Makes New-Dirctory inside the Current-Directory.
    ``` bash
    mkdir {Dirctory-Name}
    ```
6. touch : Help making a New Blank File.
    ``` bash
    touch {File-Name.ext}
    ```
7. mv : "move" => To Move a Certain File into another Directory.
    ``` bash
    mv {File-Name} {Dirctory-Name} /
    mv {File-Full-Path} {Dirctory-Full-Path} /
    ```
7. cp : "copy" => To Copy a Certain File into another Directory.
    ``` bash
    cp {File-Name} {Dirctory-Name} /
    cp {File-Full-Path} {Dirctory-Full-Path} /
    ```
8. histroy : Display all Types of Command used till Now.
    ``` bash
    history
    ```
9. echo / printf : To print Something in Terminal.
    ``` bash
    echo {Message}
    printf{"Message"}
    ```
## Users in Linux : 
- There are two types of Users in Linux :
    1. Regular User : Has only Access to it's own Home Directory and can't Ulter with another User Home Directory.
    2. Root User    : Can Access the Home Directory of all the User [Admin] or [SuperUser].

1. sudo : If a RegularUser becomes RootUser then this is used to give command as RootUser.
    ``` bash
    sudo mkdir {Dirctory-Name}
    ```
2. sudo apt-get update : Gives list of Application which are Ready to Update.
    ``` bash
    sudo apt-get update
    ```
3. sudo apt-get upgrade : Upgardes all the Application which are Ready to Update.
    ``` bash
    sudo apt-get upgrade
    ```
4. sudo apt install : Used to Install Specific Software.
    ``` bash
    sudo apt install {File-Name}
    ```
5. chmod : Used to change the Permission of File or Diretory.
    ``` bash
    chmod {Linux-Permission} {File-Name}
    ```
6. top : Shows real-time information about running processes.
    ``` bash
    top
    ```
7. ps : Shows a snapshot of currently running processes.
    ``` bash
    ps
    ```
8. kill : To Close the given Software
    ``` bash
    kill {Process-ID-Software}
    ```
9. vim : Used to Access the Content inside the File
    ``` bash
    vim {File-Name}
    ```

## Path : 
- A Path is the Address/Location of a File or Folder.
- Types : 
    1. Absolute : Used when we want to Direct Ourselves one Directory to another which has no connectin at all.
    ``` bash
    cd /{File-Full-Path}
    ```
    2. Realtive : When Directed Directory is Sub-Directory of Current-Directory.
    ``` bash
    cd {Sub-Directory-Name}/
    ```

