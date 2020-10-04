#! /bin/bash

version=`${1} -v 2>&1 > /dev/null`
`${1} test.c`
result=`./a.out`
echo "# ${1}

\`\`\`sh
$ ${1} -v
${version}
$ ./a.out
${result}
\`\`\`"
