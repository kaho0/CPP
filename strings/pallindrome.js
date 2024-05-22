function isPalindrome(str) {
    let st = 0;
    let end = str.length - 1;
    while (st < end) {
        if (str[st++] !== str[end--]) {
            alert("Not a valid palindrome");
            return false;
        }
    }
    alert("Valid palindrome");
    return true;
}

function main() {
    let word = prompt("Enter a word: ");
    isPalindrome(word);
}

main();