factorial () {
  if [ $1 -eq 0 ]; then
    echo 1
  else
    local temp=$(($1 - 1))
    local result=$(factorial $temp)
    result=$(($result * $1))
    echo $result
  fi
}

read -p "Enter a number: " num
factorial_result=$(factorial $num)
echo "The factorial of $num is $factorial_result"