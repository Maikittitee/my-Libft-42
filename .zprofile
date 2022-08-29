#programing C
alias gwa='(){
	(echo "\n+++++++++++++++++++++++++++++++++++++\nCompiling $1\n--------------------------------------"; gcc -Wall -Werror -Wextra $1) && \
	(echo "\n+++++++++++++++++++++++++++++++++++++\nRunning a.out\n--------------------------------------"; ./a.out); }'

#remove a.out
alias rma='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\n Deleting a.out for $1\n--------------------------------------"; find . -d -name "a.out" -print -delete);}'

#git add && git commit -m "S1" && git push
alias gitup='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit add $1\n--------------------------------------"; git add $1) && \
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit commit -m "$2 by alias"\n--------------------------------------"; git commit -m "$2 by alias") && \
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit push\n--------------------------------------"; git push);}'

#Run libft-war-machine Tester
alias grademe='(){ bash libft-war-machine/grademe.sh $1 $2 $3 $4;}'

#alias grade='(){ echo "bash libft-war-machine/grademe.sh $1\n" ;bash libft-war-machine/grademe.sh $1 $2 $3 $4 $5;}'



