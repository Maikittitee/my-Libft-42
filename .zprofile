#programing C
alias gc='(){
	(echo "\n+++++++++++++++++++++++++++++++++++++\nCompiling $1\n--------------------------------------"; gcc -Wall -Werror -Wextra $1) && \
	(echo "\n+++++++++++++++++++++++++++++++++++++\nRunning a.out\n--------------------------------------"; ./a.out); }'

#remove a.out
alias rma='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\n Deleting a.out for $1\n--------------------------------------"; find . -d -name "a.out" -print -delete);}'

#git add && git commit -m "S1" && git push
alias gitup='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit add $1\n--------------------------------------"; git add $1) && \
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit commit -m "$2"\n--------------------------------------"; git commit -m "$2") && \
	(echo "\n++++++++++++++++++++++++++++++++++++++\ngit push\n--------------------------------------"; git push);}'

alias grademe='{ bash libft-war-machine/grademe.sh;}'

alias grade='(){ echo "bash libft-war-machine/grademe.sh $1\n" ;bash libft-war-machine/grademe.sh $1;}'
