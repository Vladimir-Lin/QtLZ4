/****************************************************************************
 *
 * Copyright (C) 2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtlz4.sourceforge.net/
 *
 * QtLZ4 acts as an interface between Qt and QuickLZ library.
 * Please keep QtLZ4 as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#include <qtlz4.h>
#include "lz4.h"

QT_BEGIN_NAMESPACE

//////////////////////////////////////////////////////////////////////////////

QtLZ4:: QtLZ4     (void)
      : lz4Packet (NULL)
{
}

QtLZ4::~QtLZ4 (void)
{
  CleanUp ( ) ;
}

bool QtLZ4::isLZ4(QByteArray & header)
{
  return false ;
}

bool QtLZ4::IsCorrect(int returnCode)
{
  return false ;
}

bool QtLZ4::IsEnd(int returnCode)
{
  return ( returnCode > 0 ) ;
}

bool QtLZ4::IsFault(int returnCode)
{
  return false ;
}

void QtLZ4::CleanUp(void)
{
  if ( NULL == lz4Packet ) return ;
}

void QtLZ4::CompressHeader(QByteArray & Compressed)
{
}

void QtLZ4::CompressTail(unsigned int checksum,QByteArray & Compressed)
{
}

int QtLZ4::DecompressHeader(const QByteArray & Source)
{
  return 0 ;
}

int QtLZ4::BeginCompress(QVariantList arguments)
{
  return 0 ;
}

int QtLZ4::BeginCompress(int level,int method)
{
  QVariantList args             ;
  args << level                 ;
  args << method                ;
  return BeginCompress ( args ) ;
}

int QtLZ4::doCompress(const QByteArray & Source,QByteArray & Compressed)
{
  return 0 ;
}

int QtLZ4::doSection(QByteArray & Source,QByteArray & Compressed)
{
  return 0 ;
}

int QtLZ4::CompressDone(QByteArray & Compressed)
{
  return 0 ;
}

int QtLZ4::BeginDecompress(void)
{
  return 0 ;
}

int QtLZ4::doDecompress(const QByteArray & Source,QByteArray & Decompressed)
{
  return 0 ;
}

int QtLZ4::undoSection(QByteArray & Source,QByteArray & Decompressed)
{
  return 0 ;
}

int QtLZ4::DecompressDone(void)
{
  return 0 ;
}

bool QtLZ4::IsTail(QByteArray & header)
{
  if ( NULL == lz4Packet     ) return false                     ;
  if ( header . size ( ) < 8 ) return false                     ;
  unsigned char * footer  = (unsigned char *) header . data ( ) ;
  bool            correct = true                                ;
  return correct                                                ;
}

//////////////////////////////////////////////////////////////////////////////

QT_END_NAMESPACE
