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
//입력후 다시 git add 그 다음 git push origin main(어디는 master로 하라하고 어디는 main으로 하라하는데 나는 main으로 해야만 커밋이 된다)
//이유가 뭘까?

//second commit 시도 재도전
//git push origin main으로 세번째 도전

//git push 할때 master vs main
//이유는 내 repository가 main이 default로 되어 있는데 master로 푸시를 했기때문에 안됐던 것
//그래서 네번째 푸시는 바로 main으로 도전

//네번째 푸시 바로 성공
<<<<<<< HEAD
//다섯번째 도전은 새로운 brach를 생성해서 거기에 푸쉬
=======
//다섯번째 도전은 새로운 brach를 생성해서 거기에 푸쉬
//branch를 여러개 쓰는 이유는 팀원들이 각자의 브랜치에서 동시에 작업을 하기 위함

//다섯번째 시도에서 git branch master2
//git checkout master2
//이후에 푸쉬로 master2 브랜치에만 커밋 성공했다

//여섯번째 도전은 master2의 커밋을 default branch인 main에 merge 하는 것
//다시 main 브랜치로 돌아간후 = git checkout main
//git branch -D master2

//main 브랜치로 돌아오는도중 error: Your local changes to the following files would be overwritten by checkout: 가 발생
//이동하기 전 작업하고 있던 브랜치에 변경사항을 제대로 커밋하지 않아 발생하는 오류이다
//해결 방법은 해당 브랜치를 commit 하거나 stash(임시저장)한다.
>>>>>>> master1
