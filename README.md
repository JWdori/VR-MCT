# VR-MCT(Virtual Reality Multimodal Cognitive Training)

### 인지능력 향상을 위한 햅틱 기반 가상현실 시리어스 게임

노인의 인지능력 향상을 위한 훈련 프로그램을 Haptic Glove와 가상현실 기반의 Serious 게임으로 구현

![그림1111](https://github.com/JWdori/VR-MCT/assets/42615916/3ebbaea7-b955-4553-89d7-2ab7e0226a5c)

핸드 트래킹 기술과 햅틱 장갑을 기반으로 하고, 각 게임마다 인지 능력과 관련된 주제를 잡았다. 

**손 운동, 시각, 촉각, 청각, 기억력/추상력/순발력** 등이 활용되는 게임으로 노인의 인지능력 향상/재활에 도움을 줄 수 있는 훈련 프로그램 구현을 목표로 한다.

개발 게임 엔진은 **Unity**를 사용하였고, 가상현실 HMD는 **Oculus quest 2**, 햅틱 장갑은 **Tack Glove**를 사용하였다.



##### 본 프로젝트의 Build를 위해서는 프로젝트를 clone 받은 이후, SDK(필수)와 에셋(필수/선택)을 세팅하면 된다. 그에 대한 과정은 아래 기재되었다.  

<br/>

### Contents
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
  - bHaptics SDK2 version : 7                             // 버전 상관 없음

- 빌드 환경
  - HMD: Oculus(Meta) quest 2 / Oculus(Meta) quest pro
  - Haptic Glove: Tack Glove                              // HMD에서 블루투스 연결
  - Cable: 링크 케이블                                     // 저가 케이블 사용시, 빌드에 문제가 있을 수 있음
    
<br/>

### Used Assets and Purchase Link


<br/>

### SDK setting - Bhaptics, Oculus


<br/>

### Game2 System Structure

<br/>

### Game3 System Structure



<br/>

### Troubleshooting



<br/>


### ETC

#### 
