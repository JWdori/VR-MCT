# 인지능력 향상을 위한 햅틱 기반 가상현실 시리어스 게임

노인의 인지능력 향상을 위한 훈련 프로그램을 Haptic Glove와 가상현실 기반의 Serious 게임으로 구현

<img width="792" alt="image" src="https://github.com/JWdori/VR-MCT/assets/42615916/418ec169-7591-4437-bc45-73d9be7da4b5">
**핸드 트래킹** 기술과 **햅틱 글러브**을 기반으로 하고, 각 게임마다 인지 능력과 관련된 주제를 잡았다.

**손 운동, 시각, 촉각, 청각, 기억력/추상력/순발력** 등이 활용되는 게임으로 노인의 인지능력 향상/재활에 도움을 줄 수 있는 훈련 프로그램 구현을 목표로 한다.


개발 게임 엔진은 **Unity**를 사용하였고, 가상현실 HMD는 **Oculus quest 2**, 햅틱 장갑은 **Tack Glove**를 사용하였다.

##### 본 프로젝트의 Build를 위해서는 프로젝트를 clone 받은 이후, SDK과 에셋을 세팅하면 된다. 그에 대한 과정은 아래 기재되었다.  

<br/>

### :orange_book: Contents
0. [Folder Structure](#folder-structure)
1. [Environment Setting](#Environment-Setting)
2. [Used Assets and Purchase Link](#Used-Assets-and-Purchase-Link)
3. [SDK setting - Bhaptics, Oculus](#SDK-setting---Bhaptics,-Oculus)
4. [user manual](#user-manual)
5. [Game1 System Structure](#Game1-System-Structure)
6. [Game2 System Structure](#Game2-System-Structure)
7. [Game3 System Structure](#Game3-System-Structure)
8. [Troubleshooting](#Troubleshooting)
9. [ETC](#etc)

<br/>

-----

### Folder Structure

```
📦Project_NCT       
 ┣ 📂Assets
 ┃ ┣ 📂SMT          
 ┃ ┃ ┣ 📂Animation      // 게임1의 애니메이션 폴더
 ┃ ┃ ┣ 📂Image          // 에셋이 아닌 이미지 파일 모음
 ┃ ┃ ┣ 📂Materials      // 색상 및 재질 파일
 ┃ ┃ ┣ 📂Resources      // 오디오 등의 리소스 파일
 ┃ ┃ ┣ 📂Scenes         // 게임1, 2, 3과 테스트 모드, 메뉴 씬
 ┃ ┃ ┗ 📂Scripts        // 각 씬별 소스코드. 공용 소스코드는 폴더에 정리되어있지 않음.
 ┃ ┃ ┃ ┣ 📂 Game1       // 게임1과 테스트모드1의 스크립트
 ┃ ┃ ┃ ┣ 📂 Game2       // 게임2과 테스트모드2의 스크립트
 ┃ ┃ ┃ ┗ 📂 Game3       // 게임3과 테스트모드3의 스크립트
 ┃ ┣ 📂nonfree
 ┃ ┃ ┗ 📂(Paid assets)etc. // 유료 에셋 보관 자리
 ┃ ┣ 📂(free assets)etc.   // 무료 에셋은 프로젝트에 포함되어 있음
 ┗ 📂.gitignore      // non_free폴더(유료에셋)는 커밋 제외
```

<br/>

### Environment Setting

- 구현 환경
  - OS : Window 11 Pro 64 비
  - CPU : 12th Gen Intel(R) Core(TM) i9-12900K
  - GPU : (NVIDIA GeForce RTX 3090 Ti) X 2
  - Unity version : 2021.3.21f1
  - Oculus XR Plugin version : 3.2.3
  - Oculus Integration version : 53.1
  - bHaptics SDK2 version : 7                             

- 빌드 환경
  - HMD: Oculus(Meta) quest 2 / Oculus(Meta) quest pro
  - Haptic Glove: Tack Glove                              //HMD에서 블루투스 연결
  - Cable: 링크 케이블                                     //저가 케이블 사용시, 빌드에 문제가 있을 수 있음
    <img width="627" alt="image" src="https://github.com/JWdori/VR-MCT/assets/42615916/76261e3d-154f-45c2-b154-e5105eb009b6">

    여기에 run device를 oculus 기기로 선택(싸구려 케이블 사용 시, 안나올 가능성 존재)

    
<br/>

### Used Assets and Purchase Link
*모든 무료 에셋 및 자료는 해당 프로젝트에 포함되어 있다. 유료 에셋의 경우에는 직접 구매해서 import해야 사용이 가능한다.
- **무료**
  - Japanese Garden Pack - https://assetstore.unity.com/packages/3d/vegetation/trees/japanese-garden-pack-179492         *//게임2 배경*
  - Fantasy Skybox FREE - https://assetstore.unity.com/packages/2d/textures-materials/sky/fantasy-skybox-free-18353      *//전체 게임 하늘*
  - Fantasy Forest Environment Free Sample - https://assetstore.unity.com/packages/3d/environments/fantasy/fantasy-forest-environment-free-demo-35361  *//배경*
  - Oculus - https://assetstore.unity.com/packages/tools/integration/oculus-integration-82022               *//필수*
  - Polytope Studio - https://assetstore.unity.com/packages/3d/environments/lowpoly-environment-nature-free-medieval-fantasy-series-187052  *//게임 테리언*
  - etc.
    - 게임 종료 환호 소리 - https://www.youtube.com/watch?v=gv2fprZIkqs&t=1s     *//GameManager 스크립트*
    - 게임3 풍선 터지는 소리 - https://www.youtube.com/watch?v=6Trhh7b00zw        *//풍선 오브젝트*
     <br/>
     
- **유료**
   - Animals Kitz Sound FX - https://assetstore.unity.com/packages/audio/sound-fx/animals/animals-pro-sound-fx-84562#content *//게임2 동물 소리 모음*
   - Animals SFX Collection - https://assetstore.unity.com/packages/audio/sound-fx/animals/animals-sfx-collection-232277#content *//게임2 동물 소리 모음*
   - Outpost - https://assetstore.unity.com/packages/3d/characters/cartoon-animal-pack-super-lowres-9718#content *//게임2 동물 모음*
   - Happy Acoustic Guitar Music Pack -https://assetstore.unity.com/packages/audio/music/pop/happy-acoustic-guitar-music-pack-154670  *//게임 배경음악*
   - BNG Framework - https://assetstore.unity.com/packages/templates/systems/vr-interaction-framework-161066 *//게임3 다트 오브젝트와 핸드 트래킹 스크립트*
   - Balloon FX - https://assetstore.unity.com/packages/vfx/particles/balloon-fx-101797  *//게임3 풍선 오브젝트*


<br/>

### SDK setting - bHaptics, Oculus
- bHaptics sdk와 햅틱 피드백 api는 본 프로젝트에 포함되어 있습니다. 햅틱 피드백을 커스텀하고 싶다면, bHptics [개발자 지원 페이지](https://www.bhaptics.com/support/developers)를 참고
- 오큘러스 SDK는 본 프로젝트에 포함되어 있다. 그러나, 프로젝트를 수정하다보면 SDK를 import해야할 경우가 존재한다.<br/>유니티에서 오큘러스를 HMD 환경에서 앱을 디버그하거나 빌드하기 위해서는 프로젝트를 안드로이드로 설정해야한다. 이를 포함한 세팅 방법은 아래 ***링크***를 참고
  - [유니티 VR 튜토리얼](https://learn.unity.com/course/create-with-vr) - 초반 개발자 세팅
  - [오큘러스 핸드 트래킹 VR 튜토리얼](https://www.youtube.com/watch?v=WELSs-lPJYA) - 핸드 트래킹 및 SDK 데모
  
 
<br/>

### User manual
   <div align="start">
    <table>
      <tr align="center">
        <th>메인 메뉴</th>
        <th>게임 설명 버튼</th>
      </tr>
      <tr>
        <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/65c1cfe7-1161-49b9-9534-0e78b6c040a8"alt="gif-function2" width="370"></td>
        <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/84f9bc6a-c1c8-40fa-9ead-3d5aeab80d87"alt="gif-function3" width="370"></td>
      </tr>
    </table>
  </div>
  원하는 게임을 선택하여 게임을 진행하는 매우 간단한 구조이다.
  <br/>
  게임에 대한 사용자 메뉴얼은, 게임 별로 "게임 설명"버튼으로 구현해 놓았다.
  <br/>
  <br/>
  
  <div align="start">
    <table>
      <tr align="center">
        <th>게임 설명 - 기억력 게임</th>
        <th>게임 설명 - 추상력 게임</th>
        <th>게임 설명 - 다트 게임</th>
      </tr>
      <tr>
        <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/e9e84d0c-9c6c-4f01-ba9c-4e92b07c2413"alt="gif-function2" width="370"></td>
        <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/e2e0b187-9484-4d0b-933e-57f4e8e933ea"alt="gif-function3" width="370"></td>
        <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/71b92713-503f-403e-a66b-1aa59b7b57be"alt="gif-function3" width="370"></td>
      </tr>
    </table>
  </div>
  버튼과 상호작용 할 경우, 위와 같이 게임 진행을 위한 진행 방식, 유의 사항, 방법 등을 알려준다. 특히, 어려움 모드와 테스트 모드의 게임들 중 일부는, 게임에 대한 설명이 꼭 필요하기에, 게임 시작시에 자동으로 게임 설명이 등장하도록 구현되어 있다.


<br/>
<br/>
<br/>


### Game1 System Structure

<div align="start">
  <table>
    <tr align="center">
      <th>쉬움 모드</th>
      <th>어려움 모드</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/51b4457f-946a-49dc-8224-97ef983441d7"alt="gif-function2" width="370"></td>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/d5e27e50-6a50-48b5-8ab4-c2621bf71c4c" width="370"></td>
    </tr>
  </table>
</div>


게임1은 매우 간단한 게임이다. 흔히 알려진 **메모리 게임**의 일종으로, 제시된 순서 혹은 위치, 손 구분 등을 파악하여, 앞에 제시된 큐브를 터치하는 게임이다.
<br/>모든 게임은 공통적으로 정답,오답, 클리어, 실패에 대한 햅틱 피드백을 제공한다

- 어려움 모드에서는 오른손과 왼손을 구분하는 로직이 구현되어있다. 구조는 카메라 프리팹 안에 존재하는, lefthand, righthand를 구분하는 간단한 작업이기에 생략한다.
- 게임에 필요한 큐브 오브젝트는 Make 단계에서 생성된다. 자세한 코드는 <br/> 스크립트에서 확인이 가능하다.
- 난이도 별로 "GameMager.cs"코드가 별도로 구현되어 있다.(쉽게 구현하기 위해...) 해당 사항은 *GameManage 오브젝트* 안에서 확인할 수 있다.

<br/>
<div align="start">
  <table>
    <tr align="center">
      <th>테스트 모드</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/d5a8b42d-640c-4135-bb3f-9742cfe72026"alt="gif-function2" width="370"></td>
    </tr>
  </table>
</div>

테스트 모드에서는 큐브의 모양과 위치, 그리고 손의 색상이 랜덤으로 변화한다.
오른쪽, 왼쪽을 구분하는 손의 색상의 경우, 게임 시작 전에 3초간 보여준다. 그에 따라 왼손, 오른손을 구분하여 클릭해야 한다.
<br/>
양손의 색상의 경우, 착시 현상을 최소화 하기 위해 보색 관계를 활용하였다.
<td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/b424696b-0fd0-4b8e-b420-c2e66a9d27e0"alt="gif-function2" width="200"></td>

<br/>
<br/>
<br/>


### Game2 System Structure
<div align="start">
  <table>
    <tr align="center">
      <th>어려움 모드</th>
      <th>태스트 모드</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/3fca73cc-3528-40d0-95b0-46f5c6663b44" alt="gif-main-page" width="370"></td>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/1fbb6c05-fe09-44dc-a0f2-9cec78236d0b"alt="gif-function1" width="370"></td>
    </tr>
  </table>
</div>

게임2인 추상력 게임의 경우, **공통점 찾기 게임**이라고 볼 수 있다.
게임 방법은 다음과 같다.
1. 랜덤으로 2가지 동물 오브젝트와 울음소리를 보여준다.
2. 버튼 위에 두 동물에 관한 짧은 지문이 나타난다.
3. 공통점을 찾아서 버튼을 클릭.
4. 시간이 오바되거나, 늦으면 게임 종료.

게임1,2는 시각과 청각을 통해 게임을 진행하고, 어려움의 경우에는 해당 동물의 소리만 제공한다.
<br/> 이를 위해 동물이 나무 뒤로 숨겨지는데, 숨겨지는 동물의 위치는 다음과 같다.

<td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/6e15bde4-362f-43d7-96b8-77461f5d4fc5"alt="gif-function2" width="700"></td>

<br/>bHaptic API를 통해 제공하는 햅틱 피드백은 다음과 같다.
<br/>양 손에 이와 같은 피드백을 전달하며, 햅틱 피드백을 통해 시간을 파악할 수 있도록 있다.

<br/>
<div align="start">
  <table>
    <tr align="center">
      <th>햅틱 피드백</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/312f0b43-2dda-46f4-90cb-66c203b9a5da"alt="gif-function2" width="370"></td>
    </tr>
  </table>
</div>

테스트 모드의 경우, 위와 같이 시간을 완전히 햅틱 피드백에만 의존한다.<br/>
**그에 따라 10초의 시간 중, 지정하는 시간에 정답 버튼을 선택하면 클리어하는 구조이다.**
이 외 요소는 보통 난이도의 게임과 동일하다.






<br/>

### Game3 System Structure

<div align="start">
  <table>
    <tr align="center">
      <th>보통 모드</th>
      <th>어려움 모드</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/97cdcb4e-df3a-4099-9754-84910bfba8a0" alt="gif-main-page" width="370"></td>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/ac4bb59a-7ed2-49ef-bfc9-e85510954a2e"alt="gif-function1" width="370"></td>
    </tr>
  </table>
</div>

다트 게임은 이름에서 알 수 있듯이, 손으로 다트를 집어 일직선으로 던져 지정된 풍선을 터트리는 게임이다. 

<br/>여러개의 풍선을 생성하는 로직은 간단하게 **범위 안에 있는지 확인하고, 해당 위치에 이미 풍선이 있으면 다른 위치로 계속해서 풍선의 위치를 찾는 구조이다.**
<br/>

<br/>풍선은 아래의 SPAWN 영역 내에서 랜덤으로 생성된다.
<br/>


![image](https://github.com/JWdori/VR-MCT/assets/42615916/bb9b977b-1ce0-4b9a-ad45-d71970cbdbbe)

테스트 모드는, 어려움 난이도에 속도와 풍선의 크기를 조정하는 코드를 추가하였다.
<br/>
<div align="start">
  <table>
    <tr align="center">
      <th>테스트 모드</th>
    </tr>
    <tr>
      <td><img src="https://github.com/JWdori/VR-MCT/assets/42615916/21fcc863-13bc-4df0-850c-01d22091ddb7"alt="gif-function2" width="370"></td>
    </tr>
  </table>
</div>
<br/>

다트 게임을 구현하면서, 가장 어려웠던 **1) 다트의 모양을 유지하며 날라가는 로직, 2) 다트에 대한 핸드 트래킹** 이 부분이다.
- **다트 throwing 모습 구현 로직**
  1. 다트가 공중에 있는지와 힘이 적용되었는지 확인
  2. 다트가 공중에 있고 힘이 적용되었으며, 이전에도 공중에 있었다면, 회전을 고정하고 원래의 회전으로 유지
  3. 다트가 공중에 있지 않다면, 회전을 제약하지 않고, 현재의 회전을 원래의 회전으로 설정합니다.<br/>
  <br/>
- **다트에 대한 핸드 트래킹**
  - 자세를 pinch 자세로 고정하여, 자연스러운 다트 던짐 모션을 구현하였다.
  - 핸드 트래킹의 경우, BNG Framework에 존재하는 **handtracking.cs** 파일에 코드를 추가하였고, 햅틱을 위한 추가 코드를 넣어두었다.(코드 수정 가능)
  - 햅틱 피드백은, 다트를 잡는 동안, 간단한 진동 울림이 진행되고, 다트를 놓을 경우, 다트를 던지는 햅틱 피드백을 구현하기 위해 **다트를 잡고 있는 두 손가락과 손목에 짧은 진동**을 추가하였다. 


<br/>

<br/>

### Troubleshooting
   1) 빌드 후, 실행시에 사용자 시점이 너무 높아지는 문제가 발생하는 경우, HMD 재시작 요망
   2) VR 튜토리얼 영상과 달리, 특별한 세팅 없이 유니티에서 디버그 시에는 HMD를 써도, 핸드 트래킹이 작동하지 않음. "**메타 XR 시뮬레이터**"를 활용하여 개발하고, 빌드로 테스트 추천. 다만, 시뮬레이터에서 나오는 손과 빌드 이후, 핸드 트래킹용 손은 다를 수 있음(컨트롤러와 핸드 세팅이 각각임)
   ![image](https://github.com/JWdori/VR-MCT/assets/42615916/d1dd934e-3bdb-4fdd-8baa-4a6cf5aad2b0)

   3) 게임3에서 다트가 잘 잡히지 않는 문제가 있다. 정확히는, 다트가 안잡히기 보다는 Tack Glove로 인한 문제로, 장갑이 두꺼워서 핸드 트래킹에 정확도가 떨어지면서 동작 인식이 안되서 발생하는 문제다. 또한, 다트의 경우, 오른손 잡이 대상으로 구현하였다.
   4) 책상 등의 문제가 뚫리는 문제
       - "왜 책상이 손에 뚫리는가?"에 대한 지적을 받았다. 그러나, 여러 타 프로젝트와 게임을 확인해 본 결과, 가구 등의 오브젝트에서 사용자의 컨트럴러의 움직임을 임의로 막는 경우는 없었다. 이에 대해서는 카메라에 비춰지는, 또는 HMD에서 파악되는 컨트롤러의 현재 위치와, 게임에서의 컨트롤러 위치가 비매칭되면서 여러 오류가 발생하기 때문으로 보인다.

<br/>


### ETC
 - **본 프로젝트는 한양대학교 에리카 캠퍼스 컴퓨터학부 가상및증강현실프로그래밍 수업의 IC-PBL 과제입니다. @JWdori @KJH-27 @dongjun0207*
 - **Reference**
    - E. Paul Cherniack (2011) Not just fun and games: applications of virtual reality in the identification and rehabilitation of cognitive disorders of the elderly, Disability and Rehabilitation: Assistive Technology, 6:4, 283-289
    - Anna Cornelia Maria Bauer, Gerda Andringa; The Potential of Immersive Virtual Reality for Cognitive Training in Elderly. Gerontology 2 December 2020; 66 (6): 614–623
    - Sauve, L., Renaud, L., Kaufman, D., Duplaa, E. (2015). Ergonomic Criteria for Creating Online Educational Games for Seniors. In: Sourina, O., Wortley, D., Kim, S. (eds) Subconscious Learning via Games and Social Media. Gaming Media and Social Effects. Springer, Singapore
    - 김민영, 이기석, 최진성, 김현빈 and 박창일. (2005). 가상현실을 이용한 노인의 인지기능 훈련 효과. Annals of Rehabilitation Medicine, 29(4), 424-433
    - 왕중산, 김지성, 김수한.(2009).손동작 운동프로그램이 치매 노인의 인지기능 향상에 미치는 효과.대한물리치료과학회지 ,16(1),21-29.
    - Ghodosi, Mohamad. (2014). The Effect of Mental Imagery Focus of Attention on Performance and Learning of Children Dart Throwing Skill. International Journal of Sport Studies. Vol., 4 (1), 161-167, 2014. 4. 161-167. 
