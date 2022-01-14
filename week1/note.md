# object-oriented-data-structure-cpp
<1.2 C++ classes> (22-1-11)

-   헤더에 보통 class 가 들어가게 되는구나
  - h. defines the interface to the class , (all member variables, all member functions)
-  c++ 은 implementation file 로 지칭하며 class 를 가져오게끔 되는구나 or 다른 코드들

-  main()안에 class 가 define이 되어야 class를 가져올수잇구나



<1.3 Standard libraray organization>

- std namespace 
  - 예를 들어 using std::cout 을 선언하였다면 그 아래 cout을 할때 std할 필요는없다. 
  - private에 쓰인 variable은 <u>같은 클래스내</u>에서 쓰인( class 밖에서 접근할수없어) 다른 함수들이 공유 할 수 있구나 .
  - void 로 시작하는 함수는 return이 없다. double int 같이 수형태를 선언해주는것은 return!.
  - namespace로 사용하는것은 class 앞에 붙을수도있으며 uiuc(name)::Cube a 같이 클래스의 고유 네임 지정가능
  - 함수를 불러올때는 . 을 사용하고 ex) a.getvolume()
  - class 가 끝날때는 ; 붙여줘

