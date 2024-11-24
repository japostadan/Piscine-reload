🌐 Exercise 04: MAC.sh
📋 Solution

``` Shell
ifconfig | grep "ether" | cut -d " " -f 2
```

💡 Command Breakdown

ifconfig: Lists network interfaces
grep "ether": Filters lines with MAC addresses
cut -d " " -f 2: Extracts MAC address

``` Shell
ip link show | grep "link/ether" | awk '{print $2}'
```
