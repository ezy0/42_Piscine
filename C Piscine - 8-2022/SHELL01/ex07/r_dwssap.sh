#!/bin/bash
cat /etc/passwd | grep -v ^# | sed -n 'n;p' | rev | r
