grep -v '^#' /etc/passwd | awk 'NR % 2 == 0' | cut -d: -f1 | sed -n "${FT_LINE1},${FT_LINE2}p" | rev | sort -r | paste -sd ", " - | sed 's/$/./'
