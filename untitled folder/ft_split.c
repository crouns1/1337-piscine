[200~char **split(char *str)
{
	    int i = 0;
		    int k = 0;
			    int j;
				    char **arr;

					    if (!(arr = malloc(2048)))
							        return (NULL);
						    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
								        i++;
							    while (str[i])
									    {
											        j = 0;
													        if (!(arr[k] = malloc(4096)))
																            return (NULL);
															        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
																		            arr[k][j++] = str[i++];
																	        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
																				            i++;
																			        arr[k][j] = '\0';
																					        k++;
																							    }
								    arr[k] = NULL;
									    return (arr);
}
