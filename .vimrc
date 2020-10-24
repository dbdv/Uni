set number
set mouse=a
set numberwidth=1
syntax enable
set showcmd
set ruler
set encoding=utf-8
set showmatch
set sw=2
set relativenumber
set laststatus=2
set expandtab
set autoindent
filetype indent on
autocmd filetype c nnoremap <F4> :!gcc % -o %r <CR>
autocmd filetype c nnoremap <F5> :!gcc % -o %r && ./%r <CR>
