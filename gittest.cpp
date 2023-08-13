//깃 커밋 테스트
//vscode 터미널에 bash로 들어가서
//첫 커밋에 git init
//git add .
//git에 add . 을 하면 전부 올린다는 것
//git 에 gittest.cpp만 올리고 싶다면 git add gittest.cpp 를 사용
//conflict 방지로 하나하나 올리는게 낫다고 함
//git status 로 상태를 알수 있다. 
//git commit -m "first commit" 으로 히스토리를 만들어준다 
//만든 히스토리를  github에 보내기 위해 remote add origin을 사용
//ex) git remote add origin https://github.com/sguki/myfirstgit.git
//이제 git hub와 내 vscode의 연결고리가 생김
//git push origin master로 코드를 마스터 브랜치로 보낸다

//첫 커밋에 git push origin master 이후 에러 발생
//에러 원인: 로컬에 readme 파일이 없는데 원격 저장소에만 있을때 생긴다
//해결 방법 :git pull origin main
//입력후 다시 git add