# Json-Performance
Performance profiling of JSON libraries (Compiled and run on Ubuntu-22.04 using the Clang++18 compiler)

Latest Results: (Dec 27, 2023)

### Single Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png?raw=true" 
alt="SingleCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 857.534 | 1053.52 |
| [simdjson](https://github.com/simdjson/simdjson) | 805.063 | N/A |
| [glaze](https://github.com/stephenberry/glaze) | 717.433 | 1004.19 |

### Multi Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1334.96 | 1207.18 |
| [glaze](https://github.com/stephenberry/glaze) | 1072.26 | 1133.92 |
| [simdjson](https://github.com/simdjson/simdjson) | 893.266 | N/A |
> 400 iterations on a 6 core (Intel i7 8700k)

### ABC Test (Out of Sequence Performance) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png?raw=true" 
alt="AbcCoreAPI WebSite" width="400"/></p>

The JSON documents in the previous tests featured keys ranging from "a" to "z," where each key corresponds to an array of values. Notably, the documents in this test arrange these keys in reverse order, deviating from the typical "a" to "z" arrangement.

This test effectively demonstrates the challenges encountered when utilizing simdjson and iterative parsers that lack the ability to efficiently allocate memory locations through hashing. In cases where the keys are not in the expected sequence, performance is significantly compromised, with the severity escalating as the document size increases.

In contrast, hash-based solutions offer a viable alternative by circumventing these issues and maintaining optimal performance regardless of the JSON document's scale, or ordering of the keys being parsed.

| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1330.35 | 1206.17 |
| [glaze](https://github.com/stephenberry/glaze) | 1070.85 | 1133.36 |
| [simdjson](https://github.com/simdjson/simdjson) | 395.197 | N/A |
> 400 iterations on a 6 core (Intel i7 8700k)

### Discord Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png?raw=true" 
alt="DiscordCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1929.59 | 2013.29 |
| [glaze](https://github.com/stephenberry/glaze) | 1247.18 | 1994.84 |
| [simdjson](https://github.com/simdjson/simdjson) | 243.564 | N/A |
> 400 iterations on a 6 core (Intel i7 8700k)

### Twitter Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/twitter.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png?raw=true" 
alt="TwitterCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1759.58 | 2851.4 |
| [simdjson](https://github.com/simdjson/simdjson) | 1248.05 | N/A |
| [glaze](https://github.com/stephenberry/glaze) | 1222.44 | 2656.35 |
> 400 iterations on a 6 core (Intel i7 8700k)

### Minify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 1850.03 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 1079.34 |
> 400 iterations on a 6 core (Intel i7 8700k)

### Prettify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png?raw=true" 
alt="PrettifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 876.902 |
| [glaze](https://github.com/stephenberry/glaze) | N/A | 261.813 |
> 400 iterations on a 6 core (Intel i7 8700k)

### Validation Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png?raw=true" 
alt="ValidateCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1277.79 | N/A |
> 400 iterations on a 6 core (Intel i7 8700k)