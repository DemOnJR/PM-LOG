DROP TABLE IF EXISTS `whisper_log`;
CREATE TABLE `whisper_log` (
  `id` int(20) NOT NULL AUTO_INCREMENT,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `from` varchar(24) NOT NULL DEFAULT 'error',
  `to` varchar(24) NOT NULL DEFAULT 'error',
  `text` varchar(250) NOT NULL DEFAULT 'empty_msg_error',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;