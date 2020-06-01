# CONTRIBUTION GUIDELINES

## Before contributing

Welcome to DataStructuresandAlgorithms!
Before submitting pull requests, please make sure that you have **read all the guidelines**. If you have any doubts about this contribution guide, please open an issue and clearly state your concerns.

## Contributor

We are very happy that you consider implementing data structures and algorithms for others! Being one of our contributors, you agree and confirm that:

- You did your own work.
  - No plagiarism allowed.
  - Any plagiarized work will not be merged.
- Your submitted work fulfils or mostly fulfils our styles and standards.

**New implementation** are welcome!

**Improving comments** and **adding tests** to existing algorithms are much appreciated.

## Contribute a new implementation (code)

- Have a look at open issues. They contain the list of data structures/algorithms we plan to implement. Pick an unassigned issue.
- You can also create a new issue for an algorithm that is not in the list.
- **Just make sure that you are assigned for the issue.**
- Code the data structure/algorithm following the styleguide defined below.
- Send a PR.
- Be sure to not include any compiled binaries in the patch.
- While sending a PR make sure you follow one issue per PR rule.

## Suggesting a data structure/algorithm

- First make sure you are not suggesting a duplicate.
- If not, proceed and create the issue. Make sure that you specify only one
language in an issue. Create multiple issues for different languages.
- Title of issue should be of the following format -

    ```commit guideline
    [Data Structure/Algorithm] Data Structure/Algorithm Name
    ```

- Please include at least one external link for the data structure/algorithm in the issue's body for each issue. The link should explain the algorithm/problem/data structure in detail.

## Commit Guidelines

- It is recommended to keep your changes grouped logically within individual commits. Maintainers find it easier to understand changes that are logically spilt across multiple commits.

  ```git
  git add file_xyz.cpp
  git commit -m "your message"
  ```

Examples of commit messages with semantic prefixes:

  ```commit message
  add: xyz data structure/algorithm
  fix: xyz data structure/algorithm bug
  feature: xyx data structure/algorithm, class xyz
  test: xyz data structure/algorithm
  docs: xyz data structure/algorithm
  ```

Common prefixes:

- add: Adds a new data structure/algorithm
- fix: A bug fix in data structure/algorithm
- feature: A new feature for data structure/algorithm
- docs: Documentation changes for data structure/algorithm
- test: Correct existing tests or add new ones for data structure/algorithm

## Pull Request Guidelines

- Make your pull requests to be specific and focused. Instead of contributing "several sorting algorithms" all at once contribute them all one by one separately (i.e. one pull request for "Quick Sort", another one for "Heap Sort" and so on).
- A pull request message consists of 3 parts:
  - shortlog
  - commit body
  - issue reference

Example 1:

```Pull Request Message
Adds QuickSort Algorithm

This adds QuickSort Algorithm which return the concatenation of the
quicksorted list of elements that are less than or equal to the pivot, the
pivot, and the quicksorted list of elements that are greater than the pivot.

Closes https://github.com/Imadarshsri/DataStructuresandAlgorithms/issues/2
```

Example 2:

```Pull Request Message
quicksort.cpp : Fixes QuickSort Algorithm

Description of what has been fixed

Closes https://github.com/Imadarshsri/DataStructuresandAlgorithms/issues/5
```

### Shortlog

Example:

```Shortlog in Pull Request
Adds QuickSort Algorithm
xyz.cpp : Adds test for xyz data structure/algorithm
xyz.cpp : Adds feature in xyz data structure/algorithm
xyz.cpp : Adds documentation to xyz data structure/algorithm
xyz.cpp : Fixes xyz data structure/algorithm
xyz.cpp : Fixes test for xyz data structure/algorithm
```

- **Maximum of 50 characters.**

- Keeping subject lines at this length ensures that they are readable, and
  explains the change in a concise way.
- Should describe the change.
- Should not include WIP prefix.
- Should have a tag and a short description separated by a colon (`:`) if making changes to only a file

- **Tag**
  - The file or class or package being modified.
  - Not mandatory.
  - Common prefixes:
    - adds: Adds a new data structure/algorithm
    - fixes : A bug fix in data structure/algorithm
    - addes feature: A new feature for data structure/algorithm
    - addes docs or fixes docs: Documentation changes for data structure/algorithm
    - addes test or fixes test: Correct existing tests or add new ones for data structure/algorithm

- **Short Description**
  - Starts with a capital letter.
  - Written in imperative present tense (i.e. `Add something`, `not Adding
  something` or `Added something`).
  - No trailing period.

### Commit Body

Example:

```Commit Body
This adds QuickSort Algorithm which return the concatenation of the
quicksorted list of elements that are less than or equal to the pivot, the
pivot, and the quicksorted list of elements that are greater than the pivot.
```

- Maximum of 72 chars excluding newline for each line.

  The recommendation is to add a line break at 72 characters, so that Git has
  plenty of room to indent text while still keeping everything under 80
  characters overall.
- Not mandatory - but helps explain what you’re doing.

- Should describe the reasoning for your changes. This is especially important
for complex changes that are not self explanatory. This is also the right place
to write about related bugs.
- First person should not be used here.

### Issue reference

Example:

```html
Closes https://github.com/Imadarshsri/DataStructuresandAlgorithms/issues/2
```

- Should use the `Fixes` keyword if your commit fixes a bug, or `Closes` if it
adds a feature/enhancement.
- In some situations, e.g. bugs overcome in documents, the difference between
`Fixes` and `Closes` may be very small and subjective. If a specific issue may
lead to an unintended behaviour from the user or from the program it should be
considered a bug, and should be addresed with `Fixes`. If an issue is labelled
with `bug` you should always use `Fixes`. For all other issues use `Closes`.
- Should use full URL to the issue.
- There should be a single space between the `Fixes` or `Closes` and the URL.

> **Note:**
>
> - The issue reference will automatically add the link of the commit in the
issue.
> - It will also automatically close the issue when the commit is accepted into
repository.

## Use a Consistent Coding Style

- Please use the directory structure of the repository.
- Use separate folders for each concept.
- Filename should be derived from the **folder name**. (e.g. : `longest_common_subsequence` becomes `longest_common_subsequence.cpp`)
- File extension for code should be `*.h` `*.cpp`.
- Code submitted should be **modular**.
- Name of master function of the code should be kept same as filename to the
best extent possible.
- Prefer **classes** instead of **multiple helper functions** (where applicable).
- Avoid using **struct** and instead use the **class** keyword.
- Use meaningful variable, method and function names and comments.
- No profanity.
- Don't use **bits/stdc++.h** because this is quite Linux specific and slows down the compilation process..
- Strictly use snake_case (underscore_separated) in filenames.
- If you have added or modified code, please make sure the code compiles before submitting.
- We have added [skeleton codes](#sample-code). Please follow them as much as possible.
- Provide README.md for each of the algorithms with explanations of the algorithm and with links to further readings.
- **Be consistent in use of these guidelines.**

### New File Name guidelines

- Filename should be derived from the **folder name**. (e.g. : `longest_common_subsequence` becomes `longest_common_subsequence.cpp`)
- Use lowercase words with ``"_"`` as separator
- For instance

```File Name
ANewCppClass.CPP       is incorrect
aNewCppClass.cpp       is incorrect
a-new-cpp-class.cpp    is incorrect
a_new_cpp_class.cpp    is correct
```

### New Directory guidelines

- Folder name should be in full lowercase. If the data structure/algorithm name has multiple words, separate them by underscores. (e.g. : `longest_common_subsequence`)
- We recommend adding files to existing directories as much as possible.
- Use lowercase words with ``"_"`` as separator ( no spaces or ```"-"``` allowed )
- For instance

```Directory Name
SomeNewCategory          is incorrect
some-new-category        is incorrect  
some_new_category        is correct
```

## Documentation

- Make sure you put useful comments in your code.
- If you have modified/added documentation, please ensure that your language is concise and contains no grammar errors.
- Do not update README.md along with other changes, first create an issue and then link to that issue in your pull request to suggest specific changes required to README.md

## Test

- Make sure to add examples and test cases in your main() function.
- If you find any algorithm or document without tests, please feel free to create a pull request or issue describing suggested changes.
- The *test* code should be added under a folder name *`tests`* in the directory containing the implementation
- Test types
  - The **user defined test** takes input from user for all functions.
  - The **manual test** all the data is predefined and all the functions are tested accordingly.
- Naming the **tester code** (e.g. : `user_defined_test_longest_common_subsequences.cpp` or `manual_test_longest_common_subsequences.cpp`)

## Sample Code
