# 🧹 Exercise 02: Clean

## 📋 Exercise Requirements
- **Objective**: Find and delete files ending with `~` or starting/ending with `#`
- **Constraint**: Single command only, no `;` or `&&`

## 🔍 Solution Command
```bash
find . -type f \( -name "*~" -o -name "#*#" \) -print -delete
```

## 💡 Command Breakdown
- `find .`: Search current directory and subdirectories
- `-type f`: Only find files
- `\( -name "*~" -o -name "#*#" \)`: Match files
  - `*~`: Ends with tilde
  - `#*#`: Starts and ends with hash
- -print: Print the matched files
- `-delete`: Remove matched files

## 🧪 Verification
```bash
chmod +x clean
# Create test files
touch test~ test.txt #test#
./clean  # Removes *~ and #*# files
```
