# Json-Performance
Performance profiling of JSON libraries (Compiled and run on Ubuntu-22.04 using the Clang++18 compiler)

Latest Results: (Dec 22, 2023)

### Discord Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png?raw=true" 
alt="DiscordCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1707.03 | 2070.97 |
| [glaze](https://github.com/stephenberry/glaze) | 1180.29 | 2018.48 |
| [simdjson](https://github.com/simdjson/simdjson) | 227.806 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### Twitter Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/twitter.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png?raw=true" 
alt="TwitterCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1682.69 | 2902.14 |
| [simdjson](https://github.com/simdjson/simdjson) | 1429.09 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### Single Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png?raw=true" 
alt="SingleCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 594.125 | 1017.09 |
| [glaze](https://github.com/stephenberry/glaze) | 592.64 | 944.984 |
| [simdjson](https://github.com/simdjson/simdjson) | 585.209 | N/A |

### Multi Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 932.832 | 1181.32 |
| [glaze](https://github.com/stephenberry/glaze) | 898.418 | 1159.13 |
| [simdjson](https://github.com/simdjson/simdjson) | 610.392 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### ABC Test (Out of Sequence Performance) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png?raw=true" 
alt="AbcCoreAPI WebSite" width="400"/></p>

The JSON documents in the previous tests featured keys ranging from "a" to "z," where each key corresponds to an array of values. Notably, the documents in this test arrange these keys in reverse order, deviating from the typical "a" to "z" arrangement.

This test effectively demonstrates the challenges encountered when utilizing simdjson and iterative parsers that lack the ability to efficiently allocate memory locations through hashing. In cases where the keys are not in the expected sequence, performance is significantly compromised, with the severity escalating as the document size increases.

In contrast, hash-based solutions offer a viable alternative by circumventing these issues and maintaining optimal performance regardless of the JSON document's scale, or ordering of the keys being parsed.

| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 935.658 | 1184.46 |
| [glaze](https://github.com/stephenberry/glaze) | 897.559 | 1159.43 |
| [simdjson](https://github.com/simdjson/simdjson) | 260.219 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### Minify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 1689.5 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 977.67 |
> 200 iterations on a 6 core (Intel i7 8700k)

### Prettify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png?raw=true" 
alt="PrettifyCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 924.033 |
| [glaze](https://github.com/stephenberry/glaze) | N/A | 281.664 |
> 200 iterations on a 6 core (Intel i7 8700k)

### Validation Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png?raw=true" 
alt="ValidateCoreAPI WebSite" width="400"/></p>


| Library | Read (MB/s) | Write (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1231.56 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)