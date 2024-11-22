# Exercise 00: Oh yeah, mooore... - Detailed Walkthrough

## Objective
Create a series of files and directories with specific permissions that match the required `ls -l` output.

## Required Output Format
```
$> ls -l
total 42
drwx--xr-x 2 login wheel XX Jun 1 20:47 test0
-rwx--xr-- 1 login wheel 4  Jun 1 21:46 test1
dr-x---r-- 2 login wheel XX Jun 1 22:45 test2
-r-----r-- 2 login wheel 1  Jun 1 23:44 test3
-rw-r----x 1 login wheel 2  Jun 1 23:43 test4
-r-----r-- 2 login wheel 1  Jun 1 23:44 test5
lrwxr-xr-x 1 login wheel 5  Jun 1 22:20 test6 -> test0
```

## Step-by-Step Instructions

### 1. Create the Basic Files and Directories

```bash
# Create directories
mkdir test0 test2

# Create regular files
touch test1 test3 test4 test5

# Create symbolic link
ln -s test0 test6
```

### 2. Set Correct File Sizes

```bash
# test1 should be 4 bytes
echo "123" > test1    # Creates a 4-byte file

# test3 and test5 should be 1 byte
echo "1" > test3
echo "1" > test5

# test4 should be 2 bytes
echo "12" > test4
```
### 3. Copy the modification date
``` bash
touch -mat 202406012146 test1
touch -h -t 202406012047 test0
touch -h -t 202406012220 test6
```

### 3. Set File Permissions
```bash
chmod 715 test0

chmod 714 test1

chmod 404 test3

chmod 641 test4

chmod 404 test5

# test6 is a symbolic link and keeps its default permissions (lrwxr-xr-x)
```

### 4. Understanding the Permission Numbers
Breaking down the chmod numbers:
7 = 4+2+1 (read/write/execute)  
6 = 4+2 (read/write)  
5 = 4+1 (read/execute)  
4 = 4 (read)  
3 = 2+1 (write/execute)  
2 = 2 (write)  
1 = 1 (execute)
0 = --- (no permissions)

### 5. Create the Archive
After creating all files with correct permissions:
```bash
tar -cf exo.tar *
```

## Verification Steps
Check the archive contents:
```bash
tar -tvf exo.tar
```

## Common Issues and Solutions

1. **Wrong File Sizes**
   - Use `echo -n` to control exact byte count
   - Verify with: `ls -l`

2. **Symbolic Link Issues**
   - If the link is wrong, remove it: `rm test6`
   - Recreate: `ln -s test0 test6`

3. **Permission Problems**
   - Use `chmod` with octal notation for precision
   - Remember directory vs file permissions behave differently

4. **Archive Issues**
   - Make sure no hidden files are included
   - Use `tar -tvf exo.tar` to verify contents

## Testing Your Solution

1. Create a test directory
2. Copy your exo.tar file there
3. Extract and verify:
```bash
mkdir test_dir
cp exo.tar test_dir/
cd test_dir
tar -xf exo.tar
ls -l
```

4. Compare output with the required format
Remember that the goal is to match the file attributes exactly as specified in the subject. The most common errors come from incorrect permissions or file sizes, so double-check these carefully.
