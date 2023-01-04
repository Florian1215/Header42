##/* ************************************************************************** */
##/*                                                                            */
##/*                                                        :::      ::::::::   */
##/*   $FILE_NAME                                         :+:      :+:    :+:   */
##/*                                                    +:+ +:+         +:+     */
##/*   By: $USER_NAME <$USER_NAME@student.42.fr>      +#+  +:+       +#+        */
##/*                                                +#+#+#+#+#+   +#+           */
##/*   Created: 2019/09/03 09:48:17 by $USER_NAME        #+#    #+#             */
##/*   Updated: 2019/10/06 17:36:48 by $USER_NAME       ###   ########lyon.fr   */
##/*                                                                            */
##/* ************************************************************************** */
#set( $empty =  "                                                                                " )
#set( $l_111 =  "/* ************************************************************************** */" )
#set( $l_210 =  "/*                                                                            */" )
#set( $l_3 =    "/*                                                        :::      ::::::::   */" )
#set( $l_pref = "/*   " )
#set( $l_4_post = ":+:      :+:    :+:   */" )
#set( $l_5 =    "/*                                                    +:+ +:+         +:+     */" )
#set( $l_6_pref = "/*   By: " )
#set( $l_6_post = "+#+  +:+       +#+        */" )
#set( $l_7 =    "/*                                                +#+#+#+#+#+   +#+           */" )
#set( $l_8_pref = "/*   Created: " )
#set( $l_9_pref = "/*   Updated: " )
#set( $l_8_post = "#+#    #+#             */" )
#set( $l_9_post = '###   ########lyon.fr   */' )
#set( $date = $YEAR.trim() )
#set( $date = "${date}/" )
#set( $month = $MONTH.trim() )
#if ($month.length() < 2 ) #set ($date = "${date}0") #end
#set( $date = "$date$month" )
#set( $date = "$date/" )
#set( $day = $DAY.trim() )
#if ($day.length() < 2 ) #set ($date = "${date}0") #end
#set( $date = "$date$day" )
#set( $date = "$date " )
#set( $hour = $HOUR.trim() )
#if ($hour.length() < 2 ) #set ($date = "${date}0") #end
#set( $date = "$date$hour" )
#set( $date = "$date:" )
#set( $minute = $MINUTE.trim() )
#if ($minute.length() < 2 ) #set ($date = "${date}0") #end
#set( $date = "$date$minute" )
#set( $date = "$date:00 by " )
#set( $fname = $FILE_NAME )
#set( $fnamelength = $fname.length() )
#if ( $fnamelength > 50 )
    #set( $fname = "$fname.substring(0, 47)... " );
#else
    #set( $pfelen = 51 - $fnamelength )
    #set( $pempty = $empty.substring(0, $pfelen) )
    #set( $fname = "$fname$pempty")
#end
#set ( $uname = $USER )
#set ( $uname_length = $uname.length() )
#if ( $uname_length > 8 )
    #set ( $uname = $uname.substring(0, 8) )
    #set ( $uname_length = 8 )
#end
#set ( $uemail = "$uname@student.42lyon.fr" )
#set ( $uemail_length = $uemail.length() )
#set ( $l6_length = $uname_length + $uemail_length + 3)
#set ( $pfelen = 43 - $uname_length - $uemail_length - 3)
#set( $pempty = $empty.substring(0, $pfelen) )
#set ( $l6 = "$uname <$uemail>" )
#set ( $l6 = "$l6$pempty" )
#set ( $pfelen = 18 - $uname_length)
#set( $pempty = $empty.substring(0, $pfelen) )
#set ( $l8 = "$uname$pempty" )
#set ( $pfelen = 17 - $uname_length)
#set( $pempty = $empty.substring(0, $pfelen) )
#set ( $l9 = "$uname$pempty" )
$l_111
$l_210
$l_3
$l_pref$fname$l_4_post
$l_5
$l_6_pref$l6$l_6_post
$l_7
$l_8_pref$date$l8$l_8_post
$l_9_pref$date$l9$l_9_post
$l_210
$l_111

