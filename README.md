# VR-MCT(Virtual Reality Multimodal Cognitive Training)

### 인지능력 향상을 위한 햅틱 기반 가상현실 시리어스 게임

노인의 인지능력 향상을 위한 훈련 프로그램을 Haptic Glove와 가상현실 기반의 Serious 게임으로 구현

![그림1111](https://github.com/JWdori/VR-MCT/assets/42615916/3ebbaea7-b955-4553-89d7-2ab7e0226a5c)
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
4. [Game1 System Structure](#Game1-System-Structure)
5. [Game2 System Structure](#Game2-System-Structure)
6. [Game3 System Structure](#Game3-System-Structure)
7. [Troubleshooting](#Troubleshooting)
8. [ETC](#etc)

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
 ┃ ┃ ┗ 📂Scripts        // 각 씬별 스크립트. 공용 스크립트는 폴더에 정리되어있지 않음.
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
- **유료**
   - Animals Kitz Sound FX - https://assetstore.unity.com/packages/audio/sound-fx/animals/animals-pro-sound-fx-84562#content *//게임2 동물 소리 모음*
   - Animals SFX Collection - https://assetstore.unity.com/packages/audio/sound-fx/animals/animals-sfx-collection-232277#content *//게임2 동물 소리 모음*
   - Outpost - https://assetstore.unity.com/packages/3d/characters/cartoon-animal-pack-super-lowres-9718#content *//게임2 동물 모음*
   - Happy Acoustic Guitar Music Pack -https://assetstore.unity.com/packages/audio/music/pop/happy-acoustic-guitar-music-pack-154670  *//게임 배경음악*
   - BNG Framework - https://assetstore.unity.com/packages/templates/systems/vr-interaction-framework-161066 *//게임3 다트 오브젝트와 핸드 트래킹 스크립트*
   - Balloon FX - https://assetstore.unity.com/packages/vfx/particles/balloon-fx-101797  *//게임3 풍선 오브젝트*


<br/>

### SDK setting - Bhaptics, Oculus


<br/>

### Game2 System Structure

<br/>

### Game3 System Structure



<br/>

### Troubleshooting
#### 1) 갑자기 사용자 시점이 너무 높아지는 문제 발생 시, HMD 재시작 요망 - HMD Trouble

<br/>


### ETC
 - **본 프로젝트는 한양대학교 에리카 캠퍼스 컴퓨터학부 가상및증강현실프로그래밍 수업의 IC-PBL 과제입니다. @JWdori @KJH-27 @dongjun0207*
 - 
 - **Reference**
    - E. Paul Cherniack (2011) Not just fun and games: applications of virtual reality in the identification and rehabilitation of cognitive disorders of the elderly, Disability and Rehabilitation: Assistive Technology, 6:4, 283-289
    - Anna Cornelia Maria Bauer, Gerda Andringa; The Potential of Immersive Virtual Reality for Cognitive Training in Elderly. Gerontology 2 December 2020; 66 (6): 614–623
    - Sauve, L., Renaud, L., Kaufman, D., Duplaa, E. (2015). Ergonomic Criteria for Creating Online Educational Games for Seniors. In: Sourina, O., Wortley, D., Kim, S. (eds) Subconscious Learning via Games and Social Media. Gaming Media and Social Effects. Springer, Singapore
    - 김민영, 이기석, 최진성, 김현빈 and 박창일. (2005). 가상현실을 이용한 노인의 인지기능 훈련 효과. Annals of Rehabilitation Medicine, 29(4), 424-433
    - 왕중산, 김지성, 김수한.(2009).손동작 운동프로그램이 치매 노인의 인지기능 향상에 미치는 효과.대한물리치료과학회지 ,16(1),21-29.
    - Ghodosi, Mohamad. (2014). The Effect of Mental Imagery Focus of Attention on Performance and Learning of Children Dart Throwing Skill. International Journal of Sport Studies. Vol., 4 (1), 161-167, 2014. 4. 161-167. 
