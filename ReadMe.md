# Json-Performance
Performance profiling of JSON libraries (Compiled and run on Ubuntu-22.04 using the Clang++18 compiler)

Latest Results: (Dec 22, 2023)

### Discord Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png?raw=true" 
alt="DiscordCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 2085.66 | 1691.67 |
| [glaze](https://github.com/stephenberry/glaze) | 2023.83 | 1207.67 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 229.371 |
> 200 iterations on a 6 core (Intel i7 8700k)

### Twitter Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/twitter.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png?raw=true" 
alt="TwitterCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 2841.46 | 1622.6 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 1426.51 |
| [glaze](https://github.com/stephenberry/glaze) | 2721.36 | 1291.44 |
> 200 iterations on a 6 core (Intel i7 8700k)

### Single Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png?raw=true" 
alt="SingleCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1087.57 | 566.926 |
| [glaze](https://github.com/stephenberry/glaze) | 1056.01 | 549.526 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 498.187 |

### Multi Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1221.35 | 907.633 |
| [glaze](https://github.com/stephenberry/glaze) | 1211.59 | 876.854 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 600.166 |
> 200 iterations on a 6 core (Intel i7 8700k)

### ABC Test (Out of Sequence Performance) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png?raw=true" 
alt="AbcCoreAPI WebSite" width="400"/></p>

The JSON documents in the previous tests featured keys ranging from "a" to "z," where each key corresponds to an array of values. Notably, the documents in this test arrange these keys in reverse order, deviating from the typical "a" to "z" arrangement.

This test effectively demonstrates the challenges encountered when utilizing simdjson and iterative parsers that lack the ability to efficiently allocate memory locations through hashing. In cases where the keys are not in the expected sequence, performance is significantly compromised, with the severity escalating as the document size increases.

In contrast, hash-based solutions offer a viable alternative by circumventing these issues and maintaining optimal performance regardless of the JSON document's scale, or ordering of the keys being parsed.

| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1199.09 | 912.375 |
| [glaze](https://github.com/stephenberry/glaze) | 1196.27 | 877.442 |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 250.897 |
> 200 iterations on a 6 core (Intel i7 8700k)

### Minify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 1800.77 | N/A |
| [simdjson](https://github.com/simdjson/simdjson) | 980.583 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### Prettify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png?raw=true" 
alt="PrettifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 925.069 | N/A |
| [glaze](https://github.com/stephenberry/glaze) | 277.76 | N/A |
> 200 iterations on a 6 core (Intel i7 8700k)

### Validation Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png?raw=true" 
alt="ValidateCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 1181.5 |
> 200 iterations on a 6 core (Intel i7 8700k)