# ESP32-S3-Audio-Test

该项目是基于ESP32-S3的语言识别验证板测试程序

验证板使用 [立创EDA](https://lceda.cn/) 绘制

目前只测试了ESP-IDF 5.0版本

测试视频 [测试视频](https://oshwhub.com/attachments/2023/11/JdvqdwuP8ncqcF0woqnOiNfN69BlSjUTDFOELuhI.mp4)

---

## 准备工作

### 硬件准备

语音识别验证版 [立创开源平台](https://oshwhub.com/monoliths/esp32-s3-based-language-recognition-verification-board))

#### 默认IO

|引脚|元器件|备注|
|--|--|--|
|14|LED|唤醒词指示|
|21|LED|none|
|47|LED|none|
|13|WS2812|RGB|
|2|MSM261S4030H0R|SD|
|41|MSM261S4030H0R|SCK|
|42|MSM261S4030H0R|WS|

### 软件准备

#### 获取ESP-IDF

ESP-WHO 的运行基于 [ESP-IDF release/v5.0](https://github.com/espressif/esp-idf/tree/release/v5.0)。关于获取 ESP-IDF 的细节，请参考 ESP-IDF 编程指南。 如果你使用 ESP-IDF release/v4.4, 请切换到esp-who的idfv4.4分支

#### ESP-WHO

参考 [获取ESP-WHO](https://github.com/espressif/esp-who/blob/master/README_CN.md#%E8%8E%B7%E5%8F%96-esp-who)

### 运行测试代码

#### 步骤1：进入 `esp-who/examples` 目录

```sh
git clone https://github.com/Diam2023/ESP32-S3-Audio-Test.git
```

#### 步骤2：进入项目目录

```sh
cd ESP32-S3-Audio-Test
```

#### 步骤3：设置目标芯片

```sh
idf.py set-target esp32s3
```

#### 步骤4：运行和监视

```sh
idf.py flash monitor
```
