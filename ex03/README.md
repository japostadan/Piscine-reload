# 🔍 Exercise 03: find_sh.sh

## 📋 Solution
```bash
find . -type f -name "*.sh" -exec basename {} .sh \;
```

## 💡 Command Breakdown
- `find .`: Search current directory 
- `-type f`: Find files only
- `-name "*.sh"`: Match .sh files
- `-exec basename {} .sh \;`: Remove .sh extension

## 🧪 Verification
```bash
# Create test files
mkdir tets
cd test
touch test.sh test2.sh test.txt
touch script1.sh script2.sh other.txt
./find_sh.sh  # Output: test test2 script1, script2
```

## Key Points
- Recursive search
- Displays filenames without .sh
- No additional tools required
