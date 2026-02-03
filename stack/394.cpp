   else if (ch == ']') {
            int repeat = countStack.top();
            countStack.pop();

            string prev = stringStack.top();
            stringStack.pop();

            string temp = "";
            while (repeat--) {
                temp += curr;
            }

            curr = prev + temp;
        }
        else {
            curr += ch;
        }
    }
    return curr;
