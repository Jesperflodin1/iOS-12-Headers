#!/bin/sh
dyldCache="$1"

rm -f dump_headers.sh
echo "#!/bin/sh \n\n" > dump_headers.sh
echo "echo \"Run this on an ios device with classdump-dyld installed\"\n" >> dump_headers.sh
echo "rm -rf /var/root/classdump\n" >> dump_headers.sh

jtool2 -l $dyldCache | cut -c 25- | tail +2 | grep / | awk '{print $1; }' | while read line
do 
	line="$line"
 	
 	echo "echo \"Trying to process: $line \"" >> dump_headers.sh
 	echo "classdump-dyld -b -h -o /var/root/classdump $line" >> dump_headers.sh

done

echo "cd /var/root/classdump/usr\n" >> dump_headers.sh
echo "find . -name \"*.dylib\" -exec bash -c 'mv \"\$1\" \"\${1%.dylib}\"' - '{}' \\;" >> dump_headers.sh