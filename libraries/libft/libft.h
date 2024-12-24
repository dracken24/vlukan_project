/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:00:19 by nadesjar          #+#    #+#             */
/*   Updated: 2022/12/14 03:26:04 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "./gnl/gnl.h"
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdio.h>
# include <stdbool.h>

# define DR_RED 1
# define DR_GREEN 2
# define DR_YELLOW 3
# define DR_BLUE 4
# define DR_PURPLE 5
# define DR_CYAN 6
# define DR_WHITE 7
# define DR_RESET 8

# define BASEXMIN "0123456789abcdef"
# define BASEXMAJ "0123456789ABCDEF"

typedef unsigned int	t_uint;

typedef struct s_list{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_lct{
	size_t	i;
	size_t	k;
	int		index;
}	t_lct;

size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_fd_len(char *name, int fd_ext);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

int		ft_strncmp_tab(char **tab, char *str, size_t len, size_t nbr_turn);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
int		ft_nbr_sign_in_str(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_nbr_sign_in_tab(char **tab, char c);
int		ft_atoi_base(char *str, char *base);
int		ft_str_to_hexa(const char *str);
int		ft_open_fd(char *str, int i);
int		ft_array_size(char **array);
int		ft_atoi(const char *str);
int		ft_lstsize(t_list *lst);
int		ft_nbr_ptr(char **tab);
int		ft_p_or_imp(int nbr);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

double	ft_atof(const char *str);

bool	ft_strchr_bool(const char *str, int c);
bool	ft_tabchr(char **tab, char *find);
bool	ft_is_only(char *buffer, char c, int len);

char	*ft_strnstr_ret_tofind(const char *str,
			const char *to_find, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
char	*ft_strchr_tab(char **tab, char **tab_2, size_t nbr_turn);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *str, int c, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char *str1, char *str2, int nbr);
char	**ft_split_cmd(char const *str, char c);
char	*ft_trim_token(char *token, char sep);
char	*ft_strchr(const char *str, int c);
char	*ft_strtok(char *buffer, char sep);
char	**ft_split(char const *s, char c);
char	*ft_charjoin(char a, char b);
char	*ft_strdup(char *src);
char	*ft_itoa(int n);

void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free(void *ptr);

void	ft_striteri(char *str, void (*f)(unsigned int, char *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *newList);
void	ft_lstadd_back(t_list **lst, t_list *newList);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_bzero(void *str, size_t len);
void	ft_putendl_fd(char *str, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_print_doc(char *str);
void	ft_swap(int *a, int *b);
void	ft_free_ptr(void **array);
void	ft_color(int color);

#endif
