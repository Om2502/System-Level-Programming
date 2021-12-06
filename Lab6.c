#/bin/hash

echo "Try to find out some errors!!!"

echo "The regex ^[^a]*ce can match the string(s): " > Result

grep '^[^a]*ce$' -q << END

Result

lance

ace

brace

decide

piece

END

ls $0 Result

echo "the result has been sent to ${1}@student.gsu.edu"

echo "Congratulations! You have corrected all the errors!"

#If you want anything else please do a comment.