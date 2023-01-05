#!/usr/bin/env bash

if [[ $1 =~ ^.*\.[ch] ]]; then
  update_date=$(date +"%Y\/%m\/%d %H:%M:%S");
  file=$1
  echo "$file"
  echo "$update_date"
  ext=".tmp"
  sed -i $ext "s/Updated:.*$USER/Updated: $update_date by $USER/" $file
  rm -rf "$file$ext"
  echo "TRUE"
else
  echo "FALSE"
  echo "$1"
fi
