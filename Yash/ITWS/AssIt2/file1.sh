du -sh * |sort -h
//first one to be changed






  find -P . -type f | rev | cut -d/ -f2- | rev | \
      cut -d/ -f1-2 | cut -d/ -f2- | sort | uniq -c|sort -n

to list all users 
cut -d:-f1/etc/passwd
