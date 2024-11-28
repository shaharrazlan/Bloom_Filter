# 🌟 Bloom Filter Implementation with TDD & Docker and CI/CD 🚀

Welcome to the **Bloom Filter Project**! This repository showcases a robust implementation of a URL filtering system using **C++**, **Test-Driven Development (TDD)**, and **Docker** for streamlined deployment. 🛡️✨

---

## 📚 Table of Contents
- [About the Project](#-about-the-project)
- [Features](#-features)
- [Technologies & Tools](#-technologies--tools)
- [Setup Instructions](#-setup-instructions)
- [Usage](#-usage)
- [How It Works](#-how-it-works)
- [Future Improvements](#-future-improvements)
- [License](#-license)

---

## 🔍 About the Project

The **Bloom Filter** is a probabilistic data structure designed for efficient memory usage, enabling fast membership checks for URLs. This project was built to:
- Protect users from blacklisted websites. 🛑
- Demonstrate **Red-Green-Refactor** methodology in TDD. ✅
- Showcase deployment via **DockerHub**. 🐳

---

## 🌟 Features

- **Memory-Efficient Filtering**: Leveraging Bloom filters to minimize storage needs.
- **False-Positive Handling**: Secondary checks against the actual blacklist. 🔍
- **Modular Design**: Easily extendable with additional hash functions or configurations.
- **Automated Testing**: Implemented with Google Test for reliable performance. 📊
- **Dockerized Deployment**: Runs seamlessly across environments. ⚙️

---

## 🛠️ Technologies & Tools

- **Programming Language**: C++ 🖥️
- **Testing Framework**: Google Test 🧪
- **Build System**: CMake 🛠️
- **Containerization**: Docker 🐳
- **Version Control**: GitHub 🗂️
- **CI/CD Integration**: GitHub Actions 🤖

---

## ⚙️ Setup Instructions

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/bloom-filter.git
   cd bloom-filter
   ```

2. Install dependencies:
   ```bash
   sudo apt-get update
   sudo apt-get install libgtest-dev cmake
   ```

3. Build the project:
   ```bash
   cmake -B build -S .
   cmake --build build
   ```

4. Run tests:
   ```bash
   ctest --test-dir build --output-on-failure
   ```

5. Deploy with Docker:
   ```bash
   docker build -t bloom-filter .
   docker run bloom-filter
   ```

---

## 🚀 Usage

### **Adding URLs to the Filter**
Use the input format `1 [URL]` to add a URL to the blacklist:
```bash
1 www.example.com
```

### **Checking URLs**
Use the input format `2 [URL]` to verify if a URL is blacklisted:
```bash
2 www.example.com
```

---

## 🧩 How It Works

1. **Hash Functions**: URLs are hashed using multiple hash functions to determine bit positions.
2. **Bit Array**: These positions in a fixed-size bit array are set to `1` for added URLs.
3. **False Positives**: Bloom filters may classify a URL as blacklisted erroneously but never fail to identify a genuinely blacklisted URL.

---

## 🔮 Future Improvements

- Expand support for additional hash functions. 🛠️
- Optimize performance for large datasets. ⚡
- Improve false-positive handling through configurable bit array sizes.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to contribute, report issues, or reach out for collaboration opportunities! 🌟
```

Let me know if you'd like any section customized further! 😊
