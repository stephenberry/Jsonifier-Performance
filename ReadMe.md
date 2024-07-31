# Json-Performance
Performance profiling of JSON libraries (Compiled and run on Ubuntu-22.04 using the Clang++18 compiler)

Latest Results: (Jul 31, 2024)
#### Using the following commits:
----
| Jsonifier: [cbc2b47](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47)  
| Glaze: [4887061](https://github.com/stephenberry/glaze/commit/4887061)  
| Simdjson: [ba1819f](https://github.com/simdjson/simdjson/commit/ba1819f)  

 > At least 40 iterations on a 6 core (Intel i7 8700k), until Median Absolute Percentage Error (MAPE) reduced below 5.0%.


### Json Test (Prettified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Json%20Test%20(Prettified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Json%20Test%20(Prettified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1316.88 | 2600941 | 1.97508e+06 | 0.002206 | 1814.83 | 2597351 | 1.43118e+06 | 0.05696 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1133.41 | 2600941 | 2.29479e+06 | 0.05474 | 1692.57 | 2600558 | 1.53646e+06 | 0.04443 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 349.899 | 2600941 | 7.43341e+06 | 0.523 | 

### Json Test (Minified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Json%20Test%20(Minified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Json%20Test%20(Minified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1362.67 | 1768536 | 1.29785e+06 | 0.02911 | 1485.43 | 1764946 | 1.18817e+06 | 0.01223 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 948.37 | 1768536 | 1.86482e+06 | 0.2225 | 1276.3 | 1768153 | 1.38537e+06 | 0.005058 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 241.998 | 1768536 | 7.30805e+06 | 0.02258 | 

### ABC Test (Out of Sequence Performance - Prettified) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test%20(Prettified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test%20(Prettified)_Results.png?raw=true" 
alt="" width="400"/></p>

The JSON documents in the previous tests featured keys ranging from "a" to "z," where each key corresponds to an array of values. Notably, the documents in this test arrange these keys in reverse order, deviating from the typical "a" to "z" arrangement.

This test effectively demonstrates the challenges encountered when utilizing simdjson and iterative parsers that lack the ability to efficiently allocate memory locations through hashing. In cases where the keys are not in the expected sequence, performance is significantly compromised, with the severity escalating as the document size increases.

In contrast, hash-based solutions offer a viable alternative by circumventing these issues and maintaining optimal performance regardless of the JSON document's scale, or ordering of the keys being parsed.

| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1351.18 | 2600941 | 1.92495e+06 | 0.04566 | 1832.79 | 2597351 | 1.41716e+06 | 0.1172 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1144.24 | 2600941 | 2.27307e+06 | 0.1749 | 1705.18 | 2600558 | 1.5251e+06 | 0.03067 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 788.869 | 2600941 | 3.29705e+06 | 0.01131 | 

### ABC Test (Out of Sequence Performance - Minified) [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/JsonData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test%20(Minified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Abc%20Test%20(Minified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1352.75 | 1768536 | 1.30736e+06 | 0.1132 | 1387.1 | 1764946 | 1.2724e+06 | 0.006018 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 942.178 | 1768536 | 1.87707e+06 | 0.06522 | 1255.56 | 1768153 | 1.40826e+06 | 0.04593 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 546.717 | 1768536 | 3.23483e+06 | 0.01861 | 

### Discord Test (Prettified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test%20(Prettified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test%20(Prettified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1810.47 | 138774 | 76650.8 | 0.2717 | 3841.38 | 138774 | 36126.1 | 0.003745 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1136.62 | 138774 | 122093 | 0.01817 | 3202.09 | 138774 | 43338.5 | 0.9265 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 186.068 | 138774 | 745823 | 0.3091 | 

### Discord Test (Minified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test%20(Minified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Discord%20Test%20(Minified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1408.54 | 69037 | 49013.3 | 0.01435 | 2947.58 | 69037 | 23421.6 | 0.07276 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 771.701 | 69037 | 89460.8 | 0.08889 | 2018.83 | 69037 | 34196.5 | 1.614 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 93.4035 | 69037 | 739127 | 0.0416 | 

### Canada Test (Prettified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/CanadaData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Canada%20Test%20(Prettified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Canada%20Test%20(Prettified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1955.33 | 6661897 | 3.40705e+06 | 0.07529 | 2047.15 | 6661897 | 3.25423e+06 | 0.0222 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1561.53 | 6661897 | 4.26626e+06 | 0.01842 | 2035.67 | 6661897 | 3.27257e+06 | 0.06996 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 944.456 | 6661897 | 7.05369e+06 | 0.02798 | 

### Canada Test (Minified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/CanadaData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Canada%20Test%20(Minified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Canada%20Test%20(Minified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1321.02 | 2090234 | 1.58228e+06 | 0.09817 | 796.273 | 2090234 | 2.62502e+06 | 0.6694 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 865.119 | 2090234 | 2.41612e+06 | 0.6434 | 808.141 | 2090234 | 2.58647e+06 | 0.00793 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 321.873 | 2090234 | 6.49397e+06 | 0.6351 | 

### Twitter Test (Prettified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/TwitterData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test%20(Prettified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test%20(Prettified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1628.87 | 722038 | 443275 | 0.07134 | 3289.03 | 722415 | 219644 | 0.04696 |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1394.03 | 722038 | 517949 | 0.04217 | 4329.3 | 722038 | 166779 | 0.03891 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 352.034 | 722038 | 2.05105e+06 | 0.0004221 | 

### Twitter Test (Minified) Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/TwitterData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test%20(Minified)_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Twitter%20Test%20(Minified)_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1724.93 | 478986 | 277684 | 0.618 | 3728.17 | 478986 | 128478 | 0.06976 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1468.4 | 478986 | 326196 | 0.01103 | 3018.98 | 479363 | 158783 | 0.9145 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 227.144 | 478986 | 2.10873e+06 | 0.01483 | 

### Minify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Minify%20Test_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 728.096 | 69037 | 94818.5 | 0.08057 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 721.583 | 69037 | 95674.3 | 0.0835 |
| [simdjson](https://github.com/simdjson/simdjson/commit/ba1819f) | 433.731 | 69037 | 159170 | 0.03604 |

### Prettify Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Minified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Prettify%20Test_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Write (MB/s) | WriteLength (Bytes) | WriteTime (ns) | WriteMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- |
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 2325.36 | 2600941 | 1.11851e+06 | 0.008562 |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 2082.23 | 2600941 | 1.24911e+06 | 0.1114 |

### Validation Test Results [(View the data used in the following test)](https://github.com/RealTimeChris/Json-Performance/blob/main/Json/DiscordData-Prettified.json):

----
<p align="left"><a href="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png" target="_blank"><img src="https://github.com/RealTimeChris/Json-Performance/blob/main/Graphs/Validate%20Test_Results.png?raw=true" 
alt="" width="400"/></p>


| Library | Read (MB/s) | ReadLength (Bytes) | ReadTime (ns) | ReadMape (%) |
| ------------------------------------------------- | ---------- | ----------- | ---------- | ----------- |
| [glaze](https://github.com/stephenberry/glaze/commit/4887061) | 1705.16 | 138774 | 81384.8 | 0.02393 | 
| [jsonifier](https://github.com/RealTimeChris/Jsonifier/commit/cbc2b47) | 1574.72 | 138774 | 88126.2 | 0.06329 | 