_CHAPER 2_
=========================================================
Link the local repository to github
=========================================================

_At this point you can do all the basic Git operations locally: Create or clone a repository, make changes, prepare and commit those changes, and view the history of changes in the repository. Here's the best feature of Git: Your branch model.
Create your repository on the github platform_

Copy the https link

In your local repo folder: _git remote add origin_ [you paste the link here]

For example: git remote add origin https://github.com/etc

If you already have added everything to staging and already hicicste commit, you only have to upload it to github with: _git push -u origin master_

**Note**: You should be asked for github username and password

**Note**: f you haven't set up your name and mail, do so with the commands

a) _git config --global user.name "Your name"_

b) _git config --global user.email "Your e-mail"_

Important concepts
==========================================================
_git branch_: See the existing branches and on which you are currently

_git branch something_: Create a new branch called "something"

_git checkout branch_name_: Changed to called branch as indicated in "branch name"
Conceptos
=========================================================
_git fetch_: Lower ingesses of the remote

_git merge branch_: Mix changes from a branch you're currently

_git pull_: It serves to download and make changes to the remote repository

Ulil commandos
=========================================================
_git log_: Show the log of your commits in the current branch

_git status_: Shows staging files and untracked files

echo 'My Project' > README

_git status_

On branch master

Untracked files:

  (use "git add <file>..." to include in what will be committed)

    README
    
(use "git add" to track)

_CHAPER 3_
=========================================================
_At this point, you'll feel comfortable creating new branches, jumping between branches to work, and merging (merge) branches between them. You'll also learn how to share your branches by sending them (push) to a shared server, how to work collaboratively on shared branches, and how to reorganize (rebase) your branches before sharing them. Next, we'll talk about what you need to have your own Git hosting server_

To visualize this, let’s assume that you have a directory containing three files, and you stage them all and commit. Staging the files computes a checksum for each one (the SHA-1 hash we mentioned in Getting Started), stores that version of the file in the Git repository (Git refers to them as blobs), and adds that checksum to the staging area:

_git add README test.rb LICENSE

_git commit -m 'Initial commit'

What happens when you create a new branch? Well, doing so creates a new pointer for you to move around. Let’s say you want to create a new branch called testing. You do this with the git branch command:

_git branch testing

=========================================================
Now your project history has diverged (see Divergent history). You created and switched to a branch, did some work on it, and then switched back to your main branch and did other work. Both of those changes are isolated in separate branches: you can switch back and forth between the branches and merge them together when you’re ready. And you did all that with simple branch, checkout, and commit commands

=========================================================
This looks a bit different than the hotfix merge you did earlier. In this case, your development history has diverged from some older point. Because the commit on the branch you’re on isn’t a direct ancestor of the branch you’re merging in, Git has to do some work. In this case, Git does a simple three-way merge, using the two snapshots pointed to by the branch tips and the common ancestor of the two.

=========================================================
Occasionally, this process doesn’t go smoothly. If you changed the same part of the same file differently in the two branches you’re merging, Git won’t be able to merge them cleanly. If your fix for issue #53 modified the same part of a file as the hotfix branch

=========================================================

Topic branches, however, are useful in projects of any size. A topic branch is a short-lived branch that you create and use for a single particular feature or related work. This is something you’ve likely never done with a VCS before because it’s generally too expensive to create and merge branches. But in Git it’s common to create, work on, merge, and delete branches several times a day.

It’s important to remember when you’re doing all this that these branches are completely local. When you’re branching and merging, everything is being done only in your Git repository — there is no communication with the server.

=========================================================
Remote references are references (pointers) in your remote repositories, including branches, tags, and so on. You can get a full list of remote references explicitly with git ls-remote <remote>, or git remote show <remote> for remote branches as well as more information. Nevertheless, a more common way is to take advantage of remote-tracking branches.
  
Now, you can run git fetch teamone to fetch everything the remote teamone server has that you don’t have yet. Because that server has a subset of the data your origin server has right now, Git fetches no data but sets a remote-tracking branch called teamone/master to point to the commit that teamone has as its master branch.

Note that the snapshot pointed to by the final commit you end up with, whether it’s the last of the rebased commits for a rebase or the final merge commit after a merge, is the same snapshot — it’s only the history that is different. Rebasing replays changes from one line of work onto another in the order they were introduced, whereas merging takes the endpoints and merges them together.

