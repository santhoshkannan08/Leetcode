// Last updated: 12/18/2025, 12:24:41 AM
1class Solution {
2    public boolean isValid(String s) {
3        Deque <Character> Stack=new ArrayDeque<>();
4        for(char a:s.toCharArray()){
5            if(a=='('|| a=='{'||a=='['){
6                Stack.push(a);
7            }
8            else{
9                if(Stack.isEmpty()) return false;
10                char top=Stack.pop();
11                if(a==')'&& top!='('|| 
12                    a=='}'&& top!='{'||
13                    a==']'&& top!='[') {
14                        return false;
15                    }
16            }
17        } return (Stack.isEmpty());
18    }
19}