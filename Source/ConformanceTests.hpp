#include <jsonifier/Index.hpp>
#include <filesystem>
#include <fstream>

struct failTest01 {
	std::string failTestString{};
};

template<> struct jsonifier::core<failTest01> {
	using value_type = failTest01;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestString);
};

struct failTest02 {
	std::vector<std::string> testVal{};
};

template<> struct jsonifier::core<failTest02> {
	using value_type = failTest02;
	static constexpr auto parseValue = createScalarValue(&value_type::testVal);
};

struct failTest03 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest03> {
	using value_type = failTest03;
	static constexpr auto parseValue = createValue("unquoted_key", &value_type::failTestVal);
};

struct failTest04 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest04> {
	using value_type = failTest04;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest05 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest05> {
	using value_type = failTest05;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest06 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest06> {
	using value_type = failTest06;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest07 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest07> {
	using value_type = failTest07;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest08 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest08> {
	using value_type = failTest08;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest09 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest09> {
	using value_type = failTest09;
	static constexpr auto parseValue = createValue("extra comma", &value_type::failTestVal);
};

struct failTest10 {
	bool failTestVal{};
};

template<> struct jsonifier::core<failTest10> {
	using value_type = failTest10;
	static constexpr auto parseValue = createValue("Extra value after close", &value_type::failTestVal);
};

struct failTest11 {
	int32_t failTestVal{};
};

template<> struct jsonifier::core<failTest11> {
	using value_type = failTest11;
	static constexpr auto parseValue = createValue("Illegal expression", &value_type::failTestVal);
};

struct failTest12 {
	int32_t failTestVal{};
};

template<> struct jsonifier::core<failTest12> {
	using value_type = failTest12;
	static constexpr auto parseValue = createValue("Illegal invocation", &value_type::failTestVal);
};

struct failTest13 {
	int32_t failTestVal{};
};

template<> struct jsonifier::core<failTest13> {
	using value_type = failTest13;
	static constexpr auto parseValue = createValue("Illegal invocation", &value_type::failTestVal);
};

struct failTest14 {
	int32_t failTestVal{};
};

template<> struct jsonifier::core<failTest14> {
	using value_type = failTest14;
	static constexpr auto parseValue = createValue("Numbers cannot have leading zeroes", &value_type::failTestVal);
};

struct failTest15 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest15> {
	using value_type = failTest15;
	static constexpr auto parseValue = createValue("Numbers cannot be hex", &value_type::failTestVal);
};

struct failTest16 {
	std::vector<int32_t> failTestVal{};
};

template<> struct jsonifier::core<failTest16> {
	using value_type = failTest16;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest17 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest17> {
	using value_type = failTest17;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest18 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest18> {
	using value_type = failTest18;
	static constexpr auto parseValue = createValue("Missing colon", &value_type::failTestVal);
};

struct failTest19 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest19> {
	using value_type = failTest19;
	static constexpr auto parseValue = createValue("Double colon", &value_type::failTestVal);
};

struct failTest20 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest20> {
	using value_type = failTest20;
	static constexpr auto parseValue = createValue("Comma instead of colon", &value_type::failTestVal);
};

struct failTest21 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest21> {
	using value_type = failTest21;
	static constexpr auto parseValue = createValue("Colon instead of comma", &value_type::failTestVal);
};

struct failTest22 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest22> {
	using value_type = failTest22;
	static constexpr auto parseValue = createValue("Bad value", &value_type::failTestVal);
};

struct failTest23 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest23> {
	using value_type = failTest23;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest24 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest24> {
	using value_type = failTest24;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest25 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest25> {
	using value_type = failTest25;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest26 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest26> {
	using value_type = failTest26;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest27 {
	std::vector<std::string> failTestVal{};
};

template<> struct jsonifier::core<failTest27> {
	using value_type = failTest27;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest28 {
	std::vector<double> failTestVal{};
};

template<> struct jsonifier::core<failTest28> {
	using value_type = failTest28;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest29 {
	std::vector<double> failTestVal{};
};

template<> struct jsonifier::core<failTest29> {
	using value_type = failTest29;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest30 {
	std::vector<double> failTestVal{};
};

template<> struct jsonifier::core<failTest30> {
	using value_type = failTest30;
	static constexpr auto parseValue = createScalarValue(&value_type::failTestVal);
};

struct failTest31 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest31> {
	using value_type = failTest31;
	static constexpr auto parseValue = createValue("Comma instead if closing brace", &value_type::failTestVal);
};

struct failTest32 {
	std::string failTestVal{};
};

template<> struct jsonifier::core<failTest32> {
	using value_type = failTest32;
	static constexpr auto parseValue = createValue("mismatch", &value_type::failTestVal);
};

struct object {};

struct discord_message_class {
	std::vector<std::string> objectWith1Member;
	int64_t integer;
	double real;
	double discordMessageE;
	double e;
	double empty;
	int64_t zero;
	int64_t one;
	std::string space;
	std::string quote;
	std::string backslash;
	std::string controls;
	std::string slash;
	std::string discordMessageAlpha;
	std::string alpha;
	std::string digit;
	std::string the0123456789;
	std::string special;
	std::string hex;
	bool discordMessageTrue;
	bool discordMessageFalse;
	std::nullptr_t null;
	std::vector<std::string> array;
	object objectVal;
	std::string address;
	std::string url;
	std::string comment;
	std::string discordMessage;
	std::vector<int64_t> sPACED;
	std::vector<int64_t> compact;
	std::string jsontext;
	std::string quotes;
	std::string test;
};

template<> struct jsonifier::core<object> {
	using value_type = object;
	static constexpr auto parseValue = createValue();
};

// Specialization of the core struct for discord_message_class
template<> struct jsonifier::core<discord_message_class> {
	using value_type = discord_message_class;
	static constexpr auto parseValue = createValue("objectWith1Member", &value_type::objectWith1Member, "integer", &value_type::integer, "real",
		&value_type::real, "discordMessageE", &value_type::discordMessageE, "e", &value_type::e, "empty", &value_type::empty, "zero",
		&value_type::zero, "one", &value_type::one, "space", &value_type::space, "quote", &value_type::quote, "backslash", &value_type::backslash,
		"controls", &value_type::controls, "slash", &value_type::slash, "discordMessageAlpha", &value_type::discordMessageAlpha, "alpha",
		&value_type::alpha, "digit", &value_type::digit, "the0123456789", &value_type::the0123456789, "special", &value_type::special, "hex",
		&value_type::hex, "discordMessageTrue", &value_type::discordMessageTrue, "discordMessageFalse", &value_type::discordMessageFalse, "null",
		&value_type::null, "array", &value_type::array, "object", &value_type::objectVal, "address", &value_type::address, "url", &value_type::url,
		"comment", &value_type::comment, "discordMessage", &value_type::discordMessage, "sPACED", &value_type::sPACED, "compact",
		&value_type::compact, "jsontext", &value_type::jsontext, "quotes", &value_type::quotes, "test", &value_type::test);
};

using passTest01 = std::vector<discord_message_class>;

using passTest02 = std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<
	std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::vector<std::string>>>>>>>>>>>>>>>>>>>;

struct json_test_pattern_pass3 {
	std::string theOutermostValue;
	std::string inThisTest;
};

template<> struct jsonifier::core<json_test_pattern_pass3> {
	using value_type = json_test_pattern_pass3;
	static constexpr auto parseValue = createValue("In this test", &value_type::inThisTest, "The outermost value", &value_type::theOutermostValue);
};

struct passTest03 {
	json_test_pattern_pass3 jsonTestPatternPass3;
};

template<> struct jsonifier::core<passTest03> {
	using value_type = passTest03;
	static constexpr auto parseValue = createValue("JSON Test Pattern pass3", &value_type::jsonTestPatternPass3);
};

class conformance_test {
  public:
	conformance_test() noexcept = default;

	conformance_test(const std::string& stringNew, const std::string& fileContentsNew, bool areWeAFailingTestNew)
		: fileContents{ fileContentsNew }, areWeAFailingTest{ areWeAFailingTestNew }, testName{ stringNew } {};
	jsonifier::string testName{};
	std::string fileContents{};
	bool areWeAFailingTest{};
};

bool processFilesInFolder(std::unordered_map<std::string, conformance_test>& resultFileContents) {
	try {
		for (const auto& entry: std::filesystem::directory_iterator(JSON_PATH)) {
			if (entry.is_regular_file()) {
				const std::string fileName = entry.path().filename().string();

				if (fileName.size() >= 5 && fileName.substr(fileName.size() - 5) == ".json") {
					std::ifstream file(entry.path());
					if (file.is_open()) {
						std::string fileContents((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
						bool returnValue = (fileName.find("fail") != std::string::npos);
						resultFileContents[fileName.c_str()] = { fileName, fileContents, returnValue };
						file.close();
					} else {
						std::cerr << "Error opening file: " << fileName << std::endl;
						return false;
					}
				}
			}
		}
	} catch (const std::exception& e) {
		std::cerr << "Error while processing files: " << e.what() << std::endl;
		return false;
	}

	return true;
}

template<typename test_type>
void runTest(test_type&& test, const std::string& testName, std::string& dataToParse, jsonifier::jsonifier_core<true>& parser, bool doWeFail = true) {
	auto result = parser.parseJson(test, dataToParse);
	if ((parser.getErrors().size() == 0 && result) && !doWeFail) {
		std::cout << "Test: " << testName << " = Succeeded 01" << std::endl;
	} else if ((parser.getErrors().size() != 0 || !result) && doWeFail) {
		std::cout << "Test: " << testName << " = Succeeded 02" << std::endl;
	} else {
		std::cout << "Test: " << testName << " = Failed" << std::endl;
		for (auto& value: parser.getErrors()) {
			std::cout << "Jsonifier Error: " << value << std::endl;
		}
	}
}

bool conformanceTests() {
	jsonifier::jsonifier_core<true> parser{};
	std::unordered_map<std::string, conformance_test> jsonTests{};
	processFilesInFolder(jsonTests);
	std::cout << "Conformance Tests: " << std::endl;
	runTest(failTest01{}, "fail1.json", jsonTests["fail1.json"].fileContents, parser);
	runTest(failTest02{}, "fail2.json", jsonTests["fail2.json"].fileContents, parser);
	runTest(failTest03{}, "fail3.json", jsonTests["fail3.json"].fileContents, parser);
	runTest(failTest04{}, "fail4.json", jsonTests["fail4.json"].fileContents, parser);
	runTest(failTest05{}, "fail5.json", jsonTests["fail5.json"].fileContents, parser);
	runTest(failTest06{}, "fail6.json", jsonTests["fail6.json"].fileContents, parser);
	runTest(failTest07{}, "fail7.json", jsonTests["fail7.json"].fileContents, parser);
	runTest(failTest08{}, "fail8.json", jsonTests["fail8.json"].fileContents, parser);
	runTest(failTest09{}, "fail9.json", jsonTests["fail9.json"].fileContents, parser);
	runTest(failTest10{}, "fail10.json", jsonTests["fail10.json"].fileContents, parser);
	runTest(failTest11{}, "fail11.json", jsonTests["fail11.json"].fileContents, parser);
	runTest(failTest12{}, "fail12.json", jsonTests["fail12.json"].fileContents, parser);
	runTest(failTest13{}, "fail13.json", jsonTests["fail13.json"].fileContents, parser);
	runTest(failTest14{}, "fail14.json", jsonTests["fail14.json"].fileContents, parser);
	runTest(failTest15{}, "fail15.json", jsonTests["fail15.json"].fileContents, parser);
	runTest(failTest16{}, "fail16.json", jsonTests["fail16.json"].fileContents, parser);
	runTest(failTest17{}, "fail17.json", jsonTests["fail17.json"].fileContents, parser);
	runTest(failTest18{}, "fail18.json", jsonTests["fail18.json"].fileContents, parser);
	runTest(failTest19{}, "fail19.json", jsonTests["fail19.json"].fileContents, parser);
	runTest(failTest20{}, "fail20.json", jsonTests["fail20.json"].fileContents, parser);
	runTest(failTest21{}, "fail21.json", jsonTests["fail21.json"].fileContents, parser);
	runTest(failTest22{}, "fail22.json", jsonTests["fail22.json"].fileContents, parser);
	runTest(failTest23{}, "fail23.json", jsonTests["fail23.json"].fileContents, parser);
	runTest(failTest24{}, "fail24.json", jsonTests["fail24.json"].fileContents, parser);
	runTest(failTest25{}, "fail25.json", jsonTests["fail25.json"].fileContents, parser);
	runTest(failTest26{}, "fail26.json", jsonTests["fail26.json"].fileContents, parser);
	runTest(failTest27{}, "fail27.json", jsonTests["fail27.json"].fileContents, parser);
	runTest(failTest28{}, "fail28.json", jsonTests["fail28.json"].fileContents, parser);
	runTest(failTest29{}, "fail29.json", jsonTests["fail29.json"].fileContents, parser);
	runTest(failTest30{}, "fail30.json", jsonTests["fail30.json"].fileContents, parser);
	runTest(failTest31{}, "fail31.json", jsonTests["fail31.json"].fileContents, parser);
	runTest(failTest32{}, "fail32.json", jsonTests["fail32.json"].fileContents, parser);
	runTest(passTest01{}, "pass1.json", jsonTests["pass1.json"].fileContents, parser, false);
	runTest(passTest03{}, "pass2.json", jsonTests["pass2.json"].fileContents, parser, false);
	runTest(passTest03{}, "pass3.json", jsonTests["pass3.json"].fileContents, parser, false);
	return true;
}