#!/ bin/shell
echo "What is your name?"
read NAME
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do 
touch $NAME$i
done
