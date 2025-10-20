#!/bin/bash
find . -type f -name "*.sh" -exec basename -a {} \; | sed 's/\.sh//g'
