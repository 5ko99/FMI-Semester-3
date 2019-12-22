#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <type_traits>
#include <stack>
#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <memory>

using namespace std;

class StringCalculator {
private:
	stack<string> stringsStack;
public:
	StringCalculator() {
		stringsStack.push("");
	}

	void append(const string &rhsString) {
		auto currentString = stringsStack.top();
		currentString += rhsString;
		stringsStack.push(currentString);
	}

	void fillBlankChars(size_t charsCount, int startPosition) {
		auto currentString = stringsStack.top();

		if (startPosition < 0) {
			startPosition = -startPosition;
			startPosition = currentString.length() - startPosition;
		}
		auto startPositionIterator = currentString.begin() + startPosition;
		auto endPositionIterator = startPositionIterator + charsCount;
		fill(startPositionIterator, endPositionIterator, ' ');

		stringsStack.push(currentString);
	}

	void undo() {
		stringsStack.pop();
	}

	const string& getCurrentString() const {
		return stringsStack.top();
	}
	
};

template<typename T>
class Command {
protected:
	string name;
	vector<string> arguments;
public:
	Command(const string& name) : name(name) {}

	void setArguments(const vector<string>& arguments) {
		this->arguments = arguments;
	}

	virtual void applyTo(T& actionReceiver) = 0;

	const string& toString() const {
		return name;
	}

	//virtual destructor
};

template<typename T>
class AppendCommand : public Command<T> {
public:
	AppendCommand() : Command<T>(string("append")) {}
	void applyTo(T &actionReceiver) {
		assert(this->arguments.size() == 1);
		actionReceiver.append(this->arguments[0]);
	}

};

template<typename T>
class DeleteCommand : public Command<T> {
public:
	DeleteCommand() : Command<T>(string("delete")) {}
	void applyTo(T& actionReceiver) {
		assert(this->arguments.size() == 2);
		actionReceiver.fillBlankChars(stoi(this->arguments[0]), stoi(this->arguments[1]));
	}
};

template<typename T>
class UndoCommand : public Command<T> {
public:
	UndoCommand() : Command<T>(string("undo")) {}
	void applyTo(T& actionReceiver) {
		assert(this->arguments.size() == 0);
		actionReceiver.undo();
	}
};

template<typename T>
class PrintCommand : public Command<T> {
public:
	PrintCommand() : Command<T>(string("print")) {}
	void applyTo(T& actionReceiver) {
		assert(this->arguments.size() == 2);
		auto beginIndex = stoi(this->arguments[0]);
		auto endIndex = stoi(this->arguments[1]);
		cout << actionReceiver.getCurrentString().substr(beginIndex, endIndex + 1);
	}
};

template<typename T>
class ExitCommand : public Command<T> {
public:
	ExitCommand() : Command<T>(string("exit")) {}
	void applyTo(T& actionReceiver) {
		assert(this->arguments.size() == 0);
		exit(0);
	}
};

class Application {
private:
	vector<unique_ptr<Command<StringCalculator>>> commands;
	StringCalculator stringCalculator;

	void findAndApplyCommand(const string &commandName, const vector<string> &arguments) {
		for (const auto &command : commands) {
			if (command->toString() == commandName) {
				command->setArguments(arguments);
				command->applyTo(stringCalculator);
			}
		}
	}

	void parseLine(const string &line) {
		stringstream stream;
		stream << line;

		string commandName;
		stream >> commandName;

		vector<string> arguments;
		string argument;

		while (stream >> argument) {
			arguments.push_back(argument);
		}

		findAndApplyCommand(commandName, arguments);
	}
public:
	Application() {
		commands.push_back(make_unique<AppendCommand<StringCalculator>>());
		commands.push_back(make_unique<DeleteCommand<StringCalculator>>());
		commands.push_back(make_unique<UndoCommand<StringCalculator>>());
		commands.push_back(make_unique<PrintCommand<StringCalculator>>());
		commands.push_back(make_unique<ExitCommand<StringCalculator>>());
	}

	void run() {
		string line;
		while (true) {
			getline(cin, line);
			parseLine(line);
		}
	}
};

int main() {
	Application application;
	application.run();
	
	
	return 0;
}