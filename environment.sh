ROOTPROJECTDIR="$(pwd)"
SRCPROJECTDIR="${ROOTPROJECTDIR}/src"
alias groot='cd $ROOTPROJECTDIR'
alias gsrc='cd $SRCPROJECTDIR'

echo -e -n "\n--\nIn the current session, you can now use the following:\n"
echo -e -n "groot - go back to the root project directory\n"
echo -e -n "gsrc - go to the src directory of the project\n"
