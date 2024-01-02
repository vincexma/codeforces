for orig in $(ls .)
do
	naked=${orig%.*}
	new=${naked}${2}
	if [ ${orig} != "${naked}${1}" ]; then
		continue
	fi
	echo "mv ${orig} ${new}"
done
