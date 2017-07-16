find . -name "*.sh" | egrep -o '[^/]+$' | cut -d . -f 1
