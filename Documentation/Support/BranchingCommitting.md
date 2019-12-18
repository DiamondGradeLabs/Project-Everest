# Branching & Committing

This document outlines the branching and committing process. 

## Branching 
The default branch is **0.0.1**. All development branches must be made off of this branch.

Branch "Types": 

 - Feature: This branch type is for new feature additions to the project.
 - Documentation: This branch is for documentation updates.
 - Bug Fix: This branch type is for single bug fix commits.
 - Patch: This branch type is for multiple bug fix commits in the same branch.

A branch name should be as follows:
**Feature**:   Feature-\<Feature Name\> (example: Feature-Example-Feature)
**Documentation**: Documentation- \<Documents Summary Title\> (example: Documentation-General-Project-Documents)
**Issue Fix**: Issue- #\<Issue Number\> \<Issue Title\>  (example: Issue-#-1-Example-Issue)
**Patch**: Patch- #\<Issue Number\>, \<Issue Number\>, etc. (example: Patch-Issue-#-1,2,3)

## Committing
As far as committing goes this should only be on branches you own. Any pull request to project branches by anyone other than a maintainer will be rejected.

As far as commits go just use the following format:
\<Commit Title\>
\--------------------------
[brief descriptions of significant changes]

*Example*:
Added Documentation for Example
\--------------------------
Added \Example.txt\

## Branching And Committing Example
Let us say that you are wanting to add a new feature and no one else has created a branch for that feature. Let us also say that feature is going to be adding a GameObject class.

Here is an example branch for this will a couple of commits:
New branch created from root default of **0.0.1**: Feature-GameObject

Within the branch you may have some commits:

*This commit could represent the initial feature code update*
Added GameObject Class
\--------------------------
Created GameObject header file to template the GameObject class
Created GameObject C++ file to implement the GameObject class
Created GameObject Markdown file to explain the purpose of the class

*Let say after you tested the feature you found a bug. This does need to be reported as an issue since you haven't pushed the branch to the repository yet. Therefore you can make another commit as follows*

Corrected GameObject Header
\--------------------------
Added reference to Object.h in header file

After you have completed your changes you can publish the branch to the upstream repo/fork and then create a pull request. Once you create a pull request we can process it and get it added to that branch. 