# Json-Performance
Performance profiling of JSON libraries (Compiled and run on Ubuntu-22.04 using the Clang++18 compiler)

Latest Results: (Dec 18, 2023)

### Discord Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test_Results.png?raw=true" 
alt="DiscordCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 1.70276 |
| [glaze](https://github.com/stephenberry/glaze) | 81.0234 | 29.3321 |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 202.254 | 46.4352 |
> 1 iterations on a 6 core (Intel i7 8700k)

### Twitter Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/twitter.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test_Results.png?raw=true" 
alt="TwitterCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [glaze](https://github.com/stephenberry/glaze) | 190.85 | 68.4027 |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 285.173 | 68.4338 |
> 1 iterations on a 6 core (Intel i7 8700k)

### Single Iteration Test Results [(View the data used in the following tests)](https://github.com/RealTimeChris/Json-Performance/blob/main/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Single%20Test_Results.png?raw=true" 
alt="SingleCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 9.10822 |
| [glaze](https://github.com/stephenberry/glaze) | 102.854 | 27.5514 |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 78.563 | 52.636 |

### Multi Iteration Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Multi%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 9.64766 |
| [glaze](https://github.com/stephenberry/glaze) | 118.98 | 31.6371 |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 150.788 | 56.5983 |
> 1 iterations on a 6 core (Intel i7 8700k)

### ABC Test (Out of Sequence Performance) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/JsonData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test_Results.png?raw=true" 
alt="AbcCoreAPI WebSite" width="400"/></p>

The JSON documents in the previous tests featured keys ranging from "a" to "z," where each key corresponds to an array of values. Notably, the documents in this test arrange these keys in reverse order, deviating from the typical "a" to "z" arrangement.

This test effectively demonstrates the challenges encountered when utilizing simdjson and iterative parsers that lack the ability to efficiently allocate memory locations through hashing. In cases where the keys are not in the expected sequence, performance is significantly compromised, with the severity escalating as the document size increases.

In contrast, hash-based solutions offer a viable alternative by circumventing these issues and maintaining optimal performance regardless of the JSON document's scale, or ordering of the keys being parsed.

| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [simdjson](https://github.com/simdjson/simdjson) | N/A | 2.76186 |
| [glaze](https://github.com/stephenberry/glaze) | 119.596 | 32.3759 |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 149.545 | 58.7265 |
> 1 iterations on a 6 core (Intel i7 8700k)

### Minify Test Results [(View the data used in the following tests)](https://github.com/RealTimeChris/Json-Performance/blob/main/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png?raw=true" 
alt="MinifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [simdjson](https://github.com/simdjson/simdjson) | 11.9544 | N/A |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 126.421 | N/A |
> 1 iterations on a 6 core (Intel i7 8700k)

### Prettify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png?raw=true" 
alt="PrettifyCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | 76.0105 | N/A |
> 1 iterations on a 6 core (Intel i7 8700k)

### Validation Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/DiscordData.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png?raw=true" 
alt="ValidateCoreAPI WebSite" width="400"/></p>


| Library | Write (MB/s) | Read (MB/s) |
| ------------------------------------------------- | ---------- | ----------- |
| [jsonifier](https://github.com/realtimechris/jsonifier) | N/A | 109.444 |
> 1 iterations on a 6 core (Intel i7 8700k)